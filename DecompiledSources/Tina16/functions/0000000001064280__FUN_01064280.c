/* Ghidra address: 01064280 */
/* Ghidra symbol: FUN_01064280 */


void FUN_01064280(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_01056220(*(undefined8 *)(param_1 + 0x50));
  if (cVar2 != '\0') {
    uVar1 = FUN_0044d490(&PTR_FUN_015ef458,1,0);
    FUN_004134c0(uVar1);
  }
  return;
}

