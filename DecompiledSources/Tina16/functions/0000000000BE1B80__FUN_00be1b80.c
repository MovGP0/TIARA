/* Ghidra address: 00be1b80 */
/* Ghidra symbol: FUN_00be1b80 */


char FUN_00be1b80(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 != '\0') {
    FUN_00be1bd0(param_1);
    FUN_00be1350(param_1,param_2);
    FUN_00be1a00(param_1);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return cVar1;
}

