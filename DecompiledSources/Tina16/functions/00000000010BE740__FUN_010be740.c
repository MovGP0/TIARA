/* Ghidra address: 010be740 */
/* Ghidra symbol: FUN_010be740 */


void FUN_010be740(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined1 local_a70 [256];
  undefined8 local_970;
  undefined8 local_968;
  undefined8 local_960 [2];
  undefined1 local_950 [608];
  undefined2 local_6f0;
  double local_6ee;
  double local_6e6;
  undefined2 local_6de;
  double local_6dc;
  double local_6d4;
  char local_6ba;
  char local_6b9;
  undefined1 local_3ed [619];
  undefined1 local_182 [8];
  undefined1 local_17a [8];
  undefined1 local_172;
  undefined1 local_171;
  
  local_a90 = 0;
  local_a88 = 0;
  local_a80 = 0;
  local_a78 = 0;
  local_970 = 0;
  local_968 = 0;
  local_960[0] = 0;
  FUN_00417580(local_950,&DAT_01d0d0b8);
  if (*(longlong *)(param_1 + 0x5b8) == 0) {
    FUN_00417c40(local_950,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_950,*(longlong *)(param_1 + 0x5b8) + 0x5d8,&DAT_01d0d0b8);
  }
  local_6ee = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x528));
  local_6e6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x520));
  local_6f0 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x518));
  local_6dc = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x570));
  local_6d4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x578));
  local_6de = FUN_00f04d50(*(undefined8 *)(param_1 + 0x580));
  local_6ba = *(char *)(*(longlong *)(param_1 + 0x598) + 0x4a8);
  local_6b9 = *(char *)(*(longlong *)(param_1 + 0x5a0) + 0x4a8);
  plVar1 = *(longlong **)(param_1 + 0x510);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_960,uVar2);
  FUN_00414b50(local_182,local_960[0]);
  plVar1 = *(longlong **)(param_1 + 0x588);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_968,uVar2);
  FUN_00414b50(local_17a,local_968);
  local_172 = (**(code **)(**(longlong **)(param_1 + 0x508) + 0x260))
                        (*(longlong **)(param_1 + 0x508));
  local_171 = (**(code **)(**(longlong **)(param_1 + 0x590) + 0x260))
                        (*(longlong **)(param_1 + 0x590));
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x558),&local_970);
  FUN_00416910(local_a70,local_970,0xff);
  FUN_00415020(local_3ed,local_a70,10);
  if ((local_6ba == '\0') && (local_6ee == local_6e6)) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_a78,0x134);
    FUN_010be0c0(param_1,local_a78);
  }
  if ((local_6b9 == '\0') && (local_6dc == local_6d4)) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_a80,0x134);
    FUN_010be0c0(param_1,local_a80);
  }
  if ((local_6ba == '\x01') &&
     (((local_6e6 <= local_6ee || (local_6ee <= 0.0)) || (1e+50 < local_6e6)))) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_a88,0x134);
    FUN_010be0c0(param_1,local_a88);
  }
  if ((local_6b9 == '\x01') &&
     (((local_6d4 <= local_6dc || (local_6dc <= 0.0)) || (1e+50 < local_6d4)))) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_a90,0x134);
    FUN_010be0c0(param_1,local_a90);
  }
  if (*(char *)(param_1 + 0x5a8) == '\0') {
    if (*(longlong *)(param_1 + 0x5b8) == 0) {
      FUN_00417c40(PTR_DAT_02004010,local_950,&DAT_01d0d0b8);
    }
    else {
      FUN_00417c40(*(longlong *)(param_1 + 0x5b8) + 0x5d8,local_950,&DAT_01d0d0b8);
    }
  }
  FUN_00414560(&local_a90,4);
  FUN_00414480(&local_970);
  FUN_00414560(&local_968,2);
  FUN_00417740(local_950,&DAT_01d0d0b8);
  return;
}

