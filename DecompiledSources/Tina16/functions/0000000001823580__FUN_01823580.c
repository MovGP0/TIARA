/* Ghidra address: 01823580 */
/* Ghidra symbol: FUN_01823580 */


void FUN_01823580(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  
  iVar1 = FUN_00418c80();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (longlong)iVar5;
      bVar4 = *(byte *)(*param_1 + 8 + lVar2 * 0x10);
      if (bVar4 < 0x20 && (1 << (bVar4 & 0x1f) & 0x12018U) != 0) {
        FUN_004095f0(*(undefined8 *)(*param_1 + lVar2 * 0x10));
      }
      else {
        bVar4 = *(char *)(*param_1 + 8 + lVar2 * 0x10) - 8;
        if (bVar4 < 8) {
          bVar6 = ((int)CONCAT71((int7)((ulonglong)(lVar2 * 2) >> 8),1) << (bVar4 & 0x1f) & 0x80U)
                  != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          FUN_00414520(*param_1 + lVar2 * 0x10);
        }
        else {
          bVar4 = *(char *)(*param_1 + 8 + lVar2 * 0x10) - 8;
          if (bVar4 < 8) {
            bVar6 = ((int)CONCAT71((int7)((ulonglong)(lVar2 * 2) >> 8),1) << (bVar4 & 0x1f) & 8U) !=
                    0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            FUN_004144d0(*param_1 + lVar2 * 0x10);
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(*param_2 + 0x10);
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = FUN_004aeac0(*param_2,iVar5);
      FUN_004095f0(uVar3);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(*param_2);
  FUN_00419430(param_1,&DAT_01822708);
  return;
}

