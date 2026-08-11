/* Ghidra address: 01cc4ee0 */
/* Ghidra symbol: FUN_01cc4ee0 */


void FUN_01cc4ee0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_01cc1510(uVar1,0,local_res18);
  FUN_01cc1510(uVar1,1,local_res20);
  return;
}

