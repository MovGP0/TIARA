/* Ghidra address: 00460db0 */
/* Ghidra symbol: FUN_00460db0 */


longlong FUN_00460db0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 **)(param_1 + 0x10) = param_2;
  FUN_004168e0(param_1,*param_2);
  return param_1;
}

