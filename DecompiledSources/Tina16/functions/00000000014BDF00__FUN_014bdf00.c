/* Ghidra address: 014bdf00 */
/* Ghidra symbol: FUN_014bdf00 */


undefined1 FUN_014bdf00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_res10 [3];
  ulonglong uVar5;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_30 = 0;
  local_38 = 0;
  local_58 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_71 = 0;
  uVar4 = FUN_00b89270();
  FUN_0041ddd0(&local_40,&LAB_014bdee8);
  FUN_00b8e650(uVar4,&local_38,L"openfrm.CloudOpenCaption",local_40);
  uVar4 = FUN_014c0b50();
  FUN_014c17b0(uVar4,&local_58);
  local_50 = local_58;
  local_48 = 0x11;
  FUN_00442f70(&local_30,local_38,&local_50,0);
  FUN_0064de00(param_1,local_30);
  if (local_res10[0] == 0) {
    iVar3 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x550));
    if (0 < iVar3) {
      local_71 = 1;
      goto LAB_014be12a;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x6d8);
  if (local_res10[0] == 0) {
    FUN_006ded30(*(undefined8 *)(lVar1 + 0x550));
  }
  uVar4 = FUN_014c0b50();
  FUN_014c1750(uVar4,&local_60);
  uVar4 = FUN_014c0b50();
  FUN_014c1460(uVar4,&local_68,local_res10[0]);
  FUN_00416880(&local_70,local_68);
  uVar5 = 0;
  FUN_00416cd0(local_20,5,local_60,L"ajaxfuncsgwt.php?",L"func=getUserFolders&parent=",local_70,
               L"&format=xml");
  uVar4 = FUN_014c0b50();
  cVar2 = FUN_014c1800(uVar4,local_20[0],&local_28,1,uVar5 & 0xffffffff00000000);
  if (cVar2 != '\0') {
    FUN_014be2b0(param_1,local_28);
    FUN_006e2590(lVar1,0);
    uVar4 = FUN_014bde20(param_1,local_res10[0]);
    FUN_006e2590(lVar1,uVar4);
    local_71 = 1;
  }
LAB_014be12a:
  FUN_00414480(&local_70);
  FUN_004144d0(&local_68);
  FUN_00414560(&local_60,2);
  FUN_00414560(&local_40,5);
  FUN_00414480(local_res10);
  return local_71;
}

