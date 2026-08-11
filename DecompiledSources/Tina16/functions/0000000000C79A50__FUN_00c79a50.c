/* Ghidra address: 00c79a50 */
/* Ghidra symbol: FUN_00c79a50 */


void FUN_00c79a50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_00c703b0(local_res10[0],*(undefined8 *)(param_1 + 0x390));
    iVar1 = FUN_00c79900(param_1);
    uVar2 = FUN_00416740(local_res10[0]);
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x298),0x468,(longlong)iVar1,uVar2);
  }
  FUN_00414480(local_res10);
  return;
}

