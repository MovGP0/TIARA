/* Ghidra address: 00c623a0 */
/* Ghidra symbol: FUN_00c623a0 */


void FUN_00c623a0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined1 local_48 [8];
  int local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [4];
  int local_24;
  
  local_50 = 0;
  uVar3 = (**(code **)(*param_1 + 0x90))(param_1);
  thunk_FUN_03abe598(uVar3,local_28);
  (**(code **)(*param_1 + 0xb8))(param_1,local_38);
  local_24 = local_24 + 4;
  FUN_0064d040(param_1[0x30],local_28);
  FUN_0064d000(param_1[0x33],local_48);
  FUN_0064cb30(param_1[0x32],(local_40 - *(int *)(param_1[0x32] + 0x98)) + -2);
  FUN_00742010(param_1[0x34],0);
  FUN_00414480(param_1 + 0x35);
  FUN_0041ddd0(&local_50,PTR_PTR_02001250);
  FUN_0064de00(param_1[0x33],local_50);
  uVar3 = (**(code **)(*param_1 + 0x90))(param_1);
  FUN_00655f80(param_1[0x30],uVar3);
  cVar1 = FUN_00781870();
  if ((cVar1 == '\0') || ((*PTR_DAT_02002b98 & 2) == 0)) {
    FUN_0064e030(param_1[0x30],0xff00000f);
  }
  else {
    uVar3 = FUN_00781840();
    uVar2 = FUN_00779380(uVar3,0x1d);
    FUN_0064e030(param_1[0x30],uVar2);
  }
  FUN_00722870(param_1);
  FUN_00414480(&local_50);
  return;
}

