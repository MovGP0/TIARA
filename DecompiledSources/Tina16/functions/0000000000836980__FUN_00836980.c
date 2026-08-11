/* Ghidra address: 00836980 */
/* Ghidra symbol: FUN_00836980 */


undefined8 FUN_00836980(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_00831b60(param_2,*(undefined8 *)(param_1 + 0x4d8),param_3,0x20);
  }
  else {
    FUN_00831b60(param_2,*(undefined8 *)(param_1 + 0x4d8),param_3,*(undefined2 *)(param_1 + 0x4e0));
  }
  return param_2;
}

