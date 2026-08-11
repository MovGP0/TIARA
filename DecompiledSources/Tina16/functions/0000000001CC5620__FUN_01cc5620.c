/* Ghidra address: 01cc5620 */
/* Ghidra symbol: FUN_01cc5620 */


void FUN_01cc5620(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_res10[0] = param_2;
  FUN_01cc4120(param_1,local_res10,8);
  lVar1 = FUN_01d347d0(lVar1,*(undefined4 *)(lVar1 + 0x450));
  FUN_01cc0a60(lVar1,local_res10[0]);
  *(undefined8 *)(lVar1 + 0x168) = local_res10[0];
  *(int *)(lVar1 + 0x2c) = *(int *)(lVar1 + 0x2c) + 1;
  return;
}

