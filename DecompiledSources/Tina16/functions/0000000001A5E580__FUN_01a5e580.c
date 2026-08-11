/* Ghidra address: 01a5e580 */
/* Ghidra symbol: FUN_01a5e580 */


void FUN_01a5e580(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x50))(param_1,1);
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x70))(param_1,param_2);
  }
  return;
}

