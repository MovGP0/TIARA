/* Ghidra address: 01c3d500 */
/* Ghidra symbol: FUN_01c3d500 */


undefined8 FUN_01c3d500(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f0)) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x940));
  }
  return param_2;
}

