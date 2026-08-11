/* Ghidra address: 014c1ff0 */
/* Ghidra symbol: FUN_014c1ff0 */


char FUN_014c1ff0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 char param_5,int param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 *local_res20;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  undefined1 *local_60;
  longlong *local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  char local_29;
  
  local_60 = auStack_98;
  local_68 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_29 = '\x01';
  FUN_00414480(local_res20);
  FUN_014c1090(param_1,&local_38,local_res10);
  local_50 = (longlong *)FUN_00882aa0(&PTR_FUN_00cffa30,1,*(undefined8 *)PTR_DAT_02004030);
  if (param_5 != '\0') {
    local_50[0x10] = param_1;
    local_50[0xf] = (longlong)FUN_014c1610;
  }
  iVar2 = FUN_004170c0(L"https:",local_38,1);
  if (iVar2 == 1) {
    uVar3 = FUN_00882aa0(&PTR_FUN_00cc8028,1,0);
    (**(code **)(*local_50 + 200))(local_50,uVar3);
  }
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xfff5);
  FUN_00d06020(local_50,&local_68,local_38,local_res18);
  FUN_00414ad0(local_res20,local_68);
  uVar3 = FUN_00416740(*local_res20);
  thunk_FUN_0413a234(uVar3);
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0);
  if (local_50[0x20] != 0) {
    FUN_00410f20(local_50[0x20]);
  }
  lVar4 = FUN_00d05df0(local_50);
  FUN_00414b50(&local_40,*(undefined8 *)(lVar4 + 0x70));
  cVar1 = FUN_005b83d0(local_40,L"javascript");
  if (cVar1 == '\0') {
    cVar1 = FUN_005b83d0(local_40,L"text/html");
    if (cVar1 != '\0') {
      FUN_014c2800(param_1,&local_48,*local_res20);
      if (local_48 != 0) {
        local_78 = local_res20;
        local_70 = CONCAT31(local_70._1_3_,param_5);
        local_29 = FUN_014c2920(param_1,local_48,param_6,local_38);
      }
    }
  }
  else {
    local_78 = local_res20;
    local_70 = CONCAT31(local_70._1_3_,param_5);
    local_29 = FUN_014c2920(param_1,*local_res20,param_6,local_38);
    if ((local_29 != '\0') && (param_6 == 0)) {
      local_78 = (undefined8 *)CONCAT71(local_78._1_7_,param_5);
      local_70 = param_6;
      local_29 = FUN_014c1ff0(param_1,local_res10,local_res18,local_res20);
    }
  }
  FUN_014c1610(param_1,0,5,0);
  FUN_00410f20(local_50);
  FUN_00414480(&local_68);
  FUN_00414560(&local_48,3);
  FUN_00414480(&local_res10);
  return local_29;
}

