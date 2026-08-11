/* Ghidra address: 00b1bb70 */
/* Ghidra symbol: FUN_00b1bb70 */


char FUN_00b1bb70(void)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [47];
  char local_29;
  
  uVar1 = FUN_005fbf20();
  local_29 = '\x01';
  iVar4 = 0xffffff;
  cVar3 = '\x01';
  puVar5 = &DAT_01e82e48;
  do {
    iVar2 = FUN_00b1bae0(auStack_58,*puVar5,uVar1);
    if (iVar2 < iVar4) {
      iVar4 = iVar2;
      local_29 = cVar3;
    }
    cVar3 = cVar3 + '\x01';
    puVar5 = puVar5 + 1;
  } while (cVar3 != ';');
  return local_29;
}

