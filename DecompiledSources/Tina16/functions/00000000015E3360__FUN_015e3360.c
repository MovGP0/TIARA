/* Ghidra address: 015e3360 */
/* Ghidra symbol: FUN_015e3360 */


void FUN_015e3360(longlong param_1,char param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + -0x20))(*(longlong **)(param_1 + 0x10),1);
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 400));
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x198));
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x1a0));
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x1a8));
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x1b0));
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x180) + -0x20))(*(longlong **)(param_1 + 0x180),1);
  }
  if ('\0' < param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

