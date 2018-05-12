/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\mingw64\bin\gcc.exe -c  -w -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN  -IC:\nim-0.18.0\lib -o c:\SRL-text-engine\src\nimcache\engineer.o c:\SRL-text-engine\src\nimcache\engineer.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA;
typedef struct tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence_289bJSnZUYmUtCD0DXkXE0Q tySequence_289bJSnZUYmUtCD0DXkXE0Q;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple_q1AkG9aybyHixUsHszEiIGw tyTuple_q1AkG9aybyHixUsHszEiIGw;
typedef NU8 tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ;
struct tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ {
tyEnum_Gender_S8HocBi1Mqay43IDDDDmOQ gender;
NimStringDesc* firstName;
NimStringDesc* lastName;
NI experience;
NI level;
tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ personalityType;
tySequence_289bJSnZUYmUtCD0DXkXE0Q* personalityModifiers;
};
typedef NU8 tyEnum_SpecialAbility_hx7wZOTzQdLuVhirIVcmYA;
struct tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA {
tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ baseInfo;
NI powerManagement;
NI Repair;
NI shipImprovements;
tyEnum_SpecialAbility_hx7wZOTzQdLuVhirIVcmYA specialAbility;
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
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyTuple_q1AkG9aybyHixUsHszEiIGw {
tyEnum_PersonalityType_gdWQV5cGkpq7KxGxo9aIyQQ Field0;
NI Field1;
};
struct tySequence_289bJSnZUYmUtCD0DXkXE0Q {
  TGenericSeq Sup;
  tyTuple_q1AkG9aybyHixUsHszEiIGw data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA*, generateEngineeringOfficer_Z0efkGtOlMCMWrbK6N07Rw)(tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ* baseCrewInfo);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, genericAssign)(void* dest, void* src, TNimType* mt);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
extern TNimType NTI_WVwu5lbbEGFe9bMbO9bJvyKQ_;
extern TNimType NTI_XKHobPLd3O3l3A9aqud8UbQ_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;

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

N_LIB_PRIVATE N_NIMCALL(tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA*, generateEngineeringOfficer_Z0efkGtOlMCMWrbK6N07Rw)(tyObject_BaseCrewInfo_XKHobPLd3O3l3A9aqud8UbQ* baseCrewInfo) {
	tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA* result;
	tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA* T1_;
	nimfr_("generateEngineeringOfficer", "engineer.nim");
	result = (tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA*)0;
	nimln_(6, "engineer.nim");
	T1_ = (tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA*)0;
	T1_ = (tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA*) newObj((&NTI_WVwu5lbbEGFe9bMbO9bJvyKQ_), sizeof(tyObject_EngineeringOfficercolonObjectType__8liM6t47WLrUSyikv8cHkA));
	genericAssign((void*)(&(*T1_).baseInfo), (void*)baseCrewInfo, (&NTI_XKHobPLd3O3l3A9aqud8UbQ_));
	result = T1_;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, unknown_engineerInit000)(void) {
	nimfr_("engineer", "engineer.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, unknown_engineerDatInit000)(void) {
}

