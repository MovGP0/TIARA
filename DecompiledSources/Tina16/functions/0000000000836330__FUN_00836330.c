/* Ghidra address: 00836330 */
/* Ghidra symbol: FUN_00836330 */


int FUN_00836330(longlong param_1,int param_2)

{
  char cVar1;
  
  while( true ) {
    if (*(int *)(param_1 + 0x4e4) <= param_2) {
      return param_2;
    }
    cVar1 = FUN_008324f0(*(undefined8 *)(param_1 + 0x4d8),param_2);
    if (cVar1 == '\0') break;
    param_2 = param_2 + 1;
  }
  return param_2;
}

