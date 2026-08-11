/* Ghidra address: 01c67df0 */
/* Ghidra symbol: FUN_01c67df0 */


void FUN_01c67df0(longlong param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  *(undefined4 *)(param_1 + 0x1b60) = param_2;
  *(undefined4 *)(param_1 + 0x1b64) = param_3;
  if (0.0 < param_4) {
    *(float *)(param_1 + 0x1924) = param_4;
  }
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    lVar3 = FUN_0198d430(*(longlong *)(param_1 + 0x27a8));
    if (lVar3 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0xa10) + 0xe0))
                (*(longlong **)(param_1 + 0xa10),&local_38);
      FUN_00b956d0(&local_48,local_38,local_34,local_30,local_2c);
      FUN_00b95860(&local_48,-local_48,-local_44);
      FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      FUN_00b95860(&local_48,*(undefined4 *)(param_1 + 0x1b60),*(undefined4 *)(param_1 + 0x1b64));
      iVar1 = local_48;
      iVar2 = FUN_0040c840((double)(local_40 - local_48) / (double)*(float *)(param_1 + 0x1924));
      local_3c = FUN_0040c840((double)(local_3c - local_44) / (double)*(float *)(param_1 + 0x1924));
      local_40 = iVar1 + iVar2;
      local_3c = local_44 + local_3c;
      FUN_01c74990(param_1,local_48,local_44,local_40,local_3c);
    }
  }
  return;
}

