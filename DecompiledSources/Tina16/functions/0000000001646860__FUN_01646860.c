/* Ghidra address: 01646860 */
/* Ghidra symbol: FUN_01646860 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01646860(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                 undefined8 param_9,undefined1 *param_10,undefined1 *param_11)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68 [2];
  longlong *local_58;
  longlong local_28;
  
  local_90 = auStack_128;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_68[0] = 0;
  FUN_00414610(param_5);
  local_28 = FUN_0163e420(&DAT_01624d60,1);
  *(undefined4 *)PTR_DAT_02004cb8 = 0;
  *(undefined4 *)PTR_DAT_020043e0 = 0;
  local_78 = param_2;
  FUN_01602e30(0,1);
  FUN_0043fbc0(&local_a0,param_3,8);
  FUN_00416ba0(&local_98,L"Do_LoadAMSSubCircuit called, pOwner: $",local_a0);
  FUN_01602e30(local_98,1);
  FUN_0043fbc0(&local_b0,local_28,8);
  FUN_00416ba0(&local_a8,L"design is ",local_b0);
  FUN_01602e30(local_a8,1);
  *(longlong **)(local_28 + 0x88) = param_3;
  *(undefined8 *)(local_28 + 0x80) = param_1;
  *(undefined4 *)(local_28 + 0x90) = param_6;
  if ((*(longlong *)PTR_DAT_02004208 != 0) &&
     (*(char *)(*(longlong *)PTR_DAT_02004208 + 0xa9) == '\0')) {
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_c0,PTR_PTR_02005840);
    FUN_00b8e650(uVar4,&local_b8,L"HDLStrings.Msg_CompilingVAFile",local_c0);
    FUN_00c54370(*(undefined8 *)PTR_DAT_02004208,local_b8);
    *(undefined1 *)(*(longlong *)PTR_DAT_02004208 + 0x6c1) = 0;
    FUN_008059a0(*(undefined8 *)PTR_DAT_02004208);
  }
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  FUN_019af5f0(param_2,&local_c8);
  FUN_00414ad0(local_28 + 0x10b8,local_c8);
  if (*(longlong *)(local_28 + 0x10b8) == 0) {
    FUN_015fcb30(&local_d0,PTR_DAT_02004770);
    FUN_00414ad0(local_28 + 0x10b8,local_d0);
  }
  FUN_015fce80(*(undefined8 *)(local_28 + 0x10b8));
  FUN_01603390(&local_d8,param_2);
  FUN_00414ad0(local_28 + 0x10f8,local_d8);
  (**(code **)(*param_3 + 0x288))(param_3,&local_e0);
  FUN_00414ad0(local_28 + 0x1100,local_e0);
  local_108 = *(wchar_t **)(local_28 + 0x88);
  local_100 = *(undefined4 *)(local_28 + 0x90);
  _DAT_0210f850 =
       FUN_0163c920(&DAT_01623430,1,*(undefined8 *)(local_28 + 0x10),
                    *(undefined8 *)(local_28 + 0x80));
  *(undefined8 *)(local_28 + 0x78) = _DAT_0210f850;
  _DAT_0210f858 = 0;
  FUN_015fcd70(&local_e8,*(undefined8 *)(local_28 + 0x10b8));
  local_108 = L"print_va_log.txt";
  FUN_00416cd0(*(longlong *)(local_28 + 0x78) + 0x13990,3,local_e8,&DAT_01647214);
  FUN_00414ad0(*(longlong *)(local_28 + 0x78) + 0x28,*(undefined8 *)(local_28 + 0x10b8));
  lVar1 = *(longlong *)(local_28 + 0x78);
  *(undefined1 *)(lVar1 + 0x139e3) = param_7;
  *(undefined8 *)(lVar1 + 0x139d0) = param_9;
  *(longlong *)(lVar1 + 0x20) = local_28;
  *(undefined1 *)(lVar1 + 0x13a2c) = param_8;
  *(undefined8 *)(lVar1 + 0x13a30) = local_78;
  FUN_00414ad0(lVar1 + 0x30,param_5);
  local_70 = *(longlong *)(*(longlong *)(local_28 + 0x80) + 0x488);
  if (local_70 == 0) {
    *(undefined1 *)(*(longlong *)(local_28 + 0x78) + 0x139e5) = 0;
  }
  else {
    uVar2 = FUN_015fc1d0(local_70 + 0xe81);
    *(undefined1 *)(*(longlong *)(local_28 + 0x78) + 0x139e5) = uVar2;
  }
  FUN_0163e770(local_28,param_4,*(undefined8 *)(local_28 + 0x78));
  local_58 = *(longlong **)(local_28 + 0x88);
  FUN_015fcd70(&local_f0,*(undefined8 *)(local_28 + 0x10b8));
  FUN_01778500(*(undefined8 *)((longlong)local_58 + 0x1a8),local_f0,local_58);
  FUN_0163fd20(local_28);
  FUN_01645480(local_28);
  FUN_01643440(local_28);
  FUN_01636110(*(undefined8 *)(local_28 + 0x78));
  FUN_016457b0(local_28);
  local_58 = param_3;
  cVar3 = FUN_01d04d40(param_3);
  if ((cVar3 != '\0') && ((char)local_58[0x34] == '\x04')) {
    *(longlong *)(local_58[0x35] + 0xd8) = local_28;
  }
  if (local_28 != 0) {
    FUN_016419e0(local_28);
  }
  if (local_28 == 0) {
    *param_10 = 1;
    *param_11 = 0;
  }
  else {
    lVar1 = *(longlong *)(local_28 + 0x78);
    *param_10 = *(undefined1 *)(lVar1 + 0x139e0);
    *param_11 = *(undefined1 *)(lVar1 + 0x139e1);
  }
  FUN_01602e30(L"Do_LoadAMSSubCircuit end",1);
  FUN_01602e30(0,1);
  FUN_00414560(&local_f8,0xd);
  FUN_00414480(local_68);
  FUN_00414480(&param_5);
  return;
}

