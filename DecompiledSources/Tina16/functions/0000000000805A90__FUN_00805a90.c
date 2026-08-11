/* Ghidra address: 00805a90 */
/* Ghidra symbol: FUN_00805a90 */


void FUN_00805a90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  *(undefined8 *)(param_1 + 0x668) = param_2;
  *(undefined8 *)(param_1 + 0x660) = 0;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 == '\0') {
    FUN_00655e40(param_1);
  }
  else {
    FUN_00655b90(param_1);
  }
  return;
}

