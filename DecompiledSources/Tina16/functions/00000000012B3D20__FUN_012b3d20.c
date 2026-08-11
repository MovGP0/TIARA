/* Ghidra address: 012b3d20 */
/* Ghidra symbol: FUN_012b3d20 */


void FUN_012b3d20(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_950 [2];
  undefined1 local_940 [664];
  undefined2 local_6a8;
  double local_6a6;
  double local_69e;
  
  local_950[0] = 0;
  FUN_00417580(local_940,&DAT_01d0d0b8);
  FUN_00417c40(local_940,*(longlong *)(param_1 + 0x718) + 0x5d8,&DAT_01d0d0b8);
  local_6a6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
  local_69e = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6f0));
  local_6a8 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x6f8));
  if ((((local_6a6 < -100.0) || (500.0 < local_6a6)) || (local_69e < -100.0)) ||
     ((500.0 < local_69e || (local_69e <= local_6a6)))) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,local_950,0x134);
    FUN_012b3cc0(param_1,local_950[0]);
  }
  if (*(char *)(param_1 + 0x710) == '\0') {
    FUN_00417c40(*(longlong *)(param_1 + 0x718) + 0x5d8,local_940,&DAT_01d0d0b8);
  }
  FUN_00414480(local_950);
  FUN_00417740(local_940,&DAT_01d0d0b8);
  return;
}

