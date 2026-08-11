/* Ghidra address: 0041cbe0 */
/* Ghidra symbol: FUN_0041cbe0 */


void FUN_0041cbe0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x1298) != '\0') {
    iVar4 = 0xc5;
    lVar3 = param_1 + 0x20;
    do {
      FUN_0041c910(lVar3);
      lVar3 = lVar3 + 0x18;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    do {
      uVar2 = FUN_0041cb40(param_1);
      cVar1 = FUN_0041c3c0(uVar2);
    } while (cVar1 != '\0');
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_00411d90(*(longlong *)(param_1 + 0x18));
    }
  }
  return;
}

