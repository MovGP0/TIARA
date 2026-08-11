/* Ghidra address: 01c02680 */
/* Ghidra symbol: FUN_01c02680 */


int FUN_01c02680(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = (int)param_1[0x13];
  iVar1 = (**(code **)(*param_1 + 0x2e8))(param_1);
  if (iVar1 != 0) {
    uVar3 = FUN_01c02d10(param_1);
    if ((char)uVar3 != '\0') {
      if (*(byte *)((longlong)param_1 + 0xad) < 8) {
        bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) <<
                 (*(byte *)((longlong)param_1 + 0xad) & 0x1f) & 0x26U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) {
        iVar5 = (int)param_1[0xa1] * 2 + (int)param_1[0xa4] * *(int *)((longlong)param_1 + 0x4fc) +
                (int)param_1[0xa1] * 2 * (*(int *)((longlong)param_1 + 0x4fc) + -1);
        if (((char)param_1[0xa3] != '\0') && (1 < *(int *)((longlong)param_1 + 0x4fc))) {
          iVar5 = iVar5 + *(int *)((longlong)param_1 + 0x4fc) * 2;
        }
        if ((*(byte *)(param_1 + 0x92) & 1) != 0) {
          if (*(byte *)((longlong)param_1 + 0x491) < 8) {
            uVar2 = 1 << (*(byte *)((longlong)param_1 + 0x491) & 0x1f);
            bVar6 = (uVar2 & 6) != 0;
            uVar4 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar6);
          }
          else {
            uVar4 = 0;
            bVar6 = false;
          }
          if (bVar6) {
            iVar5 = iVar5 + 1;
          }
          if (*(byte *)((longlong)param_1 + 0x492) < 8) {
            bVar6 = ((int)CONCAT71((int7)(uVar4 >> 8),1) <<
                     (*(byte *)((longlong)param_1 + 0x492) & 0x1f) & 6U) != 0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            iVar5 = iVar5 + 1;
          }
        }
        uVar4 = 0;
        if ((*(byte *)(param_1 + 0x92) & 4) != 0) {
          if (*(byte *)((longlong)param_1 + 0x491) < 8) {
            uVar2 = 1 << (*(byte *)((longlong)param_1 + 0x491) & 0x1f);
            bVar6 = (uVar2 & 6) != 0;
            uVar4 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar6);
          }
          else {
            uVar4 = 0;
            bVar6 = false;
          }
          if (bVar6) {
            iVar5 = iVar5 + 1;
          }
        }
        if (*(byte *)((longlong)param_1 + 0x492) < 8) {
          bVar6 = ((int)CONCAT71((int7)(uVar4 >> 8),1) <<
                   (*(byte *)((longlong)param_1 + 0x492) & 0x1f) & 6U) != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
  return iVar5;
}

