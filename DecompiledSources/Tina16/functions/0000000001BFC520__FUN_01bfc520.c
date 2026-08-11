/* Ghidra address: 01bfc520 */
/* Ghidra symbol: FUN_01bfc520 */


void FUN_01bfc520(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
  if (cVar1 != '\0') {
    FUN_01bfe3e0(param_1[4],param_2);
  }
  return;
}

