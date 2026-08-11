/* Ghidra address: 01528290 */
/* Ghidra symbol: FUN_01528290 */


void FUN_01528290(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_950 [2];
  undefined1 local_940 [712];
  double local_678;
  double local_670;
  undefined2 local_668;
  undefined1 local_666;
  
  local_950[0] = 0;
  FUN_00417580(local_940,&DAT_01d0d0b8);
  FUN_00417c40(local_940,*(longlong *)(param_1 + 0x720) + 0x5d8,&DAT_01d0d0b8);
  local_678 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
  local_670 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6f0));
  local_668 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x6f8));
  local_666 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))
                        (*(longlong **)(param_1 + 0x710));
  if ((local_670 <= local_678) || (local_678 < 0.0)) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,local_950,0x134);
    FUN_01528230(param_1,local_950[0]);
  }
  if (*(char *)(param_1 + 0x718) == '\0') {
    FUN_00417c40(*(longlong *)(param_1 + 0x720) + 0x5d8,local_940,&DAT_01d0d0b8);
  }
  FUN_00414480(local_950);
  FUN_00417740(local_940,&DAT_01d0d0b8);
  return;
}

