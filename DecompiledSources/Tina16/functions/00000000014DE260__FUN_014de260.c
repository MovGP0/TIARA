/* Ghidra address: 014de260 */
/* Ghidra symbol: FUN_014de260 */


void FUN_014de260(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  ushort uVar4;
  bool bVar5;
  undefined2 local_60;
  undefined1 uStack_5e;
  undefined2 local_58 [4];
  undefined4 local_50 [4];
  undefined1 local_40 [12];
  int local_34;
  undefined1 *local_30;
  
  sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((sVar2 != 0x17) && (1 < (ushort)(sVar2 - 0x57U))) {
    if ((ushort)(sVar2 - 0x59U) < 4) {
      local_34 = 3;
      FUN_014dba30(param_1,param_2,&local_34);
      local_58[0] = 0x4c01;
      FUN_014db9b0(param_1,local_58,param_2,&local_34);
      local_58[0] = 0x4c01;
      cVar1 = FUN_014db910(local_58,param_2,local_40);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x2d0))(param_1,local_34 + -1,&local_30);
        local_30[8] = 0;
      }
      local_58[0] = 0x5701;
      FUN_014db9b0(param_1,local_58,param_2,&local_34);
      local_58[0] = 0x5701;
      cVar1 = FUN_014db910(local_58,param_2,local_40);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x2d0))(param_1,local_34 + -1,&local_30);
        local_30[8] = 0;
      }
      local_60 = 0x4102;
      uStack_5e = 0x44;
      FUN_014db9b0(param_1,&local_60,param_2,&local_34);
      local_60 = 0x4102;
      uStack_5e = 0x44;
      cVar1 = FUN_014db910(&local_60,param_2,local_40);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x2d0))(param_1,local_34 + -1,&local_30);
        local_30[8] = 0;
      }
      local_60 = 0x4102;
      uStack_5e = 0x53;
      FUN_014db9b0(param_1,&local_60,param_2,&local_34);
      local_60 = 0x4102;
      uStack_5e = 0x53;
      cVar1 = FUN_014db910(&local_60,param_2,local_40);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x2d0))(param_1,local_34 + -1,&local_30);
        local_30[8] = 0;
      }
      local_60 = 0x5002;
      uStack_5e = 0x44;
      FUN_014db9b0(param_1,&local_60,param_2,&local_34);
      local_60 = 0x5002;
      uStack_5e = 0x53;
      FUN_014db9b0(param_1,&local_60,param_2,&local_34);
      local_50[0] = 0x44524e03;
      FUN_014db9b0(param_1,local_50,param_2,&local_34);
      local_50[0] = 0x53524e03;
      FUN_014db9b0(param_1,local_50,param_2,&local_34);
      local_50[0] = 0x47524e03;
      FUN_014db9b0(param_1,local_50,param_2,&local_34);
      local_50[0] = 0x42524e03;
      FUN_014db9b0(param_1,local_50,param_2,&local_34);
      FUN_014db9b0(param_1,&DAT_014de7e2,param_2,&local_34);
      local_50[0] = 0x46464f03;
      cVar1 = FUN_014db910(local_50,param_2,local_40);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x2d0))(param_1,local_34,&local_30);
        *local_30 = 1;
      }
      local_34 = local_34 + 1;
      local_50[0] = 0x31434903;
      FUN_014db9b0(param_1,local_50,param_2,&local_34);
      local_50[0] = 0x31434903;
      cVar1 = FUN_014db910(local_50,param_2,local_40);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x2d0))(param_1,local_34 + -1,&local_30);
        local_30[8] = 0;
      }
      local_50[0] = 0x32434903;
      FUN_014db9b0(param_1,local_50,param_2,&local_34);
      local_50[0] = 0x32434903;
      cVar1 = FUN_014db910(local_50,param_2,local_40);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x2d0))(param_1,local_34 + -1,&local_30);
        local_30[8] = 0;
      }
      local_50[0] = 0x33434903;
      FUN_014db9b0(param_1,local_50,param_2,&local_34);
      local_50[0] = 0x33434903;
      cVar1 = FUN_014db910(local_50,param_2,local_40);
      if (cVar1 == '\0') {
        return;
      }
      (**(code **)(*param_1 + 0x2d0))(param_1,local_34 + -1,&local_30);
      local_30[8] = 0;
      return;
    }
    if (1 < (ushort)(sVar2 - 0x5dU)) {
      return;
    }
  }
  uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  uVar4 = (short)uVar3 - 0x50;
  if (uVar4 < 0x10) {
    bVar5 = ((int)CONCAT62((int6)((ulonglong)uVar3 >> 0x10),1) << ((byte)uVar4 & 0x1f) & 0x180U) !=
            0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    local_34 = 3;
  }
  else {
    local_34 = 2;
  }
  FUN_014dba30(param_1,param_2,&local_34);
  FUN_014db9b0(param_1,&DAT_014de7aa,param_2,&local_34);
  local_50[0] = 0x46464f03;
  cVar1 = FUN_014db910(local_50,param_2,local_40);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x2d0))(param_1,local_34,&local_30);
    *local_30 = 1;
  }
  local_34 = local_34 + 1;
  FUN_014db9b0(param_1,&DAT_014de7b3,param_2,&local_34);
  local_50[0] = 0x31434903;
  cVar1 = FUN_014db910(local_50,param_2,local_40);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x2d0))(param_1,local_34 + -1,&local_30);
    local_30[8] = 0;
  }
  local_50[0] = 0x32434903;
  FUN_014db9b0(param_1,local_50,param_2,&local_34);
  local_50[0] = 0x32434903;
  cVar1 = FUN_014db910(local_50,param_2,local_40);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x2d0))(param_1,local_34 + -1,&local_30);
    local_30[8] = 0;
  }
  return;
}

