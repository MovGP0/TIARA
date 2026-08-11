/* Ghidra address: 01955c10 */
/* Ghidra symbol: FUN_01955c10 */


void FUN_01955c10(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = *param_3;
  uStack_28 = param_3[1];
  uStack_20 = param_3[2];
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0046bd60(&local_30);
  uVar1 = FUN_018163f0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x298),local_res10[0]);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  if (*(int *)(param_1 + 0xac) != -1) {
    lVar2 = FUN_018163e0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x298),
                         *(undefined4 *)(param_1 + 0xac));
    FUN_00461840(lVar2 + 0x28,&local_30);
  }
  FUN_00460ba0(&local_30);
  FUN_00414480(local_res10);
  return;
}

