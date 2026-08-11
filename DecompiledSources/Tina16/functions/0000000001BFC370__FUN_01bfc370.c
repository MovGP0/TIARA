/* Ghidra address: 01bfc370 */
/* Ghidra symbol: FUN_01bfc370 */


void FUN_01bfc370(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  if (cVar1 != '\0') {
    FUN_01bfdfd0(param_1[4],param_2);
  }
  return;
}

