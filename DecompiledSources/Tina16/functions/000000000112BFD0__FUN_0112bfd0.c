/* Ghidra address: 0112bfd0 */
/* Ghidra symbol: FUN_0112bfd0 */


char FUN_0112bfd0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 *local_70;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined1 local_58 [2];
  undefined1 local_56 [2];
  undefined2 local_54;
  short local_52;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_31;
  undefined8 local_30 [2];
  
  local_70 = auStack_b8;
  local_48 = 0;
  local_30[0] = 0;
  if (param_1 == 0) {
    local_31 = '\0';
    local_70 = auStack_b8;
  }
  else {
    local_31 = FUN_0044b3d0(param_1,&local_40,param_3);
  }
  if (local_31 != '\0') {
    FUN_0112ba60(&local_88,local_40,0,0);
    *param_2 = local_88;
    param_2[1] = uStack_80;
    *(undefined4 *)(param_2 + 2) = uStack_78;
    if (*(int *)((longlong)param_2 + 0xc) == 0) {
      uVar1 = FUN_0112b190(param_1,param_3);
      *(uint *)((longlong)param_2 + 0xc) = (uint)uVar1;
    }
    local_5c = 0;
    if (param_1 != 0) {
      local_5c = *(int *)(param_1 + -4);
    }
    FUN_00414480(local_30);
    local_60 = 0;
    if (param_1 != 0) {
      local_60 = *(undefined4 *)(param_1 + -4);
    }
    FUN_00416dc0(local_30,param_1,local_5c + -4,local_60);
    FUN_00414b50(&local_48,local_30[0]);
    FUN_00414480(local_30);
    local_50 = FUN_0044b380(local_48,PTR_DAT_02004830);
    local_98 = local_58;
    FUN_00448ad0(local_50,&local_52,&local_54,local_56);
    local_64 = 0;
    if (param_1 != 0) {
      local_64 = *(int *)(param_1 + -4);
    }
    if (*(short *)(param_1 + (longlong)(local_64 + -6) * 2) == 0x2d) {
      *(short *)(param_2 + 2) = -local_52;
    }
    else {
      *(short *)(param_2 + 2) = local_52;
    }
    *(undefined2 *)((longlong)param_2 + 0x12) = local_54;
    local_31 = FUN_0112bce0(param_2);
  }
  if (local_31 == '\0') {
    *param_2 = DAT_01f240bc;
    param_2[1] = DAT_01f240c4;
    *(undefined4 *)(param_2 + 2) = DAT_01f240cc;
  }
  FUN_00414480(&local_48);
  FUN_00414480(local_30);
  return local_31;
}

