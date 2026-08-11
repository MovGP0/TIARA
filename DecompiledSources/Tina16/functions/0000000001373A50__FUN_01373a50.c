/* Ghidra address: 01373a50 */
/* Ghidra symbol: FUN_01373a50 */


ulonglong FUN_01373a50(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined7 uVar2;
  char cVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined7 uVar5;
  int iVar6;
  bool bVar7;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  iVar6 = 0;
  do {
    cVar3 = (char)uVar4;
    if ((cVar3 == '\0') || (*(int *)(*(longlong *)(param_1 + 0x478) + 0x10) <= iVar6)) {
      return uVar4 & 0xffffffff;
    }
    lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),iVar6);
    uVar5 = (undefined7)(uVar4 >> 8);
    uVar2 = (undefined7)((ulonglong)lVar1 >> 8);
    if (param_2 == '\x01') {
      if (cVar3 != '\0') {
        if (*(byte *)(lVar1 + 8) < 8) {
          bVar7 = ((int)CONCAT71(uVar2,1) << (*(byte *)(lVar1 + 8) & 0x1f) & 1U) != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          uVar4 = CONCAT71(uVar5,1);
          goto LAB_01373b2c;
        }
      }
      uVar4 = 0;
    }
    else if ((byte)(param_2 - 3U) < 2) {
      if (cVar3 != '\0') {
        if (*(byte *)(lVar1 + 8) < 8) {
          bVar7 = ((int)CONCAT71(uVar2,1) << (*(byte *)(lVar1 + 8) & 0x1f) & 9U) != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          uVar4 = CONCAT71(uVar5,1);
          goto LAB_01373b2c;
        }
      }
      uVar4 = 0;
    }
    else if (param_2 == '\b') {
      if (cVar3 != '\0') {
        if (*(byte *)(lVar1 + 8) < 8) {
          bVar7 = ((int)CONCAT71(uVar2,1) << (*(byte *)(lVar1 + 8) & 0x1f) & 6U) != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          uVar4 = CONCAT71(uVar5,1);
          goto LAB_01373b2c;
        }
      }
      uVar4 = 0;
    }
LAB_01373b2c:
    iVar6 = iVar6 + 1;
  } while( true );
}

