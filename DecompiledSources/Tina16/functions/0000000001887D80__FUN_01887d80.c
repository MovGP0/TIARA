/* Ghidra address: 01887d80 */
/* Ghidra symbol: FUN_01887d80 */


ulonglong FUN_01887d80(longlong param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
  
  if (((*(uint *)(param_1 + 0x18) == 0) || (param_2 != 0)) || (param_3 != '\x02')) {
    uVar1 = FUN_004b97f0();
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x18);
  }
  return uVar1;
}

