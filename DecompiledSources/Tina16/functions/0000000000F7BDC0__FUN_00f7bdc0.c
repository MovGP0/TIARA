/* Ghidra address: 00f7bdc0 */
/* Ghidra symbol: FUN_00f7bdc0 */


undefined8 FUN_00f7bdc0(longlong param_1)

{
  char cVar1;
  undefined8 local_10;
  
  cVar1 = FUN_010b13a0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x48),&local_10,1);
  if (cVar1 == '\0') {
    local_10 = 0;
  }
  return local_10;
}

