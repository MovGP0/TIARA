/* Ghidra address: 00814f80 */
/* Ghidra symbol: FUN_00814f80 */


undefined8 FUN_00814f80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(lVar1 + 0x4d6) == '\x01') {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(lVar1 + 0x500);
  }
  return uVar2;
}

