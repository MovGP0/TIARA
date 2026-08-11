/* Ghidra address: 00d83b30 */
/* Ghidra symbol: FUN_00d83b30 */


void FUN_00d83b30(longlong *param_1)

{
  if (param_1[10] != 0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))((longlong *)param_1[9],param_1[10]);
    (**(code **)(*param_1 + 0x4f0))(param_1);
    FUN_00414ad0(param_1 + 3,*(undefined8 *)(param_1[10] + 0x78));
  }
  FUN_00d7fd50(param_1);
  return;
}

