//
// Created by AfazD on 14-Nov-19.
//

#include <string>
#include <Node.h>
#include <DefFileReader.h>
#include <ScriptReader.h>
#include <ExecutionContext.h>
#include "QueryExecuter.h"
#include "ResultGenerator.h"

// shared data
int id = 0;
MSTRING QueryExecuter::run(Node *root, MSTRING querycode,MYSQL* conn)
{

    DefFileReader dfr;
    MetaData *pMD = dfr.Read("../FlexibleComputerLanguage/Defs.txt");
    //MetaData *pMD = dfr.Read("../FlexibleComputerLanguage/testDefs.txt");
    ScriptReader sr;
    ScriptReaderOutput op;
    //bool bSucc = sr.ProcessScript(pMD->s_RuleFileName, pMD, op);
    bool bSucc = sr.ProcessScript(pMD, op, querycode);
    if (!bSucc)
    {
        std::wcout << "\nFailed to read script\n";
    }
    ExecutionContext ec;
    ec.p_mapFunctions = &op.map_Functions;
    ec.p_MD = pMD;
    Node *pY = MemoryManager::Inst.CreateNode(++id);
    Node *dbConn = MemoryManager::Inst.CreateNode(++id);
    Node *fName = MemoryManager::Inst.CreateNode(++id);
    Node *lName = MemoryManager::Inst.CreateNode(++id);
    Node *fullName = MemoryManager::Inst.CreateNode(++id);
    Node *date = MemoryManager::Inst.CreateNode(++id);
    Node *month = MemoryManager::Inst.CreateNode(++id);
    Node *year = MemoryManager::Inst.CreateNode(++id);
    Node *hour = MemoryManager::Inst.CreateNode(++id);
    Node *minute = MemoryManager::Inst.CreateNode(++id);
    Node *seconds = MemoryManager::Inst.CreateNode(++id);
    Node *telNum = MemoryManager::Inst.CreateNode(++id);
    Node *address = MemoryManager::Inst.CreateNode(++id);
    Node *postalCode = MemoryManager::Inst.CreateNode(++id);
    Node *integer = MemoryManager::Inst.CreateNode(++id);
    Node *price = MemoryManager::Inst.CreateNode(++id);
    Node *nic = MemoryManager::Inst.CreateNode(++id);
    Node *email = MemoryManager::Inst.CreateNode(++id);
    Node *pRESULT = MemoryManager::Inst.CreateNode(++id);
    std::string s = "52";
    root->SetValue((char *)s.c_str());
    ec.map_Var["X"] = root;
    ec.map_Var["Y"] = pY;
    ec.map_Var["DBCONNECTIONNODE"] = dbConn;
    ec.map_Var["FIRSTNAMENODE"] = fName;
    ec.map_Var["LASTNAMENODE"] = lName;
    ec.map_Var["FULLNAMENODE"] = fullName;
    ec.map_Var["DATENODE"] = date;
    ec.map_Var["MONTHNODE"] = month;
    ec.map_Var["YEARNODE"] = year;
    ec.map_Var["HOURNODE"] = hour;
    ec.map_Var["MINUTENODE"] = minute;
    ec.map_Var["SECONDSNODE"] = seconds;
    ec.map_Var["TELEPHONENODE"] = telNum;
    ec.map_Var["ADDRESS"] = address;
    ec.map_Var["POSTALCODE"] = postalCode;
    ec.map_Var["INTEGERNODE"] = integer;
    ec.map_Var["PRICENODE"] = price;
    ec.map_Var["NICNODE"] = nic;
    ec.map_Var["EMAILNODE"] = email;
    ec.map_Var["RESULT"] = pRESULT;
    op.p_ETL->Execute(&ec,conn);

    return ResultGenerator::CreateResult(pRESULT);

}
