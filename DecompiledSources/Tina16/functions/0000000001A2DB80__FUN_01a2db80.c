/* Ghidra address: 01a2db80 */
/* Ghidra symbol: FUN_01a2db80 */


void FUN_01a2db80(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),local_res10[0]);
  iVar1 = 0;
  if (local_res10[0] != 0) {
    iVar1 = *(int *)(local_res10[0] + -4);
  }
  FUN_0064cb30(*(undefined8 *)(param_1 + 0x6b0),
               (longlong)(*(int *)(param_1 + 0x98) + iVar1 * -6) / 2 & 0xffffffff);
  FUN_00414480(local_res10);
  return;
}

