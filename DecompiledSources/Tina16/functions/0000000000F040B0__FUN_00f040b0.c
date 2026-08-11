/* Ghidra address: 00f040b0 */
/* Ghidra symbol: FUN_00f040b0 */


undefined8 FUN_00f040b0(longlong param_1,undefined8 param_2)

{
  if ((*(ushort *)(*(longlong *)(param_1 + 8) + 0x4f) & 0x40) == 0) {
    FUN_00f04010(param_1,param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x10));
  }
  return param_2;
}

