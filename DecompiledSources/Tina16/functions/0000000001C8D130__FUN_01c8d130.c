/* Ghidra address: 01c8d130 */
/* Ghidra symbol: FUN_01c8d130 */


void FUN_01c8d130(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = FUN_01993ec0(*(undefined8 *)(param_1 + 0x27a8));
  if (lVar1 != 0) {
    cVar2 = FUN_0198a580(lVar1);
    if (cVar2 == '\x04') {
      cVar2 = FUN_01d04d40(lVar1);
      if (cVar2 != '\0') {
        FUN_01c8c8f0(param_1,lVar1);
      }
    }
  }
  return;
}

