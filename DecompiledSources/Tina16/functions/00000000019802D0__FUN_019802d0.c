/* Ghidra address: 019802d0 */
/* Ghidra symbol: FUN_019802d0 */


void FUN_019802d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  
  cVar1 = FUN_01953ba0(param_1);
  if ((cVar1 != '\0') || (*(char *)(param_1 + 0x2f8) != '\0')) {
    FUN_01966fa0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

