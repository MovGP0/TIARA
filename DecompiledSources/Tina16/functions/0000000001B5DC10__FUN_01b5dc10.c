/* Ghidra address: 01b5dc10 */
/* Ghidra symbol: FUN_01b5dc10 */


bool FUN_01b5dc10(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = *(char *)(param_1 + 0x5b) == '\0';
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x5a) = 1;
    *(undefined1 *)(param_1 + 0x5b) = 1;
    *(undefined8 *)(param_1 + 0x60) = 0;
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
    FUN_00e1d2a0(uVar1,0x534);
  }
  return bVar2;
}

