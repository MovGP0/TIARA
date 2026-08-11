/* Ghidra address: 01950900 */
/* Ghidra symbol: FUN_01950900 */


void FUN_01950900(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_01953ba0(param_1);
  if ((cVar1 == '\0') || ((*(byte *)(param_1 + 0xc3) & 4) == 0)) {
    *(undefined8 *)(param_1 + 0x98) = param_2;
  }
  return;
}

