/* Ghidra address: 01150190 */
/* Ghidra symbol: FUN_01150190 */


void FUN_01150190(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  short sVar2;
  uint uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if ((*(char *)(lVar1 + 0x5db) == '\x03') && (*(char *)(lVar1 + 0xb73) == '\x01')) {
    uVar3 = FUN_0114edd0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0xa0));
    if (uVar3 < 0x10) {
      bVar4 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << ((byte)uVar3 & 0x1f) & 0xfffU)
              != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      sVar2 = (short)(1 << ((byte)uVar3 & 0x1f));
      *(short *)(lVar1 + 0xb75) = sVar2;
      *(double *)(lVar1 + 0x695) = (double)(int)sVar2;
      if (*(char *)(lVar1 + 0xb74) != '\0') {
        *(double *)(lVar1 + 0x695) = *(double *)(lVar1 + 0x695) + 1.0;
      }
    }
    else {
      FUN_01b04ef0(0x109,0x1584,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x1310),0);
    }
  }
  return;
}

