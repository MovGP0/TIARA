/* Ghidra address: 01d2b0e0 */
/* Ghidra symbol: FUN_01d2b0e0 */


void FUN_01d2b0e0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((char)param_1[2] != '\0') {
    (**(code **)(*param_1 + 0x50))(param_1,0);
    cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x70))(param_1,param_2);
    }
  }
  return;
}

