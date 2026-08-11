/* Ghidra address: 01820cc0 */
/* Ghidra symbol: FUN_01820cc0 */


void FUN_01820cc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  FUN_00414ad0(param_1 + 0x10,param_2);
  FUN_00414480(param_1 + 0x18);
  FUN_00414480(param_1 + 0x20);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(plVar2,*(undefined8 *)(param_1 + 0x10));
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (0 < iVar1) {
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_20,0);
    FUN_00414ad0(param_1 + 0x18,local_20);
  }
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (1 < iVar1) {
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_28,1);
    FUN_00414ad0(param_1 + 0x20,local_28);
  }
  FUN_00410f20(plVar2);
  FUN_00414560(&local_28,2);
  return;
}

