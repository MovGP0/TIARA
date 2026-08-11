/* Ghidra address: 01d2b0a0 */
/* Ghidra symbol: FUN_01d2b0a0 */


void FUN_01d2b0a0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x50))(param_1,1);
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x70))(param_1,param_2);
  }
  return;
}

