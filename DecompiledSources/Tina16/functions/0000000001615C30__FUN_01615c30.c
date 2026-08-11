/* Ghidra address: 01615c30 */
/* Ghidra symbol: FUN_01615c30 */


undefined8 FUN_01615c30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\x01') {
    uVar2 = FUN_01612bc0(param_1,2);
  }
  else if (cVar1 == '\x15') {
    uVar2 = FUN_01612bc0(param_1,1);
  }
  else if (cVar1 == '\x03') {
    uVar2 = FUN_01612bc0(param_1,2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
  }
  return uVar2;
}

