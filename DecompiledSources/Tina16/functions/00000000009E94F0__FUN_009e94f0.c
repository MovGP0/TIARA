/* Ghidra address: 009e94f0 */
/* Ghidra symbol: FUN_009e94f0 */


undefined8 FUN_009e94f0(longlong param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 8) & 8) == 0) {
    FUN_009e95c0(param_1,&LAB_009e9530);
  }
  FUN_00414b90(param_2,*(undefined8 *)(param_1 + 0x10));
  return param_2;
}

