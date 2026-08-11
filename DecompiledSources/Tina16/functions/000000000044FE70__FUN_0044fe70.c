/* Ghidra address: 0044fe70 */
/* Ghidra symbol: FUN_0044fe70 */


void FUN_0044fe70(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  
  thunk_FUN_041c63c1(0,param_1 + 0x2c);
  iVar3 = 0;
  while ((iVar3 < 0xc &&
         (*(char *)(param_1 + 0x32 + (longlong)iVar3) != '\0' ||
          *(char *)(param_1 + 0x32 + (longlong)(iVar3 + 1)) != '\0'))) {
    bVar4 = *(byte *)(param_1 + 0x32 + (longlong)iVar3);
    bVar1 = *(byte *)(param_1 + 0x32 + (longlong)(iVar3 + 1));
    if (bVar4 <= bVar1) {
      cVar5 = (bVar1 - bVar4) + '\x01';
      do {
        pbVar2 = (byte *)((longlong)&DAT_01dbe7b8 + ((longlong)(ulonglong)bVar4 >> 3));
        *pbVar2 = *pbVar2 | '\x01' << ((ulonglong)bVar4 & 7);
        bVar4 = bVar4 + 1;
        cVar5 = cVar5 + -1;
      } while (cVar5 != '\0');
    }
    iVar3 = iVar3 + 2;
  }
  return;
}

