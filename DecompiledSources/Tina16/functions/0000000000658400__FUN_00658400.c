/* Ghidra address: 00658400 */
/* Ghidra symbol: FUN_00658400 */


void FUN_00658400(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_00657060(*(undefined8 *)(param_2 + 8),param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

