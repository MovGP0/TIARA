/* Ghidra address: 01887d30 */
/* Ghidra symbol: FUN_01887d30 */


ulonglong FUN_01887d30(longlong param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
  
  if (((*(uint *)(param_1 + 0x28) == 0) || (param_2 != 0)) || (param_3 != '\x02')) {
    uVar1 = FUN_004b9d80();
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x28);
  }
  return uVar1;
}

