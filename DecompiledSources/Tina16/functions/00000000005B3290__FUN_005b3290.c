/* Ghidra address: 005b3290 */
/* Ghidra symbol: FUN_005b3290 */


longlong FUN_005b3290(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x21] == 0) {
    lVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
    param_1[0x21] = lVar1;
  }
  return param_1[0x21];
}

