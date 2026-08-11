/* Ghidra address: 00b9cbb0 */
/* Ghidra symbol: FUN_00b9cbb0 */


void FUN_00b9cbb0(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  FUN_00419260(&DAT_02019ab8,&DAT_00b9cb68,1,0x10000);
  iVar2 = 0;
  iVar4 = 0x265;
  puVar3 = &DAT_01e95c2c;
  do {
    uVar1 = *puVar3;
    iVar5 = (int)*(short *)(puVar3 + 2);
    if (iVar5 - 1U < 0x80000000) {
      do {
        *(undefined1 *)(DAT_02019ab8 + iVar2) = uVar1;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar3 = puVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

