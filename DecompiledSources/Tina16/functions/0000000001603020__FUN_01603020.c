/* Ghidra address: 01603020 */
/* Ghidra symbol: FUN_01603020 */


void FUN_01603020(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 *local_150;
  int *local_140;
  undefined8 local_138;
  char local_12a;
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  int local_120;
  undefined1 local_118 [4];
  int local_114 [65];
  
  local_150 = auStack_198;
  local_168 = 0;
  local_170 = 0;
  local_160 = 0;
  local_158 = 0;
  local_138 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414480(&local_138);
  FUN_01610c90(local_118);
  FUN_015fca00(&local_138,local_res20,param_1);
  FUN_019af590(param_1,local_138);
  iVar1 = FUN_019954d0(param_1);
  local_12a = FUN_01603000(iVar1 + 1,*(undefined1 *)(param_1 + 0x218));
  if (local_12a != '\0') {
    FUN_00de8980(&local_158,0x103,&PTR_DAT_016032b4);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_158);
    FUN_004134c0(uVar2);
  }
  local_120 = 0;
  FUN_019af5f0(param_1,&local_160);
  if (local_160 == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,
                         L"CheckHDLLicense internal error: session folder is empty");
    FUN_004134c0(uVar2);
  }
  FUN_019a10d0(param_1,local_118,local_124,local_128);
  FUN_019a0d10(param_1,local_118);
  iVar1 = 0x10;
  local_140 = local_114;
  do {
    local_120 = local_120 + *local_140;
    local_140 = local_140 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((*(char *)(param_1 + 0x218) == '\0') && (0x32 < local_120)) {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_170,PTR_PTR_02004888);
    FUN_00b8e650(uVar2,&local_168,L"HDLStrings.Msg_HDLLicenseCheck",local_170);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_168);
    FUN_004134c0(uVar2);
  }
  FUN_01610cc0(local_118);
  FUN_00414560(&local_170,4);
  FUN_00414480(&local_138);
  FUN_00414480(&local_res18);
  return;
}

