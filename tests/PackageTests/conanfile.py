from conans import ConanFile, CMake
import os

class GrawlogTestConan(ConanFile):
	settings = "os", "compiler", "build_type", "arch"
	generators = "cmake"

	def build(self):
		cmake = CMake(self)
		cmake.configure(source_dir=self.conanfile_directory, build_dir="./")
		cmake.build()

	def imports(self):
		self.copy("*.dll", dst="bin", src="bin")
		self.copy("*.dylib*", dst="bin", src="lib")
		self.copy('*.so*', dst='bin', src='lib')

	def test(self):
		os.chdir("bin")
		self.run(".%sPackageTests" % os.sep)
