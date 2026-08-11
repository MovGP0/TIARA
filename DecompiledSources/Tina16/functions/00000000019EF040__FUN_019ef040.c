/* Ghidra address: 019ef040 */
/* Ghidra symbol: FUN_019ef040 */


undefined8 FUN_019ef040(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  longlong local_res18 [2];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(param_2);
  iVar5 = 0;
  if (local_res18[0] != 0) {
    iVar5 = *(int *)(local_res18[0] + -4);
  }
  iVar3 = 1;
  if (0 < iVar5) {
    do {
      lVar2 = FUN_00414de0(local_res18);
      lVar4 = (longlong)iVar3;
      uVar1 = FUN_00432440(lVar2 + -2 + lVar4 * 2);
      if (uVar1 < 0x100) {
        bVar6 = ((byte)(&DAT_019ef148)[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7) &
                1) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        FUN_00416780(local_30,*(undefined2 *)(local_res18[0] + -2 + lVar4 * 2));
        FUN_00416ad0(param_2,local_30[0]);
      }
      if (*(short *)(local_res18[0] + -2 + lVar4 * 2) == 0x3a) break;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return param_2;
}

