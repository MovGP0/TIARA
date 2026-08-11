/* Ghidra address: 0149cb90 */
/* Ghidra symbol: FUN_0149cb90 */


void FUN_0149cb90(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_950 [2];
  undefined1 local_940 [928];
  undefined2 local_5a0;
  double local_59e;
  double local_596;
  undefined8 local_58e;
  byte local_586;
  
  local_950[0] = 0;
  FUN_00417580(local_940,&DAT_01d0d0b8);
  if (*(longlong *)(param_1 + 0x540) == 0) {
    FUN_00417c40(local_940,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_940,*(longlong *)(param_1 + 0x540) + 0x5d8,&DAT_01d0d0b8);
  }
  local_59e = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x4f0));
  local_596 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x4f8));
  local_5a0 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x500));
  local_58e = FUN_00b90090(*(undefined8 *)(param_1 + 0x530));
  if (((local_596 <= local_59e) || (local_59e <= 0.0)) || (1e+50 < local_596)) {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,local_950,0x134);
    FUN_0149c990(param_1,local_950[0]);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x260))(*(longlong **)(param_1 + 0x510));
  if (cVar1 == '\0') {
    local_586 = local_586 & 0xfe;
  }
  else {
    local_586 = local_586 | 1;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x518) + 0x260))(*(longlong **)(param_1 + 0x518));
  if (cVar1 == '\0') {
    local_586 = local_586 & 0xfd;
  }
  else {
    local_586 = local_586 | 2;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x520) + 0x260))(*(longlong **)(param_1 + 0x520));
  if (cVar1 == '\0') {
    local_586 = local_586 & 0xfb;
  }
  else {
    local_586 = local_586 | 4;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x528) + 0x260))(*(longlong **)(param_1 + 0x528));
  if (cVar1 == '\0') {
    local_586 = local_586 & 0xf7;
  }
  else {
    local_586 = local_586 | 8;
  }
  if (*(char *)(param_1 + 0x538) == '\0') {
    if (*(longlong *)(param_1 + 0x540) == 0) {
      FUN_00417c40(PTR_DAT_02004010,local_940,&DAT_01d0d0b8);
    }
    else {
      FUN_00417c40(*(longlong *)(param_1 + 0x540) + 0x5d8,local_940,&DAT_01d0d0b8);
    }
  }
  FUN_00414480(local_950);
  FUN_00417740(local_940,&DAT_01d0d0b8);
  return;
}

