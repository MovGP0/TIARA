/* Ghidra address: 006599d0 */
/* Ghidra symbol: FUN_006599d0 */


void FUN_006599d0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_006598f0(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

