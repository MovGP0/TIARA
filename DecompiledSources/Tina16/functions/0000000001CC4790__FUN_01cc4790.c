/* Ghidra address: 01cc4790 */
/* Ghidra symbol: FUN_01cc4790 */


void FUN_01cc4790(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_res10[0] = param_2;
  FUN_01cc4120(param_1,local_res10,8);
  uVar2 = FUN_01d347d0(lVar1,*(undefined4 *)(lVar1 + 0x450));
  FUN_01cc1510(uVar2,0,local_res10[0]);
  return;
}

