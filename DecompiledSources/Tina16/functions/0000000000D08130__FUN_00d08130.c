/* Ghidra address: 00d08130 */
/* Ghidra symbol: FUN_00d08130 */


void FUN_00d08130(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = FUN_00d05df0(*(undefined8 *)(param_2 + 0x80));
  cVar2 = FUN_00d063e0(uVar1);
  if (cVar2 == '\0') {
    FUN_00cbdf10(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}

