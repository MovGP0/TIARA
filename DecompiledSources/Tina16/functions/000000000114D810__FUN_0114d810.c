/* Ghidra address: 0114d810 */
/* Ghidra symbol: FUN_0114d810 */


void FUN_0114d810(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  double local_78;
  int local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  byte *local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  longlong local_18;
  longlong local_10;
  
  local_50 = auStack_98;
  local_58 = 0;
  local_40 = (byte *)(param_1 + 0x7c8);
  local_24 = 1 << (*local_40 & 0x1f);
  local_18 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_58,0x10f);
  FUN_00c54370(local_18,local_58);
  *(undefined1 *)(local_18 + 0x6c1) = 0;
  FUN_008059a0(local_18);
  local_10 = FUN_0113e810(&DAT_0113e408,1,PTR_DAT_02004010[0x81a],PTR_DAT_02004010[0x819]);
  local_78 = (*(double *)(local_40 + 9) - *(double *)(local_40 + 1)) / (double)local_24;
  local_70 = local_24;
  local_68 = *(undefined8 *)(param_1 + 0x7f8);
  local_60 = 0;
  FUN_0113eac0(local_10,*(undefined8 *)(param_1 + 0x7b0),*(undefined8 *)(param_1 + 0x7b8),
               *(undefined8 *)(local_40 + 1));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760));
  if (iVar1 < 4) {
    if (iVar1 == 3) {
      FUN_010bf370(*local_40,*(undefined8 *)(param_1 + 0x7f8),&local_30,&local_38);
    }
    else if (iVar1 == 0) {
      local_30 = 0x3ff0000000000000;
      local_38 = 0x3ff0000000000000;
    }
    else if (iVar1 == 1) {
      FUN_010bf1f0(*local_40,*(undefined8 *)(param_1 + 0x7f8),&local_30,&local_38);
    }
    else if (iVar1 == 2) {
      FUN_010bf470(*local_40,*(undefined8 *)(param_1 + 0x7f8),&local_30,&local_38);
    }
  }
  else if (iVar1 == 4) {
    FUN_010bf2b0(*local_40,*(undefined8 *)(param_1 + 0x7f8),&local_30,&local_38);
  }
  else if (iVar1 == 5) {
    FUN_010bf130(*local_40,*(undefined8 *)(param_1 + 0x7f8),&local_30,&local_38);
  }
  else if (iVar1 == 6) {
    local_30 = 0x3ff0000000000000;
  }
  FUN_0113edb0(local_10,*local_40,*(undefined8 *)(param_1 + 0x7f8));
  FUN_0113e930(local_10,*local_40,*(undefined8 *)(param_1 + 0x7f8));
  FUN_0114d430(param_1,local_30,local_38,*(undefined8 *)(local_10 + 0x20));
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00414480(&local_58);
  return;
}

