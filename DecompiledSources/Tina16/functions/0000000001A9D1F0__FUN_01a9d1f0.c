/* Ghidra address: 01a9d1f0 */
/* Ghidra symbol: FUN_01a9d1f0 */


void FUN_01a9d1f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 local_50 [2];
  ulonglong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50[0] = FUN_00498310(param_2,param_3);
  local_20 = FUN_01a9cdf0(param_1,local_50);
  local_50[0] = FUN_00498310(param_4,param_5);
  local_28 = FUN_01a9cdf0(param_1,local_50);
  local_50[0] = FUN_00498310(param_6,param_7);
  local_30 = FUN_01a9cdf0(param_1,local_50);
  local_50[0] = FUN_00498310(param_8,param_9);
  uVar3 = FUN_01a9cdf0(param_1,local_50);
  local_38 = uVar3;
  if (*(char *)(param_1 + 0x164) != '\0') {
    local_40 = local_30;
    local_38 = local_30;
    local_30 = uVar3;
  }
  FUN_01a98380(param_1,local_20 & 0xffffffff,local_20._4_4_,&local_20,(longlong)&local_20 + 4);
  FUN_01a98380(param_1,local_28 & 0xffffffff,local_28._4_4_,&local_28,(longlong)&local_28 + 4);
  FUN_01a98380(param_1,local_30 & 0xffffffff,local_30._4_4_,&local_30,(longlong)&local_30 + 4);
  FUN_01a98380(param_1,local_38 & 0xffffffff,local_38._4_4_,&local_38,(longlong)&local_38 + 4);
  if (*(char *)(param_1 + 0x12d) == '\0') {
    iVar1 = *(int *)(param_1 + 0x188);
    iVar2 = *(int *)(param_1 + 0x18c);
    thunk_FUN_04186bec(*(undefined8 *)(param_1 + 0x148),(int)local_20 - iVar1,local_20._4_4_ - iVar2
                       ,(int)local_28 - iVar1,local_28._4_4_ - iVar2,(int)local_30 - iVar1,
                       local_30._4_4_ - iVar2,(int)local_38 - iVar1,local_38._4_4_ - iVar2);
  }
  return;
}

