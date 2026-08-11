/* Ghidra address: 01c74990 */
/* Ghidra symbol: FUN_01c74990 */


void FUN_01c74990(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  int local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  double local_58;
  longlong *local_50;
  int local_48;
  int local_44;
  int local_40 [2];
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_60 = auStack_98;
  local_68 = 0;
  local_20[0] = 0;
  puVar1 = auStack_98;
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    lVar2 = FUN_0198d430(*(longlong *)(param_1 + 0x27a8));
    puVar1 = local_60;
    if (lVar2 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0xa10) + 0xe0))
                (*(longlong **)(param_1 + 0xa10),&local_30);
      local_78 = local_24;
      FUN_00b956d0(local_40,local_30,local_2c,local_28);
      local_50 = (longlong *)FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      (**(code **)(*local_50 + 0x10))(local_50,local_40);
      local_44 = local_38 - local_40[0];
      local_78 = param_5;
      FUN_00b956d0(local_40,param_2,param_3,param_4);
      if (param_2 < 0) {
        FUN_00b95860(local_40,-param_2,0);
      }
      if (param_3 < 0) {
        FUN_00b95860(local_40,0,-param_3);
      }
      if (20000 < param_4) {
        FUN_00b95860(local_40,-(param_4 + -20000),0);
      }
      if (20000 < param_5) {
        FUN_00b95860(local_40,0,-(param_5 + -20000));
      }
      local_48 = local_38 - local_40[0];
      puVar1 = local_60;
      if (0.1 <= (double)local_44 / (double)local_48) {
        if ((double)local_44 / (double)local_48 <= 15.0) {
          (**(code **)(*local_50 + 0x18))(local_50,local_40);
          *(float *)(param_1 + 0x1924) = (float)local_44 / (float)local_48;
          *(int *)(param_1 + 0x1b60) = param_2;
          *(int *)(param_1 + 0x1b64) = param_3;
          FUN_01c74860(param_1);
          FUN_00414480(local_20);
          local_58 = (double)*(float *)(param_1 + 0x1924) * 100.0;
          local_78 = 0;
          local_70 = PTR_DAT_02004830;
          FUN_00448510(local_20,local_58,2,0x12);
          FUN_00416ba0(&local_68,local_20[0],&LAB_01c74ce4);
          FUN_0064de00(*(undefined8 *)(param_1 + 0xb80),local_68);
          FUN_00414480(local_20);
          puVar1 = local_60;
        }
      }
    }
  }
  local_60 = puVar1;
  FUN_00414480(&local_68);
  FUN_00414480(local_20);
  return;
}

