/* Ghidra address: 0183b1c0 */
/* Ghidra symbol: FUN_0183b1c0 */


void FUN_0183b1c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  short *local_38;
  longlong local_30;
  int local_24;
  undefined8 local_18;
  longlong local_10;
  
  local_40 = auStack_a8;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = (short *)0x0;
  local_10 = 0;
  local_18 = 0;
  FUN_00414b50(&local_38,&DAT_0183b638);
  uVar3 = FUN_0181e3c0(param_2,0);
  local_10 = FUN_01838880(param_1,uVar3,param_3,0);
  local_24 = 1;
  lVar4 = FUN_0181e3c0(param_2,1);
  iVar2 = FUN_0043e420(*(undefined8 *)(lVar4 + 0x18),L"modificator");
  if (iVar2 == 0) {
    uVar3 = FUN_0181e3c0(param_2,1);
    FUN_0181e5f0(uVar3,&local_38,L"text");
    local_24 = local_24 + 1;
  }
  uVar3 = FUN_0181e3c0(param_2,local_24);
  local_18 = FUN_0183a030(param_1,uVar3,param_3);
  if (*(char *)(local_10 + 0x19) != '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_020034c8);
    FUN_004134c0(uVar3);
  }
  FUN_01837210(param_1,local_10,local_18);
  iVar2 = FUN_00416db0(local_38,&DAT_0183b638);
  if (iVar2 == 0) {
    FUN_01832f90(local_18,&local_38,local_10);
  }
  sVar1 = *local_38;
  if (sVar1 == 0x2a) {
    FUN_01836fd0(param_1,&local_58,param_2);
    local_88 = local_58;
    local_30 = FUN_0184f010(&PTR_FUN_018409c0,1,param_3,*(undefined8 *)(param_1 + 0x50));
  }
  else if (sVar1 == 0x2b) {
    FUN_01836fd0(param_1,&local_48,param_2);
    local_88 = local_48;
    local_30 = FUN_0184f010(&PTR_FUN_018406c0,1,param_3,*(undefined8 *)(param_1 + 0x50));
  }
  else if (sVar1 == 0x2d) {
    FUN_01836fd0(param_1,&local_50,param_2);
    local_88 = local_50;
    local_30 = FUN_0184f010(&PTR_FUN_01840840,1,param_3,*(undefined8 *)(param_1 + 0x50));
  }
  else if (sVar1 == 0x2f) {
    FUN_01836fd0(param_1,&local_60,param_2);
    local_88 = local_60;
    local_30 = FUN_0184f010(&PTR_FUN_01840b40,1,param_3,*(undefined8 *)(param_1 + 0x50));
  }
  else {
    FUN_01836fd0(param_1,&local_68,param_2);
    local_88 = local_68;
    local_30 = FUN_0184f010(&PTR_FUN_018403d0,1,param_3,*(undefined8 *)(param_1 + 0x50));
  }
  FUN_01847420(param_4,local_30);
  *(longlong *)(local_30 + 0x28) = local_10;
  *(undefined8 *)(local_30 + 0x30) = local_18;
  FUN_0184f2c0(local_30);
  FUN_01836fd0(param_1,&local_70,param_2);
  FUN_0184ee20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),local_70);
  FUN_00414560(&local_70,6);
  FUN_00414480(&local_38);
  return;
}

