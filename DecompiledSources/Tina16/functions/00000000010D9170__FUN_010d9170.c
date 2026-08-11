/* Ghidra address: 010d9170 */
/* Ghidra symbol: FUN_010d9170 */


void FUN_010d9170(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_48 [63];
  undefined1 local_9;
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  *(undefined1 *)(param_1 + 0x7f8) = 0;
  *(undefined1 *)(param_1 + 0x7fa) = 0xe;
  FUN_010e1dd0(param_1,param_2);
  FUN_010dba00(local_48);
  iVar3 = FUN_00414f50(local_48,&DAT_010d95dc,(ulonglong)local_48[0] + 1);
  if (iVar3 == 0) {
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x968) + 0xb8),0xff);
  }
  else {
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x968) + 0xb8),0xff00);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x920),*(undefined8 *)(PTR_PTR_02004640 + 8));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x928),*(undefined8 *)(PTR_PTR_02004640 + 0x10));
    FUN_0064cb30(*(longlong *)(param_1 + 0x920),
                 *(int *)(*(longlong *)(param_1 + 0x920) + 0x90) + -0x18);
    FUN_0064cb30(*(longlong *)(param_1 + 0x928),
                 *(int *)(*(longlong *)(param_1 + 0x928) + 0x90) + -0x18);
  }
  FUN_00e1d8b0(&local_9,param_1 + 0x9c1);
  FUN_0064dd90(param_1,&local_58);
  FUN_004169a0(&local_60,param_1 + 0x9c1);
  FUN_00416cd0(&local_50,3,local_58,&LAB_010d95f4,local_60);
  FUN_0064de00(param_1,local_50);
  *(undefined1 *)(param_1 + 0x9bb) = 0;
  *(undefined1 *)(param_1 + 0x9bc) = 0;
  *(undefined1 *)(param_1 + 0x9bd) = 0;
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x918),0);
  sVar2 = (short)(char)(*(char *)(param_1 + 0x9be) + '\x01') *
          (short)*(char *)(*(longlong *)(param_1 + 0x918) + 0x328);
  *(char *)(param_1 + 0x9bf) = (char)sVar2;
  FUN_00e1d9a0(sVar2);
  *(undefined1 *)(param_1 + 0x9c0) = 0;
  FUN_00e1dbf0(0);
  FUN_00e1db60(param_1 + 0x970,param_1 + 0x978,param_1 + 0x980);
  *(undefined8 *)(param_1 + 0x988) = 0x408f400000000000;
  *(undefined8 *)(param_1 + 0x990) = 0x408f400000000000;
  *(undefined8 *)(param_1 + 0x998) = 0x408f400000000000;
  *(undefined8 *)(param_1 + 0x9a0) = 0xc08f400000000000;
  *(undefined8 *)(param_1 + 0x9a8) = 0xc08f400000000000;
  *(undefined8 *)(param_1 + 0x9b0) = 0xc08f400000000000;
  FUN_00e1dad0(param_1 + 0x988,param_1 + 0x990,param_1 + 0x998);
  FUN_00e1dad0(param_1 + 0x9a0,param_1 + 0x9a8,param_1 + 0x9b0);
  if ((*(double *)(param_1 + 0x988) == 0.0) && (*(double *)(param_1 + 0x9a0) == 0.0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x9b8) = uVar1;
  if ((*(double *)(param_1 + 0x990) == 0.0) && (*(double *)(param_1 + 0x9a8) == 0.0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x9b9) = uVar1;
  if ((*(double *)(param_1 + 0x998) == 0.0) && (*(double *)(param_1 + 0x9b0) == 0.0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x9ba) = uVar1;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x920),*(undefined1 *)(param_1 + 0x9b8));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x928),*(undefined1 *)(param_1 + 0x9b9));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x930),*(undefined1 *)(param_1 + 0x9ba));
  FUN_010d8ca0(param_1,0);
  FUN_010d8e20(param_1,*(undefined8 *)(param_1 + 0x970));
  *(undefined1 *)(param_1 + 0x7ed) = 1;
  FUN_00414480(&local_60);
  FUN_00414560(&local_58,2);
  return;
}

