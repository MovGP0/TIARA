/* Ghidra address: 00536490 */
/* Ghidra symbol: FUN_00536490 */


longlong FUN_00536490(longlong param_1,undefined4 param_2)

{
  FUN_00536090(param_1,&DAT_004010c0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

