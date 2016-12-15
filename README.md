# mutator

<a href="https://scan.coverity.com/projects/bloodstalker-mutator">
  <img alt="Coverity Scan Build Status"
       src="https://scan.coverity.com/projects/11154/badge.svg"/>
</a>
[![CII Best Practices](https://bestpractices.coreinfrastructure.org/projects/553/badge)](https://bestpractices.coreinfrastructure.org/projects/553)
[![Build Status](https://travis-ci.org/bloodstalker/mutator.svg?branch=master)](https://travis-ci.org/bloodstalker/mutator)

A C code mutator,Misra-C checker and when possible, a Misra-C implementer using the Clang frontend written mostly in C++ and some bash.<br/>
<br/>
Here's a quick look into the project files and directories:<br/>
* **mutator-lvl0.cpp** contains the Misra-C rules to check. The Executable named after it, will run the Misra-C rule checks.<br/>
* **mutator.cpp** contains the mutators which are not copiled for the time being since im working on Misra-C only for the time being, along with some Misra-C implementers.<br/>
* **mutator-lvl2.cpp** contains some other Misra-C implementers. Rewriting the code in multiple stages allows for more simplistic rewrites and is also a check to see whether the output is actually buildable.<br/>
* **mutator.sh** is the UI, which is supposed to work like just any other nix UI(option-wise).<br/>
* The **utility** folder holds the C source and headers that are necessary to run the instrumented code(currently unused).<br/>
* **mutator-aux.cpp.h** hold the auxillary functions that most modules will need.<br/>
* Well there is the **makefile**.<br/>
* The **test** folder holds the **TDD** tests.<br/>
* The **docs** folder contains the documents related to the project. Currently the doc for the current status of the Misra-C:2004 implementation is there.<br/>
* The folder named **tinyxml2** holds the tinyxml2 source files.<br/>
* The folder named **extra-tools** holds some tool that help the dev process. Right now it only holds a little script that has some limited argument parsing abilities to dump AST.<br/>
* The folder named **samples** holds the output samples for the project. Currently, you can find the text and XML output of the Misra-C rule checker run over the TDD tests.<br/>

#### **The Misra-C rule checking portion has not been extensively tested since it is still WIP but is very much buildable and usable.**<br/>

###Building and Running
To build the project, you need to have the LLVM libraries 4.0(that's the version the project is currently using) to avoid any unforseen results. The project can not be built with LLVM 3.8 or lower, but I haven't tested LLVM 3.9. To Build the project just run `make`. After that, just run **make** and you're good to go. Running make will build three executables which can be used independently or with **mutator.sh**(use -h to see a list of options.)<br/>
<br/>
You need to make sure that **llvm-configure** is in path since that's how the make file access the build parameters used to build the library (Thank you LLVM!).<br/>
The makefile uses **clang++ 4.0** as the compiler to build the project. On paper, any latest version of g++ should do the trick but this remains untested.<br/>
<br/>
**mutator-lvl0** will run the Misra-C:2004 checks.<br/>
**mutator** will run the level-1 Misra-C:2004 implementers.<br/>
**mutator-lvl2** will run the level-2 Misra-C:2004 implementers.<br/>
<br/>
Currently, the mutation-only features(mutation for the sake of mutation, technically implementing Misra-C is also a form of mutation) are turned off in **mutator** and **mutator-lvl2** though some automatic code refactoring features work in both executables. Just run a sample code through **mutator** and then **mutator-lvl2** for a demo.<br/>
<br/>
If your code needs a compilation database for clang to understand it and you don't have one,you can use [Bear](https://github.com/rizsotto/Bear). Please note that bear will capture what the make runs, not what is in the makefile.<br/>

### Dev Method
TDD tests are created for each added feature which are stored under the **test** folder in the repo.<br/>
Smoke tests and Daily builds are conducted to make sure the code base builds correctly more than once every day.<br/>
Everytime there is a new commit, the code base is buildable and runnable. If you are having problems, raise an issue or let me know.<br/>

### Notes
#### **The project will be updated everytime there is a major LLVM release and will use those libraries instead of the old ones.**
#### **As soon as I manage to find a copy of the Misra-C:2012 document, I'll implement that. Currently the tool only supports Misra-C:2004.**
Misra-C rule checker outputs a simple text or xml report. JSON support will be implemented in the future.<br/>
I'm using **TDD**. The files under the **test** folder are for that purpose. They are not unit tests or are not meant to test that the build process was successful.Those tests will be added later.<br/>
The project has been tested to biuld on Fedora23(other major linux distros should be fine). Windows remains untested. I might give it a try when I feel masochistic enough.<br/>
The project might, at a later point in time, start using **Cmake** for the build process. Currently the TDD tests use CMake as an extra check.<br/>
Misra 2012 support will be added in the future.<br/>
Also a note regarding building the LLVM libraries. It is safer to build the libraries with clang++ if youre going to later use those libraries with clang++(you can get the distro version of clang from your distro's repo). The same applies to g++.<br/>
The master branch is the dev version. Release versions will be forked.<br/>
Doxygen comments will be added later on.<br/>
The XML Misra-C report uses [TinyXML-2](https://github.com/leethomason/tinyxml2). It is lighweight and fast and the license suits the mutator project.<br/>

### Feedback
If you run into an issue please raise one here or just contact me with proper information(including source code that causes the issue if there is any).<br/>

### Future Features
* Misra-c:2012 check support<br/>
* Support for JSON report output<br/>
* Ability to turn off some rule checks<br/>

###Support
Well, I don't have the Misra-C:2012 Document. If you or your organization/company are willing to donate a copy to mutator, hit me up.<br/>
If the company/organization you represent wants to sponsor mutator, let me know.<br/>
#### Testers are always welcome. If you are interested, let me know. Testing mutator is as important, if not more, than implementing it.<br/>
