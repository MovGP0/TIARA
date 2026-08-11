/* Ghidra address: 004485a0 */
/* Ghidra symbol: FUN_004485a0 */


undefined8 FUN_004485a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_res18 [2];
  undefined1 local_228 [520];
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  local_res18[0] = param_3;
  if (0xe0 < iVar1) {
    FUN_0043d320(PTR_PTR_02002f68);
  }
  uVar3 = FUN_00416740(param_2);
  uVar2 = FUN_004471f0(local_228,local_res18,0,uVar3,param_4);
  FUN_00414740(param_1,local_228,uVar2);
  return param_1;
}

