/* Ghidra address: 01c73f30 */
/* Ghidra symbol: FUN_01c73f30 */


void FUN_01c73f30(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x27a8);
  cVar2 = FUN_01995280(uVar1);
  FUN_01995220(uVar1,cVar2 == '\0');
  return;
}

