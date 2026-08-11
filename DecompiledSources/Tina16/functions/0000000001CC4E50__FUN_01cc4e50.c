/* Ghidra address: 01cc4e50 */
/* Ghidra symbol: FUN_01cc4e50 */


void FUN_01cc4e50(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_01d347d0(*(longlong *)(param_1 + 8),
                       *(int *)(*(longlong *)(param_1 + 8) + 0x450) + param_2);
  FUN_01cc4120(param_1,&local_res18,8);
  FUN_01cc4120(param_1,&local_res20,8);
  FUN_01cc1510(uVar1,2,local_res18);
  FUN_01cc1510(uVar1,3,local_res20);
  return;
}

