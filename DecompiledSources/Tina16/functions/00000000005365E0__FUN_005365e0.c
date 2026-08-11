/* Ghidra address: 005365e0 */
/* Ghidra symbol: FUN_005365e0 */


longlong FUN_005365e0(longlong param_1,undefined8 param_2)

{
  FUN_00536090(param_1,&DAT_00401160);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return param_1;
}

