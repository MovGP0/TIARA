/* Ghidra address: 005366f0 */
/* Ghidra symbol: FUN_005366f0 */


longlong FUN_005366f0(longlong param_1,undefined1 param_2)

{
  FUN_00536090(param_1,&DAT_00401008);
  *(undefined1 *)(param_1 + 0x10) = param_2;
  return param_1;
}

