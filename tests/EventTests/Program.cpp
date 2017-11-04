#include "./Event.hpp"
#include <gtest/gtest.h>

class TestEventArgs
{
};

class EventHelper;
class TestEvent : public Pulsr::Core::Event<TestEventArgs>
{
	friend class EventHelper;
};

class EventHelper
{
public:
	TestEvent OnEvent;
	void Trigger()
	{
		OnEvent(TestEventArgs());
	}
};

TEST(EventTests, EventTriggerdNever_IsNotCalled)
{
	// Arrange
	int i = 0;
	EventHelper helper;
	helper.OnEvent += [&i]( const auto& evt ) { i++; };

	// Act
	// nothing

	// Assert
	ASSERT_EQ(0, i);
}

TEST(EventTests, EventTriggerd_IsCalledCorrectly)
{
	// Arrange
	int i = 0;
	EventHelper helper;
	helper.OnEvent += [&i]( const auto& evt ) { i++; };

	// Act
	helper.Trigger();

	// Assert
	ASSERT_EQ(1, i);
}

TEST(EventTests, EventTriggerdTwice_IsCalledCorrectly)
{
	// Arrange
	int i = 0;
	EventHelper helper;
	helper.OnEvent += [&i]( const auto& evt ) { i++; };

	// Act
	helper.Trigger();
	helper.Trigger();

	// Assert
	ASSERT_EQ(2, i);
}
