/* Ghidra address: 006d7e20 */
/* Ghidra symbol: FUN_006d7e20 */


void FUN_006d7e20(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  longlong local_20 [2];
  
  local_20[0] = 0;
  lVar4 = FUN_006d7590(param_1,*(undefined8 *)(param_2 + 8));
  if (lVar4 != 0) {
    piVar2 = *(int **)(param_2 + 0x10);
    if (*piVar2 == 0xc) {
      FUN_004167d0(local_20,*(undefined8 *)(piVar2 + 4));
      iVar5 = 0;
      if (local_20[0] != 0) {
        iVar5 = *(int *)(local_20[0] + -4);
      }
      iVar3 = 1;
      if (0 < iVar5) {
        do {
          uVar1 = *(ushort *)(local_20[0] + -2 + (longlong)iVar3 * 2);
          if (uVar1 < 0x100) {
            bVar6 = ((byte)(&DAT_006d7f48)[(longlong)(ulonglong)uVar1 >> 3] >>
                     ((ulonglong)uVar1 & 7) & 1) != 0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            FUN_004169f0(local_20,iVar3 + -1);
            break;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_0064de00(lVar4,local_20[0]);
    }
    else if (*piVar2 == 0xb00b) {
      FUN_006d68c0(lVar4,(char)piVar2[2]);
    }
  }
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  FUN_00414480(local_20);
  return;
}

