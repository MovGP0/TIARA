/* Ghidra address: 00658340 */
/* Ghidra symbol: FUN_00658340 */


void FUN_00658340(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_00657060(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8),param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

