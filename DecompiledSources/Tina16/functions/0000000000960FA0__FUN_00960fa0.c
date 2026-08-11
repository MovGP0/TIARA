/* Ghidra address: 00960fa0 */
/* Ghidra symbol: FUN_00960fa0 */


undefined1
FUN_00960fa0(longlong *param_1,char *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  bool local_21;
  int local_20;
  undefined1 local_19;
  
  local_30 = auStack_b8;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  *param_3 = 0;
  *param_4 = 0;
  local_19 = 1;
  *param_2 = '\x03';
  FUN_00414480(param_4);
  FUN_00414ad0(param_3,&DAT_0096184c);
  *param_5 = 2;
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1,L"<?xml");
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x30))(param_1);
    goto LAB_00961784;
  }
  *param_2 = '\x02';
  FUN_008ff060(&local_38);
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1,local_38);
  local_21 = 0 < iVar2;
  if ((int)param_1[5] == 0x76) {
    if (!local_21) {
      local_19 = 0;
      goto LAB_00961784;
    }
    cVar1 = (**(code **)(*param_1 + 0x20))(param_1,L"ersion");
    if (cVar1 == '\0') {
      local_19 = 0;
      goto LAB_00961784;
    }
    FUN_008ff060(&local_40);
    (**(code **)(*param_1 + 0x38))(param_1,local_40);
    if ((int)param_1[5] != 0x3d) {
      local_19 = 0;
      goto LAB_00961784;
    }
    FUN_008ff060(&local_48);
    (**(code **)(*param_1 + 0x38))(param_1,local_48);
    iVar2 = (int)param_1[5];
    if ((iVar2 != 0x22) && (iVar2 != 0x27)) {
      local_19 = 0;
      goto LAB_00961784;
    }
    local_20 = iVar2;
    (**(code **)(*param_1 + 0x28))(param_1);
    cVar1 = FUN_00960f80(auStack_b8,(int)param_1[5]);
    if (cVar1 == '\0') {
      local_19 = 0;
      goto LAB_00961784;
    }
    FUN_00416780(param_3,(short)param_1[5]);
    (**(code **)(*param_1 + 0x28))(param_1);
    while( true ) {
      cVar1 = FUN_00960f80(auStack_b8,(int)param_1[5]);
      if (cVar1 == '\0') break;
      FUN_00416780(&local_50,(short)param_1[5]);
      FUN_00416ad0(param_3,local_50);
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    if ((int)param_1[5] != local_20) {
      local_19 = 0;
      goto LAB_00961784;
    }
    FUN_008ff060(&local_58);
    iVar2 = (**(code **)(*param_1 + 0x38))(param_1,local_58);
    local_21 = 0 < iVar2;
  }
  else {
    *param_2 = '\x01';
  }
  if ((int)param_1[5] == 0x65) {
    if (local_21 == false) {
      local_19 = 0;
      goto LAB_00961784;
    }
    cVar1 = (**(code **)(*param_1 + 0x20))(param_1,L"ncoding");
    if (cVar1 == '\0') {
      local_19 = 0;
      goto LAB_00961784;
    }
    FUN_008ff060(&local_60);
    (**(code **)(*param_1 + 0x38))(param_1,local_60);
    if ((int)param_1[5] != 0x3d) {
      local_19 = 0;
      goto LAB_00961784;
    }
    FUN_008ff060(&local_68);
    (**(code **)(*param_1 + 0x38))(param_1,local_68);
    iVar2 = (int)param_1[5];
    if ((iVar2 != 0x22) && (iVar2 != 0x27)) {
      local_19 = 0;
      goto LAB_00961784;
    }
    local_20 = iVar2;
    (**(code **)(*param_1 + 0x28))(param_1);
    cVar1 = FUN_008ff270((int)param_1[5]);
    if (cVar1 == '\0') {
      local_19 = 0;
      goto LAB_00961784;
    }
    FUN_00416780(param_4,(short)param_1[5]);
    (**(code **)(*param_1 + 0x28))(param_1);
    while( true ) {
      cVar1 = FUN_008ff290((int)param_1[5]);
      if (cVar1 == '\0') break;
      FUN_00416780(&local_70,(short)param_1[5]);
      FUN_00416ad0(param_4,local_70);
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    if ((int)param_1[5] != local_20) {
      local_19 = 0;
      goto LAB_00961784;
    }
    FUN_008ff060(&local_78);
    iVar2 = (**(code **)(*param_1 + 0x38))(param_1,local_78);
    local_21 = 0 < iVar2;
  }
  else {
    if (*param_2 == '\x01') {
      local_19 = 0;
      goto LAB_00961784;
    }
    *param_2 = '\0';
  }
  if ((int)param_1[5] == 0x73) {
    if (local_21 == false) {
      local_19 = 0;
      goto LAB_00961784;
    }
    cVar1 = (**(code **)(*param_1 + 0x20))(param_1,L"tandalone");
    if (cVar1 == '\0') {
      local_19 = 0;
      goto LAB_00961784;
    }
    FUN_008ff060(&local_80);
    (**(code **)(*param_1 + 0x38))(param_1,local_80);
    if ((int)param_1[5] != 0x3d) {
      local_19 = 0;
      goto LAB_00961784;
    }
    FUN_008ff060(&local_88);
    (**(code **)(*param_1 + 0x38))(param_1,local_88);
    iVar2 = (int)param_1[5];
    if ((iVar2 != 0x22) && (iVar2 != 0x27)) {
      local_19 = 0;
      goto LAB_00961784;
    }
    local_20 = iVar2;
    (**(code **)(*param_1 + 0x28))(param_1);
    if ((int)param_1[5] == 0x6e) {
      (**(code **)(*param_1 + 0x28))(param_1);
      if ((int)param_1[5] != 0x6f) {
        local_19 = 0;
        goto LAB_00961784;
      }
      *param_5 = 1;
    }
    else {
      if ((int)param_1[5] != 0x79) {
        local_19 = 0;
        goto LAB_00961784;
      }
      (**(code **)(*param_1 + 0x28))(param_1);
      if ((int)param_1[5] != 0x65) {
        local_19 = 0;
        goto LAB_00961784;
      }
      (**(code **)(*param_1 + 0x28))(param_1);
      if ((int)param_1[5] != 0x73) {
        local_19 = 0;
        goto LAB_00961784;
      }
      *param_5 = 0;
    }
    (**(code **)(*param_1 + 0x28))(param_1);
    if ((int)param_1[5] != local_20) {
      local_19 = 0;
      goto LAB_00961784;
    }
    FUN_008ff060(&local_90);
    (**(code **)(*param_1 + 0x38))(param_1,local_90);
    if (*param_2 == '\x01') {
      local_19 = 0;
      goto LAB_00961784;
    }
    *param_2 = '\0';
  }
  if ((int)param_1[5] == 0x3f) {
    cVar1 = (**(code **)(*param_1 + 0x20))(param_1,&LAB_009618a8);
    if (cVar1 != '\0') {
      lVar3 = FUN_008f4ba0(param_1);
      (**(code **)(*param_1 + 0x18))(param_1,lVar3 - (ulonglong)*(uint *)(param_1 + 0x16));
      goto LAB_00961784;
    }
  }
  local_19 = 0;
LAB_00961784:
  FUN_004145c0(&local_90,4);
  FUN_00414480(&local_70);
  FUN_004145c0(&local_68,3);
  FUN_00414480(&local_50);
  FUN_004145c0(&local_48,3);
  return local_19;
}

