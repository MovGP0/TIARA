/* Ghidra address: 01ba2ef0 */
/* Ghidra symbol: FUN_01ba2ef0 */


void FUN_01ba2ef0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_00414bf0(param_1 + 0x960,local_res10[0]);
  FUN_004155b0(param_1 + 0x960,&LAB_01ba2fa4);
  uVar1 = FUN_004425e0(param_1 + 0x759,*(undefined8 *)(param_1 + 0x960));
  _HTerm_SendText(*(undefined8 *)(param_1 + 0x970),uVar1);
  FUN_004144d0(local_res10);
  return;
}

