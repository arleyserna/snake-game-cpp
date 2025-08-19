##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=Snake
ConfigurationName      :=Release
WorkspaceConfiguration :=Release
WorkspacePath          :=C:/Users/arley/Workspaces/Workspaces2
ProjectPath            :=C:/Users/arley/Workspaces/Workspaces2/Snake
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/Snake
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=arley
Date                   :=19/08/2025
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/arley/Workspaces/Workspaces2/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/mingw64/bin/ar.exe -r
CXX      := C:/mingw64/bin/g++.exe
CC       := C:/mingw64/bin/gcc.exe
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/src_Snake.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GameBoard.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Utils.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_Snake.cpp$(ObjectSuffix): src/Snake.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/arley/Workspaces/Workspaces2/Snake/src/Snake.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Snake.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Snake.cpp$(PreprocessSuffix): src/Snake.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Snake.cpp$(PreprocessSuffix) src/Snake.cpp

$(IntermediateDirectory)/src_GameBoard.cpp$(ObjectSuffix): src/GameBoard.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/arley/Workspaces/Workspaces2/Snake/src/GameBoard.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GameBoard.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GameBoard.cpp$(PreprocessSuffix): src/GameBoard.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GameBoard.cpp$(PreprocessSuffix) src/GameBoard.cpp

$(IntermediateDirectory)/src_Utils.cpp$(ObjectSuffix): src/Utils.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/arley/Workspaces/Workspaces2/Snake/src/Utils.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Utils.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Utils.cpp$(PreprocessSuffix): src/Utils.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Utils.cpp$(PreprocessSuffix) src/Utils.cpp

$(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix): src/Game.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/arley/Workspaces/Workspaces2/Snake/src/Game.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Game.cpp$(PreprocessSuffix): src/Game.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Game.cpp$(PreprocessSuffix) src/Game.cpp

$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix): src/main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/arley/Workspaces/Workspaces2/Snake/src/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_main.cpp$(PreprocessSuffix): src/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_main.cpp$(PreprocessSuffix) src/main.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


