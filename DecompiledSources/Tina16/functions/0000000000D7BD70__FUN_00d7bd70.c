/* Ghidra address: 00d7bd70 */
/* Ghidra symbol: FUN_00d7bd70 */


undefined8 FUN_00d7bd70(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x99);
  if (cVar1 == '\x05') {
    uVar2 = *(undefined8 *)(param_1 + 0x120);
  }
  else if (cVar1 == '\x06') {
    uVar2 = *(undefined8 *)(param_1 + 0x130);
  }
  else if (cVar1 == '\a') {
    uVar2 = *(undefined8 *)(param_1 + 0x128);
  }
  else if (cVar1 == '\b') {
    uVar2 = *(undefined8 *)(param_1 + 0x138);
  }
  else {
    uVar2 = FUN_00d77210();
  }
  return uVar2;
}

