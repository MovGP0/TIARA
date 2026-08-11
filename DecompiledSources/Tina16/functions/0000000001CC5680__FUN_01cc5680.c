/* Ghidra address: 01cc5680 */
/* Ghidra symbol: FUN_01cc5680 */


void FUN_01cc5680(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = FUN_01d347d0(*(longlong *)(param_1 + 8),
                       *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x450));
  FUN_01cc4120(param_1,local_res10,8);
  FUN_01cc1510(uVar1,0,local_res10[0]);
  return;
}

