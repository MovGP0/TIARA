/* Ghidra address: 00f5f6e0 */
/* Ghidra symbol: FUN_00f5f6e0 */


void FUN_00f5f6e0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_56 [8];
  undefined1 local_4e [8];
  undefined8 local_46;
  double local_3e;
  undefined8 local_36;
  undefined1 local_2e [2];
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26 [8];
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b [2];
  undefined1 local_19;
  
  local_68 = 0;
  local_60 = 0;
  FUN_00417580(local_56,&DAT_01d0ba10);
  if (*(longlong *)(param_1 + 0x770) == 0) {
    FUN_00417c40(local_56,PTR_DAT_02004010 + 0x8c0,&DAT_01d0ba10);
  }
  else {
    FUN_00417c40(local_56,*(longlong *)(param_1 + 0x770) + 0xe98,&DAT_01d0ba10);
  }
  FUN_00f07e10(*(undefined8 *)(param_1 + 0x6b0),local_56,local_4e,local_2e,&local_28,local_1b);
  local_46 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
  local_36 = FUN_00b90090(*(undefined8 *)(param_1 + 0x748));
  local_2c = FUN_00f04d50(*(undefined8 *)(param_1 + 0x6e8));
  local_3e = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6f0));
  plVar1 = *(longlong **)(param_1 + 0x6d8);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_60,uVar2);
  FUN_00414b50(local_26,local_60);
  local_1e = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))
                       (*(longlong **)(param_1 + 0x760));
  local_1d = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))
                       (*(longlong **)(param_1 + 0x730));
  local_1c = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))
                       (*(longlong **)(param_1 + 0x738));
  local_27 = (undefined1)((longlong)(*(int *)(*(longlong *)(param_1 + 0x718) + 0x4a8) + 1) % 3);
  local_19 = *(undefined1 *)(*(longlong *)(param_1 + 0x740) + 0x4a8);
  if (local_3e < 0.0) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_68,0x134);
    FUN_00f5f250(param_1,local_68);
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x6b0) + 0x540) == '\0') &&
     (*(char *)(param_1 + 0x778) == '\0')) {
    if (*(longlong *)(param_1 + 0x770) == 0) {
      FUN_00417c40(PTR_DAT_02004010 + 0x8c0,local_56,&DAT_01d0ba10);
    }
    else {
      FUN_00417c40(*(longlong *)(param_1 + 0x770) + 0xe98,local_56,&DAT_01d0ba10);
    }
  }
  FUN_00414560(&local_68,2);
  FUN_00417740(local_56,&DAT_01d0ba10);
  return;
}

