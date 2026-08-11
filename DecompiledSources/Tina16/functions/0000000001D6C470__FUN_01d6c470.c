/* Ghidra address: 01d6c470 */
/* Ghidra symbol: FUN_01d6c470 */


ulonglong FUN_01d6c470(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar1 = FUN_00416740(local_res8[0]);
  uVar2 = thunk_FUN_04163be6(uVar1);
  if (0x1f < uVar2) {
    FUN_00e768b0(uVar2);
    FUN_016645e0(uVar2);
  }
  FUN_00414480(local_res8);
  return uVar2;
}

