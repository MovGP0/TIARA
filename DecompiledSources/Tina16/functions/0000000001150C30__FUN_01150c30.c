/* Ghidra address: 01150c30 */
/* Ghidra symbol: FUN_01150c30 */


int FUN_01150c30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  longlong local_30 [2];
  
  local_30[0] = *(longlong *)(param_2 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0xc0);
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  for (uVar5 = (uint)*(byte *)(param_2 + 0x18); uVar5 != 0; uVar5 = uVar5 - 1) {
    cVar3 = FUN_0114eb60(local_30[0]);
    if (((cVar3 != '\0') && (*(char *)(local_30[0] + 9) == '\0')) &&
       (*(char *)(local_30[0] + 10) != '\0')) {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0xc0) + 0x80 +
                       ((longlong)(ulonglong)*(byte *)(local_30[0] + 10) >> 3));
      *pbVar2 = *pbVar2 | '\x01' << ((ulonglong)*(byte *)(local_30[0] + 10) & 7);
    }
    FUN_00b909d0(local_30,0x14);
  }
  iVar4 = 0;
  uVar5 = 1;
  do {
    if (uVar5 < 0x100) {
      bVar6 = (*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x80 + ((longlong)(ulonglong)uVar5 >> 3))
               >> ((ulonglong)uVar5 & 7) & 1) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      iVar4 = iVar4 + 1;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x100);
  return iVar4 * 2;
}

