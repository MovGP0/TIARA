/* Ghidra address: 00ecde30 */
/* Ghidra symbol: FUN_00ecde30 */


void FUN_00ecde30(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if (*(char *)(param_1 + 0x900) != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x748);
    uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_28,uVar2);
    FUN_00ea9ca0(local_20,local_28);
    iVar3 = FUN_00416db0(local_20[0],*(undefined8 *)(param_1 + 0x8f0));
    *(bool *)(param_1 + 0x900) = iVar3 == 0;
  }
  FUN_00eccc30(param_1);
  FUN_00ed3a60(param_1);
  FUN_00ecbca0(param_1);
  FUN_00414560(&local_28,2);
  return;
}

