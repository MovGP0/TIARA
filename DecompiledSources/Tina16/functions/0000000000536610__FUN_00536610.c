/* Ghidra address: 00536610 */
/* Ghidra symbol: FUN_00536610 */


longlong FUN_00536610(longlong param_1,undefined8 param_2)

{
  FUN_00536090(param_1,&DAT_00401188);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return param_1;
}

