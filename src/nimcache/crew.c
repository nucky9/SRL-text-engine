/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\mingw64\bin\gcc.exe -c  -w -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN  -IC:\nim-0.18.0\lib -o c:\SRL-text-engine\src\nimcache\crew.o c:\SRL-text-engine\src\nimcache\crew.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_CsvParser_e0KmhL4ItditGQKnCUZMoQ tyObject_CsvParser_e0KmhL4ItditGQKnCUZMoQ;
typedef struct tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence_289bJSnZUYmUtCD0DXkXE0Q tySequence_289bJSnZUYmUtCD0DXkXE0Q;
typedef struct tyTuple_q1AkG9aybyHixUsHszEiIGw tyTuple_q1AkG9aybyHixUsHszEiIGw;
typedef struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct tySequence_Jtxj8YnZO9cu8mqaUBb1RtA tySequence_Jtxj8YnZO9cu8mqaUBb1RtA;
typedef struct tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ;
typedef struct tyObject_ShipCrewcolonObjectType__ROIq9bhCLaVdyWYbjv0VWAA tyObject_ShipCrewcolonObjectType__ROIq9bhCLaVdyWYbjv0VWAA;
typedef struct tyObject_CaptaincolonObjectType__ayQkAUqJ29c1309alQMzvTog tyObject_CaptaincolonObjectType__ayQkAUqJ29c1309alQMzvTog;
typedef struct tyObject_CommunicationsOfficercolonObjectType__wnFlv9aO9aNGi3o5MybXAQyQ tyObject_CommunicationsOfficercolonObjectType__wnFlv9aO9aNGi3o5MybXAQyQ;
typedef struct tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA;
typedef struct tyObject_MedicalOfficercolonObjectType__C9c0kCMAVqkylAo9bZzRDI5w tyObject_MedicalOfficercolonObjectType__C9c0kCMAVqkylAo9bZzRDI5w;
typedef struct tyObject_NavigationOfficercolonObjectType__2TU9cTQpfMOQw06LCgDZx3Q tyObject_NavigationOfficercolonObjectType__2TU9cTQpfMOQw06LCgDZx3Q;
typedef struct tyObject_ScienceOfficercolonObjectType__fSGVZJXYXAS4sa5877WqRw tyObject_ScienceOfficercolonObjectType__fSGVZJXYXAS4sa5877WqRw;
typedef struct tyObject_TacticalOfficercolonObjectType__cMpUz7QL6IsA9ckWvxIV9a9cg tyObject_TacticalOfficercolonObjectType__cMpUz7QL6IsA9ckWvxIV9a9cg;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_Rand_liBKmwv1H6v7oYBhDFHa6A tyObject_Rand_liBKmwv1H6v7oYBhDFHa6A;
typedef struct tyTuple_hIfxrk3SgJbH9bl3niLBXLg tyTuple_hIfxrk3SgJbH9bl3niLBXLg;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef NU8 tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ;
struct tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA {
NI a;
NI b;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
struct tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw {
  RootObj Sup;
NI bufpos;
NCSTRING buf;
NI bufLen;
tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* input;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
tySet_tyChar_nmiMWKVIe46vacnhAFrQvw refillChars;
};
struct tyObject_CsvParser_e0KmhL4ItditGQKnCUZMoQ {
  tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw Sup;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* row;
NimStringDesc* filename;
NIM_CHAR sep;
NIM_CHAR quote;
NIM_CHAR esc;
NIM_BOOL skipWhite;
NI currRow;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* headers;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ;
struct tyTuple_q1AkG9aybyHixUsHszEiIGw {
tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ Field0;
NI Field1;
};
struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
typedef tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ tyArray_8rChXCw9c59cXiB7dCp4nPNQ[7];
struct tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ {
tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ gender;
NimStringDesc* firstName;
NimStringDesc* lastName;
NI experience;
NI level;
tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ personalityType;
tySequence_289bJSnZUYmUtCD0DXkXE0Q* personalityModifiers;
};
struct tyObject_ShipCrewcolonObjectType__ROIq9bhCLaVdyWYbjv0VWAA {
tyObject_CaptaincolonObjectType__ayQkAUqJ29c1309alQMzvTog* captain;
tyObject_CommunicationsOfficercolonObjectType__wnFlv9aO9aNGi3o5MybXAQyQ* communications;
tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA* engineer;
tyObject_MedicalOfficercolonObjectType__C9c0kCMAVqkylAo9bZzRDI5w* medical;
tyObject_NavigationOfficercolonObjectType__2TU9cTQpfMOQw06LCgDZx3Q* navigation;
tyObject_ScienceOfficercolonObjectType__fSGVZJXYXAS4sa5877WqRw* science;
tyObject_TacticalOfficercolonObjectType__cMpUz7QL6IsA9ckWvxIV9a9cg* tactical;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
typedef N_NIMCALL_PTR(void, tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_KjFcmLOhf4VQvVcyLJWXZw) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(void, tyProc_jlOYFw9cHausuCbPoWx2iiA) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc_Xzm85qBLb9cf9cu8VOfAr8PQ) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NI, tyProc_tjaJtoUzLe1BMUbItlcGhQ) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, tyProc_b9bsIuILxTLVZHPvJBW187A) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
struct tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ {
  RootObj Sup;
tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q closeImpl;
tyProc_KjFcmLOhf4VQvVcyLJWXZw atEndImpl;
tyProc_jlOYFw9cHausuCbPoWx2iiA setPositionImpl;
tyProc_Xzm85qBLb9cf9cu8VOfAr8PQ getPositionImpl;
tyProc_tjaJtoUzLe1BMUbItlcGhQ readDataImpl;
tyProc_tjaJtoUzLe1BMUbItlcGhQ peekDataImpl;
tyProc_b9bsIuILxTLVZHPvJBW187A writeDataImpl;
tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q flushImpl;
};
typedef NU8 tyEnum_SecondaryAbility_dwHVYTQaEvrenavHYJmo6w;
struct tyTuple_hIfxrk3SgJbH9bl3niLBXLg {
tyEnum_SecondaryAbility_dwHVYTQaEvrenavHYJmo6w Field0;
NI Field1;
};
typedef NU8 tyEnum_SpecialAbility_hx7wZOTzQdLuVhirIVcmYA;
struct tyObject_CaptaincolonObjectType__ayQkAUqJ29c1309alQMzvTog {
tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ baseInfo;
NI captainAbility;
tyTuple_hIfxrk3SgJbH9bl3niLBXLg secondaryAbility;
tyEnum_SpecialAbility_hx7wZOTzQdLuVhirIVcmYA specialAbility;
tySequence_289bJSnZUYmUtCD0DXkXE0Q* personalityModifiers;
};
struct tyObject_CommunicationsOfficercolonObjectType__wnFlv9aO9aNGi3o5MybXAQyQ {
tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ baseInfo;
NI diplomacy;
NI linguisticAbility;
tyEnum_SpecialAbility_hx7wZOTzQdLuVhirIVcmYA specialAbility;
};
struct tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA {
tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ baseInfo;
NI powerManagement;
NI Repair;
NI shipImprovements;
tyEnum_SpecialAbility_hx7wZOTzQdLuVhirIVcmYA specialAbility;
};
struct tyObject_MedicalOfficercolonObjectType__C9c0kCMAVqkylAo9bZzRDI5w {
tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ baseInfo;
NI surgicalAbility;
NI diseaseAnalysis;
NI scienceBonus;
tyEnum_SpecialAbility_hx7wZOTzQdLuVhirIVcmYA specialAbility;
};
struct tyObject_NavigationOfficercolonObjectType__2TU9cTQpfMOQw06LCgDZx3Q {
tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ baseInfo;
NI maneuvering;
NI coursePlotting;
NI sublightSpeedModifier;
tyEnum_SpecialAbility_hx7wZOTzQdLuVhirIVcmYA specialAbility;
};
struct tyObject_ScienceOfficercolonObjectType__fSGVZJXYXAS4sa5877WqRw {
tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ baseInfo;
NI exploration;
NI problemSolving;
tyEnum_SpecialAbility_hx7wZOTzQdLuVhirIVcmYA specialAbility;
};
struct tyObject_TacticalOfficercolonObjectType__cMpUz7QL6IsA9ckWvxIV9a9cg {
tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ baseInfo;
NI targetting;
NI shieldModulation;
NI security;
tyEnum_SpecialAbility_hx7wZOTzQdLuVhirIVcmYA specialAbility;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_Rand_liBKmwv1H6v7oYBhDFHa6A {
NU64 a0;
NU64 a1;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_289bJSnZUYmUtCD0DXkXE0Q {
  TGenericSeq Sup;
  tyTuple_q1AkG9aybyHixUsHszEiIGw data[SEQ_DECL_SIZE];
};
struct tySequence_Jtxj8YnZO9cu8mqaUBb1RtA {
  TGenericSeq Sup;
  tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ data[SEQ_DECL_SIZE];
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ, generateGender_4Bi3HSfIeC8ZZf5FIoXIAQ)(void);
N_LIB_PRIVATE N_NIMCALL(NI, rand_an9ajRjsC0saLyxF46lqhIw)(tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA x);
static N_INLINE(tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA, dotdot__vDQySKWzgnxQdUarow6k5Qtimes)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, generateFirstName_3PXeXLYw2GZeUvt7qwcXnw)(tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ gender);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, open_grmoJIpX15R5Xfx6m2M1UA)(tyObject_CsvParser_e0KmhL4ItditGQKnCUZMoQ* my, NimStringDesc* filename, NIM_CHAR separator, NIM_CHAR quote, NIM_CHAR escape, NIM_BOOL skipInitialSpace);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readRow_9bHdhFE0qEvOrDqjuQBz8Pw)(tyObject_CsvParser_e0KmhL4ItditGQKnCUZMoQ* my, NI columns);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, close_A55CxARYHkQe359a6AS5GRQparsecsv)(tyObject_CsvParser_e0KmhL4ItditGQKnCUZMoQ* my);
N_LIB_PRIVATE N_NIMCALL(void, close_QbedUCk2XwI9c7bbRzXBY0g)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseIndexError)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, generateLastName_FPn0yk4zvl0rx57OZ0gi0g)(void);
N_LIB_PRIVATE N_NIMCALL(tySequence_289bJSnZUYmUtCD0DXkXE0Q*, generatePersonalityModifiers_QlsnkGx4LMXiEdo4PehKLQ)(void);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
N_LIB_PRIVATE N_NIMCALL(tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ, generatePersonalityType_XS9c9acPzdfcVeXPR55bhlQA)(void);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ, rand_PcJft7w0FmlF27beget4GQ)(tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ* a, NI aLen_0);
N_LIB_PRIVATE N_NIMCALL(void, generateBaseCrewInfo_zJJ9c86cbn1MP33iOs832AQ)(tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_ShipCrewcolonObjectType__ROIq9bhCLaVdyWYbjv0VWAA*, generateCrew_VMtMhfVktk0mjWNY9cwADPg)(void);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_CaptaincolonObjectType__ayQkAUqJ29c1309alQMzvTog*, generateCaptain_bJdC9bwcxW0CoAya1uM31FA)(tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ* baseCrewInfo);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(tyObject_CommunicationsOfficercolonObjectType__wnFlv9aO9aNGi3o5MybXAQyQ*, generateCommunicationsOfficer_EF9cuDLp9bDwPtK9b1CL9cy83Q)(tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ* baseCrewInfo);
N_LIB_PRIVATE N_NIMCALL(tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA*, generateEngineeringOfficer_Z0efkGtOlMCMWrbK6N07Rw)(tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ* baseCrewInfo);
N_LIB_PRIVATE N_NIMCALL(tyObject_MedicalOfficercolonObjectType__C9c0kCMAVqkylAo9bZzRDI5w*, generateMedicalOfficer_YMb9cBYvIZbFRVWU2s55VPw)(tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ* baseCrewInfo);
N_LIB_PRIVATE N_NIMCALL(tyObject_NavigationOfficercolonObjectType__2TU9cTQpfMOQw06LCgDZx3Q*, generateNavigationOfficer_ksohtDr9a1dAL8lDDhskAvQ)(tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ* baseCrewInfo);
N_LIB_PRIVATE N_NIMCALL(tyObject_ScienceOfficercolonObjectType__fSGVZJXYXAS4sa5877WqRw*, generateScienceOfficer_V3UIwQyRth70mCYQh0sqNA)(tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ* baseCrewInfo);
N_LIB_PRIVATE N_NIMCALL(tyObject_TacticalOfficercolonObjectType__cMpUz7QL6IsA9ckWvxIV9a9cg*, generateTacticalOfficer_mFlBFfOCjuyT9ayBO4ygTBQ)(tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ* baseCrewInfo);
N_LIB_PRIVATE N_NIMCALL(NI, rand_llsvpw3XcUUMY9bBfAwkSMg)(tyObject_Rand_liBKmwv1H6v7oYBhDFHa6A* r, tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA x);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TNimType NTI_e0KmhL4ItditGQKnCUZMoQ_;
extern TNimType NTI_289bJSnZUYmUtCD0DXkXE0Q_;
extern TNimType NTI_Jtxj8YnZO9cu8mqaUBb1RtA_;
extern TNimType NTI_XKHobPLd3O3l3A9aqud8UbQ_;
extern TNimType NTI_Sp6bXpfmbsi9bgPZoqsvJIQ_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_4pYDEDthCHvudLEYQPfAaw_2, "../assets/names/maleNames.csv", 29);
STRING_LITERAL(TM_4pYDEDthCHvudLEYQPfAaw_3, "../assets/names/femaleNames.csv", 31);
STRING_LITERAL(TM_4pYDEDthCHvudLEYQPfAaw_7, "../assets/names/lastNames.csv", 29);
extern NIM_CONST tyArray_8rChXCw9c59cXiB7dCp4nPNQ personalityModifiers_B3JvhT5FCLTSElf9csJ1X9cg;
NIM_CONST struct {
  TGenericSeq Sup;
  tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ data[5];
} TM_4pYDEDthCHvudLEYQPfAaw_14 = {{5, 5}, {((tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ) 0),
((tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ) 1),
((tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ) 2),
((tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ) 3),
((tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ) 4)}};
NIM_CONST tySequence_Jtxj8YnZO9cu8mqaUBb1RtA* TM_4pYDEDthCHvudLEYQPfAaw_13 = ((tySequence_Jtxj8YnZO9cu8mqaUBb1RtA*)&TM_4pYDEDthCHvudLEYQPfAaw_14);

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA, dotdot__vDQySKWzgnxQdUarow6k5Qtimes)(NI a, NI b) {
	tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA result;
	nimfr_("..", "system.nim");
	memset((void*)(&result), 0, sizeof(result));
	nimln_(325, "system.nim");
	result.a = a;
	nimln_(326, "system.nim");
	result.b = b;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ, generateGender_4Bi3HSfIeC8ZZf5FIoXIAQ)(void) {
	tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ result;
	NI randomRoll;
	tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T1_;
	nimfr_("generateGender", "crew.nim");
{	result = (tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ)0;
	nimln_(22, "crew.nim");
	T1_ = dotdot__vDQySKWzgnxQdUarow6k5Qtimes(((NI) 0), ((NI) 1));
	randomRoll = rand_an9ajRjsC0saLyxF46lqhIw(T1_);
	nimln_(23, "crew.nim");
	{
		if (!(randomRoll == ((NI) 0))) goto LA4_;
		nimln_(24, "crew.nim");
		result = ((tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ) 1);
		goto BeforeRet_;
	}
	goto LA2_;
	LA4_: ;
	{
		nimln_(26, "crew.nim");
		result = ((tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ) 0);
		goto BeforeRet_;
	}
	LA2_: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, close_A55CxARYHkQe359a6AS5GRQparsecsv)(tyObject_CsvParser_e0KmhL4ItditGQKnCUZMoQ* my) {
	tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* T1_;
	nimfr_("close", "parsecsv.nim");
	nimln_(206, "parsecsv.nim");
	T1_ = (tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw*)0;
	T1_ = &my->Sup;
	close_QbedUCk2XwI9c7bbRzXBY0g(T1_);
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, generateFirstName_3PXeXLYw2GZeUvt7qwcXnw)(tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ gender) {
	NimStringDesc* result;
	tyObject_CsvParser_e0KmhL4ItditGQKnCUZMoQ p;
	NimStringDesc* nameFile;
	NI numRows;
	NI randomRow;
	NI TM_4pYDEDthCHvudLEYQPfAaw_5;
	tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T9_;
	NI i;
	nimfr_("generateFirstName", "crew.nim");
{	result = (NimStringDesc*)0;
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.Sup.m_type = (&NTI_e0KmhL4ItditGQKnCUZMoQ_);
	nameFile = (NimStringDesc*)0;
	nimln_(33, "crew.nim");
	{
		if (!(gender == ((tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ) 0))) goto LA3_;
		nimln_(16, "crew.nim");
		nameFile = copyString(((NimStringDesc*) &TM_4pYDEDthCHvudLEYQPfAaw_2));
	}
	goto LA1_;
	LA3_: ;
	{
		nimln_(17, "crew.nim");
		nameFile = copyString(((NimStringDesc*) &TM_4pYDEDthCHvudLEYQPfAaw_3));
	}
	LA1_: ;
	nimln_(38, "crew.nim");
	open_grmoJIpX15R5Xfx6m2M1UA((&p), nameFile, 44, 34, 0, NIM_FALSE);
	nimln_(39, "crew.nim");
	numRows = ((NI) 0);
	{
		nimln_(40, "crew.nim");
		while (1) {
			NIM_BOOL T8_;
			NI TM_4pYDEDthCHvudLEYQPfAaw_4;
			T8_ = (NIM_BOOL)0;
			T8_ = readRow_9bHdhFE0qEvOrDqjuQBz8Pw((&p), ((NI) 0));
			if (!T8_) goto LA7;
			nimln_(41, "crew.nim");
			TM_4pYDEDthCHvudLEYQPfAaw_4 = addInt(numRows, ((NI) 1));
			numRows = (NI)(TM_4pYDEDthCHvudLEYQPfAaw_4);
		} LA7: ;
	}
	nimln_(42, "crew.nim");
	close_A55CxARYHkQe359a6AS5GRQparsecsv((&p));
	nimln_(43, "crew.nim");
	open_grmoJIpX15R5Xfx6m2M1UA((&p), nameFile, 44, 34, 0, NIM_FALSE);
	nimln_(44, "crew.nim");
	TM_4pYDEDthCHvudLEYQPfAaw_5 = subInt(numRows, ((NI) 1));
	T9_ = dotdot__vDQySKWzgnxQdUarow6k5Qtimes(((NI) 0), (NI)(TM_4pYDEDthCHvudLEYQPfAaw_5));
	randomRow = rand_an9ajRjsC0saLyxF46lqhIw(T9_);
	nimln_(45, "crew.nim");
	i = ((NI) 0);
	{
		nimln_(46, "crew.nim");
		while (1) {
			NIM_BOOL T12_;
			T12_ = (NIM_BOOL)0;
			T12_ = readRow_9bHdhFE0qEvOrDqjuQBz8Pw((&p), ((NI) 0));
			if (!T12_) goto LA11;
			nimln_(47, "crew.nim");
			{
				if (!(i == randomRow)) goto LA15_;
				nimln_(48, "crew.nim");
				if ((NU)(((NI) 0)) >= (NU)(p.row->Sup.len)) raiseIndexError();
				result = copyString(p.row->data[((NI) 0)]);
				goto BeforeRet_;
			}
			goto LA13_;
			LA15_: ;
			{
				NI TM_4pYDEDthCHvudLEYQPfAaw_6;
				nimln_(50, "crew.nim");
				TM_4pYDEDthCHvudLEYQPfAaw_6 = addInt(i, ((NI) 1));
				i = (NI)(TM_4pYDEDthCHvudLEYQPfAaw_6);
			}
			LA13_: ;
		} LA11: ;
	}
	nimln_(52, "crew.nim");
	close_A55CxARYHkQe359a6AS5GRQparsecsv((&p));
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, generateLastName_FPn0yk4zvl0rx57OZ0gi0g)(void) {
	NimStringDesc* result;
	tyObject_CsvParser_e0KmhL4ItditGQKnCUZMoQ p;
	NI numRows;
	NI randomRow;
	NI TM_4pYDEDthCHvudLEYQPfAaw_9;
	tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T4_;
	NI i;
	nimfr_("generateLastName", "crew.nim");
{	result = (NimStringDesc*)0;
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.Sup.m_type = (&NTI_e0KmhL4ItditGQKnCUZMoQ_);
	nimln_(59, "crew.nim");
	open_grmoJIpX15R5Xfx6m2M1UA((&p), ((NimStringDesc*) &TM_4pYDEDthCHvudLEYQPfAaw_7), 44, 34, 0, NIM_FALSE);
	nimln_(60, "crew.nim");
	numRows = ((NI) 0);
	{
		nimln_(61, "crew.nim");
		while (1) {
			NIM_BOOL T3_;
			NI TM_4pYDEDthCHvudLEYQPfAaw_8;
			T3_ = (NIM_BOOL)0;
			T3_ = readRow_9bHdhFE0qEvOrDqjuQBz8Pw((&p), ((NI) 0));
			if (!T3_) goto LA2;
			nimln_(62, "crew.nim");
			TM_4pYDEDthCHvudLEYQPfAaw_8 = addInt(numRows, ((NI) 1));
			numRows = (NI)(TM_4pYDEDthCHvudLEYQPfAaw_8);
		} LA2: ;
	}
	nimln_(63, "crew.nim");
	close_A55CxARYHkQe359a6AS5GRQparsecsv((&p));
	nimln_(64, "crew.nim");
	open_grmoJIpX15R5Xfx6m2M1UA((&p), ((NimStringDesc*) &TM_4pYDEDthCHvudLEYQPfAaw_7), 44, 34, 0, NIM_FALSE);
	nimln_(65, "crew.nim");
	TM_4pYDEDthCHvudLEYQPfAaw_9 = subInt(numRows, ((NI) 1));
	T4_ = dotdot__vDQySKWzgnxQdUarow6k5Qtimes(((NI) 0), (NI)(TM_4pYDEDthCHvudLEYQPfAaw_9));
	randomRow = rand_an9ajRjsC0saLyxF46lqhIw(T4_);
	nimln_(66, "crew.nim");
	i = ((NI) 0);
	{
		nimln_(67, "crew.nim");
		while (1) {
			NIM_BOOL T7_;
			T7_ = (NIM_BOOL)0;
			T7_ = readRow_9bHdhFE0qEvOrDqjuQBz8Pw((&p), ((NI) 0));
			if (!T7_) goto LA6;
			nimln_(68, "crew.nim");
			{
				if (!(i == randomRow)) goto LA10_;
				nimln_(69, "crew.nim");
				if ((NU)(((NI) 0)) >= (NU)(p.row->Sup.len)) raiseIndexError();
				result = copyString(p.row->data[((NI) 0)]);
				goto BeforeRet_;
			}
			goto LA8_;
			LA10_: ;
			{
				NI TM_4pYDEDthCHvudLEYQPfAaw_10;
				nimln_(71, "crew.nim");
				TM_4pYDEDthCHvudLEYQPfAaw_10 = addInt(i, ((NI) 1));
				i = (NI)(TM_4pYDEDthCHvudLEYQPfAaw_10);
			}
			LA8_: ;
		} LA6: ;
	}
	nimln_(73, "crew.nim");
	close_A55CxARYHkQe359a6AS5GRQparsecsv((&p));
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tySequence_289bJSnZUYmUtCD0DXkXE0Q*, generatePersonalityModifiers_QlsnkGx4LMXiEdo4PehKLQ)(void) {
	tySequence_289bJSnZUYmUtCD0DXkXE0Q* result;
	nimfr_("generatePersonalityModifiers", "crew.nim");
	result = (tySequence_289bJSnZUYmUtCD0DXkXE0Q*)0;
	nimln_(77, "crew.nim");
	result = (tySequence_289bJSnZUYmUtCD0DXkXE0Q*) newSeq((&NTI_289bJSnZUYmUtCD0DXkXE0Q_), 0);
	{
		tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ personality;
		personality = (tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ)0;
		{
			tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ v;
			NI res;
			v = (tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ)0;
			nimln_(2045, "system.nim");
			res = ((NI) 0);
			{
				nimln_(2046, "system.nim");
				while (1) {
					NI modifier;
					tyTuple_q1AkG9aybyHixUsHszEiIGw newPersonalityModifier;
					NI randomRoll;
					tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T5_;
					NI T21_;
					NI TM_4pYDEDthCHvudLEYQPfAaw_12;
					if (!(res <= ((NI) 4))) goto LA4;
					nimln_(2047, "system.nim");
					v = ((tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ)chckRange(res, ((tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ) 0), ((tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ) 4)));
					nimln_(2241, "system.nim");
					personality = v;
					modifier = (NI)0;
					memset((void*)(&newPersonalityModifier), 0, sizeof(newPersonalityModifier));
					nimln_(83, "crew.nim");
					T5_ = dotdot__vDQySKWzgnxQdUarow6k5Qtimes(((NI) 0), ((NI) 100));
					randomRoll = rand_an9ajRjsC0saLyxF46lqhIw(T5_);
					{
						tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ entry;
						NI i;
						memset((void*)(&entry), 0, sizeof(entry));
						nimln_(2199, "system.nim");
						i = ((NI) 0);
						nimln_(2200, "system.nim");
						{
							if (!(((NI) (i)) <= ((NI) 6))) goto LA9_;
							{
								nimln_(2201, "system.nim");
								while (1) {
									NI TM_4pYDEDthCHvudLEYQPfAaw_11;
									nimln_(2202, "system.nim");
									entry = personalityModifiers_B3JvhT5FCLTSElf9csJ1X9cg[(i)- 0];
									nimln_(85, "crew.nim");
									{
										if (!(randomRoll <= entry.Field0)) goto LA15_;
										nimln_(86, "crew.nim");
										modifier = entry.Field1;
										nimln_(87, "crew.nim");
										goto LA6;
									}
									LA15_: ;
									nimln_(2203, "system.nim");
									{
										if (!(((NI) 6) <= ((NI) (i)))) goto LA19_;
										goto LA11;
									}
									LA19_: ;
									nimln_(2204, "system.nim");
									TM_4pYDEDthCHvudLEYQPfAaw_11 = addInt(i, ((NI) 1));
									if (TM_4pYDEDthCHvudLEYQPfAaw_11 < 0 || TM_4pYDEDthCHvudLEYQPfAaw_11 > 6) raiseOverflow();
									i = (NI)(TM_4pYDEDthCHvudLEYQPfAaw_11);
								}
							} LA11: ;
						}
						LA9_: ;
					} LA6: ;
					nimln_(88, "crew.nim");
					newPersonalityModifier.Field0 = personality;
					nimln_(89, "crew.nim");
					newPersonalityModifier.Field1 = modifier;
					nimln_(91, "crew.nim");
					result = (tySequence_289bJSnZUYmUtCD0DXkXE0Q*) incrSeqV2(&(result)->Sup, sizeof(tyTuple_q1AkG9aybyHixUsHszEiIGw));
					T21_ = result->Sup.len++;
					result->data[T21_] = newPersonalityModifier;
					nimln_(2048, "system.nim");
					TM_4pYDEDthCHvudLEYQPfAaw_12 = addInt(res, ((NI) 1));
					res = (NI)(TM_4pYDEDthCHvudLEYQPfAaw_12);
				} LA4: ;
			}
		}
	}
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ, generatePersonalityType_XS9c9acPzdfcVeXPR55bhlQA)(void) {
	tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ result;
	tySequence_Jtxj8YnZO9cu8mqaUBb1RtA* personalities;
	nimfr_("generatePersonalityType", "crew.nim");
{	result = (tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ)0;
	nimln_(95, "crew.nim");
	genericSeqAssign((&personalities), TM_4pYDEDthCHvudLEYQPfAaw_13, (&NTI_Jtxj8YnZO9cu8mqaUBb1RtA_));
	nimln_(96, "crew.nim");
	result = rand_PcJft7w0FmlF27beget4GQ(personalities->data, personalities->Sup.len);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, generateBaseCrewInfo_zJJ9c86cbn1MP33iOs832AQ)(tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ* Result) {
	tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ gender;
	nimfr_("generateBaseCrewInfo", "crew.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_XKHobPLd3O3l3A9aqud8UbQ_));
	nimln_(100, "crew.nim");
	gender = generateGender_4Bi3HSfIeC8ZZf5FIoXIAQ();
	nimln_(101, "crew.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_XKHobPLd3O3l3A9aqud8UbQ_));
	(*Result).gender = gender;
	nimln_(103, "crew.nim");
	unsureAsgnRef((void**) (&(*Result).firstName), generateFirstName_3PXeXLYw2GZeUvt7qwcXnw(gender));
	nimln_(104, "crew.nim");
	unsureAsgnRef((void**) (&(*Result).lastName), generateLastName_FPn0yk4zvl0rx57OZ0gi0g());
	(*Result).experience = ((NI) 0);
	(*Result).level = ((NI) 1);
	nimln_(107, "crew.nim");
	(*Result).personalityType = generatePersonalityType_XS9c9acPzdfcVeXPR55bhlQA();
	nimln_(108, "crew.nim");
	unsureAsgnRef((void**) (&(*Result).personalityModifiers), generatePersonalityModifiers_QlsnkGx4LMXiEdo4PehKLQ());
	popFrame();
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(132, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(211, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim");
	nimln_(271, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(398, "system.nim");
		nimln_(271, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(272, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(273, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(274, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(398, "system.nim");
		nimln_(274, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(275, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(276, "gc.nim");
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(277, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(278, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(tyObject_ShipCrewcolonObjectType__ROIq9bhCLaVdyWYbjv0VWAA*, generateCrew_VMtMhfVktk0mjWNY9cwADPg)(void) {
	tyObject_ShipCrewcolonObjectType__ROIq9bhCLaVdyWYbjv0VWAA* result;
	tyObject_ShipCrewcolonObjectType__ROIq9bhCLaVdyWYbjv0VWAA* T1_;
	tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ T2_;
	tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ T3_;
	tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ T4_;
	tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ T5_;
	tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ T6_;
	tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ T7_;
	tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ T8_;
	nimfr_("generateCrew", "crew.nim");
	result = (tyObject_ShipCrewcolonObjectType__ROIq9bhCLaVdyWYbjv0VWAA*)0;
	nimln_(113, "crew.nim");
	T1_ = (tyObject_ShipCrewcolonObjectType__ROIq9bhCLaVdyWYbjv0VWAA*)0;
	T1_ = (tyObject_ShipCrewcolonObjectType__ROIq9bhCLaVdyWYbjv0VWAA*) newObj((&NTI_Sp6bXpfmbsi9bgPZoqsvJIQ_), sizeof(tyObject_ShipCrewcolonObjectType__ROIq9bhCLaVdyWYbjv0VWAA));
	nimln_(114, "crew.nim");
	memset((void*)(&T2_), 0, sizeof(T2_));
	generateBaseCrewInfo_zJJ9c86cbn1MP33iOs832AQ((&T2_));
	asgnRefNoCycle((void**) (&(*T1_).captain), generateCaptain_bJdC9bwcxW0CoAya1uM31FA((&T2_)));
	nimln_(115, "crew.nim");
	memset((void*)(&T3_), 0, sizeof(T3_));
	generateBaseCrewInfo_zJJ9c86cbn1MP33iOs832AQ((&T3_));
	asgnRefNoCycle((void**) (&(*T1_).communications), generateCommunicationsOfficer_EF9cuDLp9bDwPtK9b1CL9cy83Q((&T3_)));
	nimln_(116, "crew.nim");
	memset((void*)(&T4_), 0, sizeof(T4_));
	generateBaseCrewInfo_zJJ9c86cbn1MP33iOs832AQ((&T4_));
	asgnRefNoCycle((void**) (&(*T1_).engineer), generateEngineeringOfficer_Z0efkGtOlMCMWrbK6N07Rw((&T4_)));
	nimln_(117, "crew.nim");
	memset((void*)(&T5_), 0, sizeof(T5_));
	generateBaseCrewInfo_zJJ9c86cbn1MP33iOs832AQ((&T5_));
	asgnRefNoCycle((void**) (&(*T1_).medical), generateMedicalOfficer_YMb9cBYvIZbFRVWU2s55VPw((&T5_)));
	nimln_(118, "crew.nim");
	memset((void*)(&T6_), 0, sizeof(T6_));
	generateBaseCrewInfo_zJJ9c86cbn1MP33iOs832AQ((&T6_));
	asgnRefNoCycle((void**) (&(*T1_).navigation), generateNavigationOfficer_ksohtDr9a1dAL8lDDhskAvQ((&T6_)));
	nimln_(119, "crew.nim");
	memset((void*)(&T7_), 0, sizeof(T7_));
	generateBaseCrewInfo_zJJ9c86cbn1MP33iOs832AQ((&T7_));
	asgnRefNoCycle((void**) (&(*T1_).science), generateScienceOfficer_V3UIwQyRth70mCYQh0sqNA((&T7_)));
	nimln_(120, "crew.nim");
	memset((void*)(&T8_), 0, sizeof(T8_));
	generateBaseCrewInfo_zJJ9c86cbn1MP33iOs832AQ((&T8_));
	asgnRefNoCycle((void**) (&(*T1_).tactical), generateTacticalOfficer_mFlBFfOCjuyT9ayBO4ygTBQ((&T8_)));
	result = T1_;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, unknown_crewInit000)(void) {
	nimfr_("crew", "crew.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, unknown_crewDatInit000)(void) {
}

