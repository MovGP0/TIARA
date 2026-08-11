/* Ghidra address: 01c74cf0 */
/* Ghidra symbol: FUN_01c74cf0 */


void FUN_01c74cf0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_70 [2];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    lVar3 = FUN_0198d430(*(longlong *)(param_1 + 0x27a8));
    if (lVar3 != 0) {
      local_70[0] = FUN_00498310(param_2,param_3);
      local_40 = FUN_0064d3a0(*(undefined8 *)(param_1 + 0xa10),local_70);
      (**(code **)(**(longlong **)(param_1 + 0xa10) + 0xe0))
                (*(longlong **)(param_1 + 0xa10),&local_38);
      FUN_00b956d0(&local_60,local_38,local_34,local_30,local_2c);
      iVar1 = FUN_0040c840(((double)(local_58 - local_60) / (double)*(float *)(param_1 + 0x1924)) *
                           1.1);
      iVar2 = FUN_0040c840(((double)(local_54 - local_5c) / (double)*(float *)(param_1 + 0x1924)) *
                           1.1);
      uVar4 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      FUN_01a98210(uVar4,&local_50);
      local_50 = FUN_0040c840(((double)(int)local_40 / (double)(local_58 - local_60)) *
                              (double)(iVar1 - (local_48 - local_50)));
      local_50 = *(int *)(param_1 + 0x1b60) - local_50;
      local_4c = FUN_0040c840(((double)local_40._4_4_ / (double)(local_54 - local_5c)) *
                              (double)(iVar2 - (local_44 - local_4c)));
      local_4c = *(int *)(param_1 + 0x1b64) - local_4c;
      local_48 = local_50 + iVar1;
      local_44 = local_4c + iVar2;
      FUN_00b95860(&local_60,-local_60,-local_5c);
      FUN_01c74990(param_1,local_50,local_4c,local_48,local_44);
      FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
    }
  }
  return;
}

