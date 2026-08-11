/* Ghidra address: 007ffc20 */
/* Ghidra symbol: FUN_007ffc20 */


undefined8 FUN_007ffc20(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_007ffc10(param_1);
  if ((cVar1 != '\0') && (lVar2 = FUN_0060ce20(*(undefined8 *)(param_1 + 0x4f0)), lVar2 != 0)) {
    return 1;
  }
  return 0;
}

