/* Ghidra address: 01cc51c0 */
/* Ghidra symbol: FUN_01cc51c0 */


void FUN_01cc51c0(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 local_50 [6];
  
  uVar1 = FUN_01d347d0(*(longlong *)(param_1 + 8),
                       *(int *)(*(longlong *)(param_1 + 8) + 0x450) + param_2);
  FUN_0040d200(local_50,0x18,0);
  local_50[param_4] = param_3;
  FUN_01cc4120(param_1,local_50,0x18);
  FUN_01cc1510(uVar1,param_4,param_3);
  return;
}

