/* Ghidra address: 00836370 */
/* Ghidra symbol: FUN_00836370 */


int FUN_00836370(longlong param_1,int param_2)

{
  char cVar1;
  
  for (; -1 < param_2; param_2 = param_2 + -1) {
    cVar1 = FUN_008324f0(*(undefined8 *)(param_1 + 0x4d8),param_2);
    if (cVar1 == '\0') break;
  }
  if (param_2 < 0) {
    param_2 = FUN_00836330(param_1,param_2);
  }
  return param_2;
}

