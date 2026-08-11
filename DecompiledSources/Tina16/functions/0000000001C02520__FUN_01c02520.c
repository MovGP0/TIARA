/* Ghidra address: 01c02520 */
/* Ghidra symbol: FUN_01c02520 */


int FUN_01c02520(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)((longlong)param_1 + 0x9c);
  uVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
  if ((int)uVar2 != 0) {
    if (*(byte *)((longlong)param_1 + 0xad) < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) <<
               (*(byte *)((longlong)param_1 + 0xad) & 0x1f) & 0x38U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) {
      iVar4 = *(int *)((longlong)param_1 + 0x504) * 2 +
              *(int *)((longlong)param_1 + 0x51c) * (int)param_1[0xa0] +
              *(int *)((longlong)param_1 + 0x504) * 2 * ((int)param_1[0xa0] + -1);
      if ((*(char *)((longlong)param_1 + 0x50c) != '\0') && (1 < (int)param_1[0xa0])) {
        iVar4 = iVar4 + ((int)param_1[0xa0] + -1) * 2;
      }
      if ((*(byte *)(param_1 + 0x92) & 2) != 0) {
        if (*(byte *)((longlong)param_1 + 0x491) < 8) {
          uVar1 = 1 << (*(byte *)((longlong)param_1 + 0x491) & 0x1f);
          bVar5 = (uVar1 & 6) != 0;
          uVar3 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar5);
        }
        else {
          uVar3 = 0;
          bVar5 = false;
        }
        if (bVar5) {
          iVar4 = iVar4 + 1;
        }
        if (*(byte *)((longlong)param_1 + 0x492) < 8) {
          bVar5 = ((int)CONCAT71((int7)(uVar3 >> 8),1) <<
                   (*(byte *)((longlong)param_1 + 0x492) & 0x1f) & 6U) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          iVar4 = iVar4 + 1;
        }
      }
      if ((*(byte *)(param_1 + 0x92) & 8) != 0) {
        if (*(byte *)((longlong)param_1 + 0x491) < 8) {
          uVar1 = 1 << (*(byte *)((longlong)param_1 + 0x491) & 0x1f);
          bVar5 = (uVar1 & 6) != 0;
          uVar3 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar5);
        }
        else {
          uVar3 = 0;
          bVar5 = false;
        }
        if (bVar5) {
          iVar4 = iVar4 + 1;
        }
        if (*(byte *)((longlong)param_1 + 0x492) < 8) {
          bVar5 = ((int)CONCAT71((int7)(uVar3 >> 8),1) <<
                   (*(byte *)((longlong)param_1 + 0x492) & 0x1f) & 6U) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  return iVar4;
}

