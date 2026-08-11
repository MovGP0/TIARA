/* Ghidra address: 00f03180 */
/* Ghidra symbol: FUN_00f03180 */


undefined8 FUN_00f03180(longlong param_1,undefined8 param_2)

{
  if ((*(ushort *)(param_1 + 0x4f) & 0x400) == 0) {
    FUN_00f02f60(param_1,param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x38));
  }
  return param_2;
}

