/* Ghidra address: 004096a0 */
/* Ghidra symbol: FUN_004096a0 */


undefined8 * FUN_004096a0(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 unaff_retaddr;
  
  puVar3 = (undefined8 *)0x0;
  iVar2 = 0;
  do {
    lVar1 = FUN_0041f930();
    if (*(char *)(lVar1 + 0x18 + (longlong)iVar2 * 0x20) == '\0') {
      lVar1 = FUN_0041f930();
      puVar3 = (undefined8 *)(lVar1 + (longlong)iVar2 * 0x20);
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_00409860(0xe7,unaff_retaddr);
  }
  *(undefined1 *)(puVar3 + 3) = 1;
  lVar1 = FUN_0041f930();
  *(int *)(lVar1 + 0x200) = *(int *)(lVar1 + 0x200) + 1;
  *puVar3 = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  return puVar3;
}

