/* Ghidra address: 010f09a0 */
/* Ghidra symbol: FUN_010f09a0 */


void FUN_010f09a0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x50))(param_1,1);
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x70))(param_1,param_2);
    FUN_010ef870(param_1,param_1 + 0x10);
    FUN_010ef3f0(param_1,param_2);
  }
  return;
}

