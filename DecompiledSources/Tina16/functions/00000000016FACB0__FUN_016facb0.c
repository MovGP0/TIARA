/* Ghidra address: 016facb0 */
/* Ghidra symbol: FUN_016facb0 */


bool FUN_016facb0(undefined8 param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  plVar2 = (longlong *)FUN_005dc9d0(&PTR_FUN_005d4e78,1,0);
  FUN_005dd980(plVar2,param_2);
  plVar3 = (longlong *)FUN_00d2fb90();
  (**(code **)(*plVar2 + 0x10))(plVar2,local_30,L"webdedication",L"program",&DAT_016fade8);
  iVar1 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_30[0]);
  FUN_00410f20(plVar3);
  FUN_00410f20(plVar2);
  if ((param_3 == '\0') && (iVar1 == -1)) {
    FUN_00d30b80(L"Dedication error (PME)!",0x10);
  }
  FUN_00414480(local_30);
  return iVar1 != -1;
}

