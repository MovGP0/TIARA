/* Ghidra address: 0197b750 */
/* Ghidra symbol: FUN_0197b750 */


longlong FUN_0197b750(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x27] == 0) {
    lVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
    param_1[0x27] = lVar1;
  }
  return param_1[0x27];
}

