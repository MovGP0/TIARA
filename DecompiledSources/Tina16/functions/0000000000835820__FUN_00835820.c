/* Ghidra address: 00835820 */
/* Ghidra symbol: FUN_00835820 */


void FUN_00835820(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_008355d0(param_1);
  if (cVar1 == '\0') {
    FUN_00680590(param_1,param_2);
  }
  else {
    FUN_00680590(param_1,*(undefined4 *)(param_1 + 0x4e4));
  }
  return;
}

