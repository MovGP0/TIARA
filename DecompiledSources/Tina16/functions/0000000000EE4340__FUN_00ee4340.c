/* Ghidra address: 00ee4340 */
/* Ghidra symbol: FUN_00ee4340 */


void FUN_00ee4340(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
  }
  return;
}

