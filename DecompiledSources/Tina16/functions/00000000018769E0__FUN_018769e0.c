/* Ghidra address: 018769e0 */
/* Ghidra symbol: FUN_018769e0 */


void FUN_018769e0(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [32];
  
  cVar2 = '\0';
  puVar3 = &DAT_0211052c;
  do {
    uVar1 = FUN_018769c0(auStack_38,cVar2);
    *puVar3 = uVar1;
    cVar2 = cVar2 + '\x01';
    puVar3 = puVar3 + 1;
  } while (cVar2 != '\0');
  return;
}

