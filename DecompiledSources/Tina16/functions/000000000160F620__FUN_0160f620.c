/* Ghidra address: 0160f620 */
/* Ghidra symbol: FUN_0160f620 */


void FUN_0160f620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  int local_34;
  longlong *local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_50 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  local_20 = FUN_0105a4c0(&DAT_01057970,1);
  local_30 = (longlong *)0x0;
  local_28 = FUN_0105a0d0(&DAT_01057408,1);
  local_34 = FUN_0105aa90(local_20,local_res8);
  iVar1 = (**(code **)(**(longlong **)PTR_DAT_02005788 + 0x28))(*(longlong **)PTR_DAT_02005788);
  if (local_34 < iVar1) {
    (**(code **)(**(longlong **)PTR_DAT_02005788 + 0x18))
              (*(longlong **)PTR_DAT_02005788,&local_40,local_34);
    local_30 = (longlong *)FUN_01b21190(local_40,0x3b,0);
    iVar1 = (**(code **)(*local_30 + 0x28))(local_30);
    if (iVar1 == 2) {
      FUN_0160e170(local_res10,local_28);
      (**(code **)(*local_30 + 0x18))(local_30,&local_58,0);
      FUN_00414ad0(local_res20,local_58);
      (**(code **)(*local_30 + 0x18))(local_30,&local_60,1);
      FUN_00414ad0(param_5,local_60);
      FUN_00414ad0(param_6,*(undefined8 *)(local_28 + 0x78));
      FUN_00414ad0(param_7,*(undefined8 *)(local_28 + 0x80));
    }
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  if (local_30 != (longlong *)0x0) {
    FUN_00410f20(local_30);
  }
  FUN_00414560(&local_60,2);
  FUN_00414480(&local_40);
  FUN_00414480(&local_res8);
  return;
}

