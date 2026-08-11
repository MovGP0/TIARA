/* Ghidra address: 00ee4f70 */
/* Ghidra symbol: FUN_00ee4f70 */


void FUN_00ee4f70(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res8 [4];
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_19 [9];
  longlong local_10;
  
  local_30 = auStack_a8;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  *PTR_DAT_02002ce0 = 0;
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_38,0x4e8);
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x920),local_38);
  local_10 = FUN_016b97f0(&DAT_016b45f0,1,0);
  FUN_00414ad0(*(longlong *)(local_10 + 0x10) + 0x218,local_res8[0]);
  FUN_00414ad0(*(longlong *)(local_10 + 0x10) + 0x220,
               *(undefined8 *)(*(longlong *)(local_10 + 0x10) + 0x218));
  *(undefined1 *)(*(longlong *)(local_10 + 0x10) + 0x231) = 0;
  FUN_016cff60(local_10,1,1,0);
  lVar3 = FUN_016b9cb0(local_10);
  *(undefined8 *)(lVar3 + 0x110) = 0x3ff0000000000000;
  FUN_016bb740(local_10,*(undefined8 *)
                         (*(longlong *)(*(longlong *)PTR_DAT_020023c0 + 0x958) + 0x4e8));
  FUN_016bb340(local_10,&local_40,local_19);
  while( true ) {
    FUN_016b8f10(&local_48,*(undefined8 *)(local_10 + 0xd80));
    iVar1 = FUN_00415a60(local_48,&DAT_00ee527c);
    if (iVar1 == 0) break;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 1;
    FUN_00ee2730(*(undefined8 *)(local_10 + 8),0,0,0);
  }
  *(undefined1 *)(*(longlong *)(local_10 + 0x10) + 0x231) = 1;
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_50,0x4eb);
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x920),local_50);
  FUN_00410f20(local_10);
  FUN_00414480(&local_50);
  FUN_00414590(&local_48,2);
  FUN_00414480(&local_38);
  FUN_00414480(local_res8);
  return;
}

