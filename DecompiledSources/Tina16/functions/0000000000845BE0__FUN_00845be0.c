/* Ghidra address: 00845be0 */
/* Ghidra symbol: FUN_00845be0 */


void FUN_00845be0(longlong param_1,short *param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_2 == 0x104) {
    *param_3 = 1;
    if ((*(byte *)(param_2 + 6) & 1) == 0) {
      if ((*(byte *)(param_2 + 6) & 4) == 0) {
        uVar3 = *(int *)(param_2 + 4) - *(int *)(param_1 + 0x4dc);
        uVar2 = (int)uVar3 >> 0x1f;
        iVar4 = (uVar3 ^ uVar2) - uVar2;
        if (iVar4 < 2) {
          uVar3 = *(int *)(param_2 + 2) - *(int *)(param_1 + 0x4d8);
          uVar2 = (int)uVar3 >> 0x1f;
          iVar4 = (uVar3 ^ uVar2) - uVar2;
          if (1 < iVar4) {
            iVar1 = FUN_00848220(param_1,*(undefined4 *)(param_1 + 0x4e8));
            iVar4 = iVar4 / iVar1;
            if (((int)((uVar3 ^ uVar2) - uVar2) % iVar1 == 0) || (0 < iVar4)) {
              if (-1 < iVar4 + -1) {
                do {
                  FUN_008447f0(param_1,0,
                               *(undefined4 *)(&DAT_01e19624 + (ulonglong)(0 < (int)uVar3) * 4),0,1)
                  ;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
              *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 2);
              *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + (int)uVar3 % iVar1;
            }
          }
        }
        else {
          iVar1 = FUN_00848250(param_1,*(undefined4 *)(param_1 + 0x4ec));
          iVar4 = iVar4 / iVar1;
          if (((int)((uVar3 ^ uVar2) - uVar2) % iVar1 == 0) || (0 < iVar4)) {
            if (-1 < iVar4 + -1) {
              do {
                FUN_008447f0(param_1,1,
                             *(undefined4 *)(&DAT_01e1961c + (ulonglong)(0 < (int)uVar3) * 4),0,1);
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 2);
            *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + (int)uVar3 % iVar1;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 2);
    }
  }
  return;
}

