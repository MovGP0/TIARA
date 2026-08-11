/* Ghidra address: 00659d80 */
/* Ghidra symbol: FUN_00659d80 */


void FUN_00659d80(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_00657060(*(undefined8 *)(param_2 + 0x10),param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

