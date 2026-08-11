/* Ghidra address: 005364f0 */
/* Ghidra symbol: FUN_005364f0 */


longlong FUN_005364f0(longlong param_1,undefined4 param_2)

{
  FUN_00536090(param_1,&DAT_00401200);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

