/* Ghidra address: 01ba03e0 */
/* Ghidra symbol: FUN_01ba03e0 */


void FUN_01ba03e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_950 [2];
  undefined1 local_940 [685];
  undefined1 local_693;
  double local_688;
  
  local_950[0] = 0;
  FUN_00417580(local_940,&DAT_01d0d0b8);
  FUN_00417c40(local_940,PTR_DAT_02004010,&DAT_01d0d0b8);
  local_688 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
  if (local_688 <= 0.0) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,local_950,0x134);
    FUN_01ba02e0(param_1,local_950[0]);
  }
  local_693 = (undefined1)((longlong)(*(int *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8) + 1) % 3);
  if (*(char *)(param_1 + 0x700) == '\0') {
    *(undefined4 *)(param_1 + 0x6ec) = 0xffffffff;
    uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
    *(undefined8 *)(param_1 + 0x6f0) = uVar1;
    *(char *)(param_1 + 0x6f8) = (char)((*(int *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8) + 1) % 3);
    FUN_00417c40(PTR_DAT_02004010,local_940,&DAT_01d0d0b8);
  }
  FUN_00414480(local_950);
  FUN_00417740(local_940,&DAT_01d0d0b8);
  return;
}

