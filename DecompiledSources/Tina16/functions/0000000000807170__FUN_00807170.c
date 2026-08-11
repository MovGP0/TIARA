/* Ghidra address: 00807170 */
/* Ghidra symbol: FUN_00807170 */


void FUN_00807170(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong local_20 [2];
  
  local_20[0] = 0;
  iVar2 = FUN_00659110(param_1);
  if (iVar2 == 1) {
    iVar2 = FUN_0064dc90(param_2);
    FUN_00414740(local_20,0,iVar2 + 1);
    uVar5 = 0;
    if (local_20[0] != 0) {
      uVar5 = *(undefined4 *)(local_20[0] + -4);
    }
    uVar4 = FUN_00416740(local_20[0]);
    FUN_0064dcb0(param_2,uVar4,uVar5);
    iVar2 = 0;
    if (local_20[0] != 0) {
      iVar2 = *(int *)(local_20[0] + -4);
    }
    iVar3 = 1;
    if (0 < iVar2) {
      do {
        uVar1 = *(ushort *)(local_20[0] + -2 + (longlong)iVar3 * 2);
        if (uVar1 < 0x100) {
          bVar6 = ((byte)(&DAT_008072b8)[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7)
                  & 1) != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          FUN_004169f0(local_20,iVar3 + -1);
          break;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_0064de00(param_1,local_20[0]);
  }
  FUN_00658e70(param_1,param_2,param_3);
  FUN_0064c650(param_2,5);
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    FUN_007fdf50(param_1,1);
  }
  FUN_00414480(local_20);
  return;
}

