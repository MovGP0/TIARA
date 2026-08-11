/* Ghidra address: 0089f510 */
/* Ghidra symbol: FUN_0089f510 */


undefined1 FUN_0089f510(longlong *param_1,double *param_2)

{
  char cVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_48;
  int local_44;
  int local_40;
  char local_3a;
  char local_39;
  undefined8 local_38;
  longlong local_30;
  int local_24;
  undefined1 local_1f;
  ushort local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  ushort local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined8 local_10;
  
  local_50 = auStack_f8;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_10 = 0;
  local_1f = 0;
  *param_2 = 0.0;
  FUN_0043ea00(&local_58,*param_1);
  FUN_00414ad0(param_1,local_58);
  local_40 = 0;
  if (*param_1 != 0) {
    local_40 = *(int *)(*param_1 + -4);
  }
  if (local_40 == 0) goto LAB_0089fc83;
  cVar1 = FUN_0089f060(auStack_f8);
  if (cVar1 != '\0') {
    local_1f = 1;
    goto LAB_0089fc83;
  }
  FUN_00416dc0(&local_60,*param_1,1,3);
  cVar1 = FUN_0089ff50(local_60);
  if (cVar1 != '\0') {
    cVar1 = FUN_00879280(*param_1,4,0x2c);
    if (cVar1 != '\0') {
      cVar1 = FUN_00879280(*param_1,5,0x20);
      if (cVar1 == '\0') {
        FUN_00416ea0(&DAT_0089fd1c,param_1,5);
      }
    }
    local_d8 = CONCAT71(local_d8._1_7_,1);
    FUN_00874ee0(&local_68,param_1,&DAT_0089fd1c,1);
    FUN_0043eb50(&local_70,*param_1);
    FUN_00414ad0(param_1,local_70);
  }
  local_24 = (**(code **)PTR_PTR_020018b0)(&DAT_0089fd2c,*param_1);
  if (local_24 < 2) {
LAB_0089f78b:
    FUN_00414b50(&local_10,&DAT_0089fd1c);
  }
  else {
    iVar2 = (**(code **)PTR_PTR_020018b0)(&DAT_0089fd1c,*param_1);
    if (iVar2 <= local_24) goto LAB_0089f78b;
    FUN_00414b50(&local_10,&DAT_0089fd2c);
  }
  local_d8 = CONCAT71(local_d8._1_7_,1);
  FUN_00874ee0(&local_78,param_1,local_10,0);
  cVar1 = FUN_008a03f0(local_78);
  if (cVar1 == '\0') {
    FUN_0089eee0(auStack_f8);
    FUN_0089efa0(auStack_f8);
  }
  else {
    FUN_0089efa0(auStack_f8);
    FUN_0089eee0(auStack_f8);
  }
  local_d8 = CONCAT71(local_d8._1_7_,1);
  FUN_00874ee0(&local_30,param_1,&DAT_0089fd1c,1);
  local_1e = FUN_00877cc0(local_30,0xffff);
  if (local_1e == 0xffff) {
    FUN_00414b50(&local_38,local_30);
    local_d8 = CONCAT71(local_d8._1_7_,1);
    FUN_00874ee0(&local_30,param_1,&DAT_0089fd1c,1);
    local_d8 = *param_1;
    FUN_00416cd0(&local_88,3,local_38,&DAT_0089fd1c);
    FUN_0043eb80(&local_80,local_88);
    FUN_00414ad0(param_1,local_80);
    local_1e = FUN_00877c50(local_30);
  }
  local_44 = 0;
  if (local_30 != 0) {
    local_44 = *(int *)(local_30 + -4);
  }
  if (local_44 == 2) {
    if (local_1e < 0x32) {
      local_1e = local_1e + 2000;
    }
    else if ((0x31 < local_1e) && (local_1e < 100)) {
      local_1e = local_1e + 0x76c;
    }
  }
  else {
    local_48 = 0;
    if (local_30 != 0) {
      local_48 = *(int *)(local_30 + -4);
    }
    if (local_48 == 3) {
      local_1e = local_1e + 0x76c;
    }
  }
  dVar3 = (double)FUN_00448c80(local_1e,local_14,local_12);
  *param_2 = dVar3;
  iVar2 = (**(code **)PTR_PTR_020018b0)(&PTR_DAT_0089fd3c,*param_1);
  if (iVar2 < 1) {
    iVar2 = (**(code **)PTR_PTR_020018b0)(&PTR_DAT_0089fd50,*param_1);
    if (iVar2 < 1) {
      local_39 = '\0';
      local_3a = '\0';
    }
    else {
      local_39 = '\0';
      local_3a = '\x01';
      local_d8 = CONCAT71(local_d8._1_7_,1);
      FUN_00874ee0(&local_98,param_1,&PTR_DAT_0089fd50,1);
      FUN_00414ad0(param_1,local_98);
    }
  }
  else {
    local_39 = '\x01';
    local_3a = '\0';
    local_d8 = CONCAT71(local_d8._1_7_,1);
    FUN_00874ee0(&local_90,param_1,&PTR_DAT_0089fd3c,1);
    FUN_00414ad0(param_1,local_90);
  }
  local_24 = (**(code **)PTR_PTR_020018b0)(&DAT_0089fd64,*param_1);
  if (local_24 < 1) {
LAB_0089faa0:
    FUN_00414b50(&local_10,&LAB_0089fd74);
  }
  else {
    iVar2 = (**(code **)PTR_PTR_020018b0)(&DAT_0089fd1c,*param_1);
    if (iVar2 <= local_24) goto LAB_0089faa0;
    FUN_00414b50(&local_10,&DAT_0089fd64);
  }
  local_24 = (**(code **)PTR_PTR_020018b0)(local_10,*param_1);
  if (0 < local_24) {
    local_d8._0_1_ = 1;
    FUN_00874ee0(&local_38,param_1,&DAT_0089fd1c,1);
    local_d8._0_1_ = 1;
    FUN_00874ee0(&local_a0,&local_38,local_10,1);
    local_16 = FUN_00877cc0(local_a0,0);
    local_d8._0_1_ = 1;
    FUN_00874ee0(&local_a8,&local_38,local_10,1);
    local_18 = FUN_00877cc0(local_a8,0);
    local_d8 = CONCAT71(local_d8._1_7_,1);
    FUN_00874ee0(&local_b0,&local_38,&DAT_0089fd1c,1);
    local_1a = FUN_00877cc0(local_b0,0);
    local_1c = 0;
    FUN_0043eb50(&local_b8,*param_1);
    FUN_00414ad0(param_1,local_b8);
    if (local_39 == '\0') {
      if ((local_3a != '\0') && (local_16 < 0xc)) {
        local_16 = local_16 + 0xc;
      }
    }
    else if (local_16 == 0xc) {
      local_16 = 0;
    }
    dVar3 = (double)FUN_00448a90(local_16,local_18,local_1a,local_1c);
    *param_2 = *param_2 + dVar3;
  }
  FUN_0043eb50(&local_c0,*param_1);
  FUN_00414ad0(param_1,local_c0);
  local_1f = 1;
LAB_0089fc83:
  FUN_00414560(&local_c0,0xe);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_10);
  return local_1f;
}

