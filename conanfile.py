from conans import ConanFile, CMake, tools

class BuildConan(ConanFile):
	name = "Pulsr.Core"
	version = "1.0"

	license = "MPL-2.0"
	description = "Pulsr Game Engine - Core Module"
	url = "https://github.com/strootje/pulsr.core"

	exports_sources = "*"
	requires = (
		"Gosip/1.0@strootje/stable"
	)

	def package_id(self):
		self.info.header_only()

	def package(self):
		self.copy("*.hpp", dst="include/Pulsr.Core", src="include")
