/* Ghidra address: 017f1fa0 */
/* Ghidra symbol: FUN_017f1fa0 */


void FUN_017f1fa0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x110) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x110));
  }
  if (*(longlong *)(param_2 + 0x108) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x108));
  }
  if (*PTR_DAT_02004808 == '\0') {
    FUN_017efd70(*(undefined8 *)(param_2 + 0x150));
  }
  else {
    FUN_017f2b70(*(undefined8 *)(param_2 + 0x150),*(undefined4 *)(param_2 + 0x104));
  }
  FUN_00742eb0(*(undefined8 *)(*(longlong *)(param_2 + 0x150) + 0x7f8),0);
  return;
}

