/* Ghidra address: 00c79940 */
/* Ghidra symbol: FUN_00c79940 */


void FUN_00c79940(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = *(longlong *)(param_1 + 0x298);
  if (lVar1 != 0) {
    iVar2 = FUN_00c79900(param_1);
    uVar3 = FUN_00416740(local_res10[0]);
    thunk_FUN_041b2403(lVar1,0x468,(longlong)iVar2,uVar3);
  }
  FUN_00414480(local_res10);
  return;
}

