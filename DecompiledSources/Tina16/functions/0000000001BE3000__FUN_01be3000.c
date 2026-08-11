/* Ghidra address: 01be3000 */
/* Ghidra symbol: FUN_01be3000 */


char FUN_01be3000(longlong param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  
  cVar1 = FUN_0064e5d0(param_1,param_2,param_3,param_4,param_5,param_6);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x619) == '\0')) {
    cVar1 = '\x03';
  }
  return cVar1;
}

