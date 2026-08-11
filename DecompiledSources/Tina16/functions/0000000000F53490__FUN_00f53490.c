/* Ghidra address: 00f53490 */
/* Ghidra symbol: FUN_00f53490 */


void FUN_00f53490(longlong param_1,undefined4 param_2)

{
  if (*(undefined8 **)(param_1 + 0x1390) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x1390) = *(undefined8 *)(param_1 + 5000);
  }
  FUN_017cc8f0(param_1 + 0xb0);
  FUN_00f51380(param_1,param_2);
  return;
}

