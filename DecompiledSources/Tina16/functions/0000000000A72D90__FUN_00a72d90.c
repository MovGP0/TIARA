/* Ghidra address: 00a72d90 */
/* Ghidra symbol: FUN_00a72d90 */


void FUN_00a72d90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  FUN_00414ad0(param_1 + 8,param_2);
  FUN_00414ad0(param_1 + 0x10,param_3);
  *(int *)(param_1 + 0x18) = DAT_01e77c78;
  DAT_01e77c78 = DAT_01e77c78 + 1;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  local_20 = (longlong *)FUN_00a72740(param_4);
  (**(code **)(*local_20 + 0x38))(local_20,&local_38);
  FUN_00414ad0(param_1 + 0x20,local_38);
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  return;
}

