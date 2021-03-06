cmake_minimum_required(VERSION 3.5)
project(FlexibleComputerLanguage)

set(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_FLAGS -pthread)

include_directories(Core)
include_directories(Core/TestCases)
include_directories(Core/LDEL)
include_directories(FlexibleComputerLanguage)
include_directories(MySql/mysqlheaders/mysqlheaders)
link_directories(MySql)

add_executable(LogMaskingTool
        Core/TestCases/TestCaseBase.cpp
        Core/TestCases/TestCaseBase.h
        Core/TestCases/TestCaseExecuter.cpp
        Core/TestCases/TestCaseExecuter.h
        Core/TestCases/TestCaseIncludes.h
        Core/TestCases/TestCompound1.cpp
        Core/TestCases/TestCompound1.h
        Core/TestCases/TestCustomStrFilterShorthand.cpp
        Core/TestCases/TestCustomStrFilterShorthand.h
        Core/TestCases/TestFilterSubtree.cpp
        Core/TestCases/TestFilterSubtree.h
        Core/TestCases/TestListFilter.cpp
        Core/TestCases/TestListFilter.h
        Core/TestCases/TestListGroupBy.cpp
        Core/TestCases/TestListGroupBy.h
        Core/TestCases/TestListInnerCount.cpp
        Core/TestCases/TestListInnerCount.h
        Core/TestCases/TestListInnerCountWithScript.cpp
        Core/TestCases/TestListInnerCountWithScript.h
        Core/TestCases/TestListSeek.h
        Core/TestCases/TestListSeek.cpp
        Core/TestCases/TestLoadFromCodeLibrary.cpp
        Core/TestCases/TestLoadFromCodeLibrary.h
        Core/TestCases/TestStringEnclosure.cpp
        Core/TestCases/TestStringEnclosure.h
        Core/TestCases/TestTestCase.cpp
        Core/TestCases/TestTestCase.h
        Core/AdditionalFunctions.h
        Core/Bool.cpp
        Core/Bool.h
        Core/Command.cpp
        Core/Command.h
        Core/CommonIncludes.h
        Core/CPlusPlusEntry.cpp
        Core/CPlusPlusEntry.h
        Core/DefFileReader.cpp
        Core/DefFileReader.h
        Core/DateTimeOperations.cpp
        Core/DateTimeOperations.h
        Core/DateTime.h
        Core/Defs.h
        Core/Entity.h
        Core/EntityList.cpp
        Core/EntityList.h
        Core/ExecutionContext.h
        Core/ExecutionTemplate.cpp
        Core/ExecutionTemplate.h
        Core/ExecutionTemplateList.cpp
        Core/ExecutionTemplateList.h
        Core/Int.h
        Core/ISpecialCommand.h
        Core/MemMan.cpp
        Core/MemMan.h
        Core/MetaData.h
        Core/Node.cpp
        Core/Node.h
        Core/NodeCustomValueShorthand.cpp
        Core/NodeCustomValueShorthand.h
        Core/Null.h
        Core/ProcessLog.h
        Core/ScriptReader.cpp
        Core/ScriptReader.h
        Core/SpecialCommandExecuter.cpp
        Core/SpecialCommandExecuter.h
        Core/Strings.h
        Core/StringOperations.cpp
        Core/StringOperations.h
        Core/targetver.h
        Core/Tests.cpp
        Core/Tests.h
        Core/TypeDefs.h
        Core/Utils.cpp
        Core/Utils.h
        Core/Value.h
        Core/LDEL/ELBasicVariableParser.cpp
        Core/LDEL/ELBasicVariableParser.h
        Core/LDEL/ELBlockElement.cpp
        Core/LDEL/ELBlockElement.h
        Core/LDEL/ELBlockTemplate.cpp
        Core/LDEL/ELBlockTemplate.h
        Core/LDEL/ELBlockTemplateParser.cpp
        Core/LDEL/ELBlockTemplateParser.h
        Core/LDEL/ELCompositeVariableParser.cpp
        Core/LDEL/ELCompositeVariableParser.h
        Core/LDEL/ELConstantString.cpp
        Core/LDEL/ELConstantString.h
        Core/LDEL/ELFillerString.cpp
        Core/LDEL/ELFillerString.h
        Core/LDEL/ELFloat.cpp
        Core/LDEL/ELFloat.h
        Core/LDEL/ELInterpretedElement.cpp
        Core/LDEL/ELInterpretedElement.h
        Core/LDEL/ELInterpretter.cpp
        Core/LDEL/ELInterpretter.h
        Core/LDEL/ELInterpretterJSON.cpp
        Core/LDEL/ELInterpretterJSON.h
        Core/LDEL/ELJSON.cpp
        Core/LDEL/ELJSON.h
        Core/LDEL/ELLineParser.cpp
        Core/LDEL/ELLineParser.h
        Core/LDEL/ELLineParserResult.cpp
        Core/LDEL/ELLineParserResult.h
        Core/LDEL/ELLineTemplate.cpp
        Core/LDEL/ELLineTemplate.h
        Core/LDEL/ELLineTemplateParser.cpp
        Core/LDEL/ELLineTemplateParser.h
        Core/LDEL/ELListParser.cpp
        Core/LDEL/ELListParser.h
        Core/LDEL/ELNodeWrapper.cpp
        Core/LDEL/ELNodeWrapper.h
        Core/LDEL/ELNodeWrapperJSON.cpp
        Core/LDEL/ELNodeWrapperJSON.h
        Core/LDEL/ELNumber.cpp
        Core/LDEL/ELNumber.h
        Core/LDEL/ELParser.cpp
        Core/LDEL/ELParser.h
        Core/LDEL/ELParserResult.cpp
        Core/LDEL/ELParserResult.h
        Core/LDEL/ELSequenceBlockElement.cpp
        Core/LDEL/ELSequenceBlockElement.h
        Core/LDEL/ELSequenceVar.cpp
        Core/LDEL/ELSequenceVar.h
        Core/LDEL/ELSingularBlockElement.cpp
        Core/LDEL/ELSingularBlockElement.h
        Core/LDEL/ELSpacesString.cpp
        Core/LDEL/ELSpacesString.h
        Core/LDEL/ELString.cpp
        Core/LDEL/ELString.h
        Core/LDEL/ELStringLiteralParser.cpp
        Core/LDEL/ELStringLiteralParser.h
        Core/LDEL/ELText.cpp
        Core/LDEL/ELText.h
        Core/LDEL/ELVariable.cpp
        Core/LDEL/ELVariable.h
        Core/LDEL/ELVariableParser.cpp
        Core/LDEL/ELVariableParser.h
        Core/LDEL/ELLogFileFilter.cpp
        Core/LDEL/ELLogFileFilter.h
        FlexibleComputerLanguage/json.hpp
        FlexibleComputerLanguage/main.cpp
        FlexibleComputerLanguage/ResultGenerator.h
        FlexibleComputerLanguage/ResultGenerator.cpp
        FlexibleComputerLanguage/easylogging++.h
        FlexibleComputerLanguage/easylogging++.cc
        FlexibleComputerLanguage/Logger.h
        FlexibleComputerLanguage/LogJsonParser.cpp
        FlexibleComputerLanguage/LogJsonParser.h
        FlexibleComputerLanguage/QueryExecuter.cpp
        FlexibleComputerLanguage/QueryExecuter.h
        FlexibleComputerLanguage/DbConnection.h
        MySql/mysqlheaders/mysqlheaders/mysql.h
        FlexibleComputerLanguage/MysqlConnector.cpp
        FlexibleComputerLanguage/MysqlConnector.h)

target_link_libraries(LogMaskingTool libmysql.a)


