/* Ghidra address: 01704c50 */
/* Ghidra symbol: FUN_01704c50 */


undefined8 FUN_01704c50(undefined8 param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  longlong local_res18 [2];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar2 = 0;
  if (local_res18[0] != 0) {
    iVar2 = *(int *)(local_res18[0] + -4);
  }
  if (0 < iVar2) {
    iVar2 = 0;
    if (local_res18[0] != 0) {
      iVar2 = *(int *)(local_res18[0] + -4);
    }
    if (iVar2 < *param_4) {
      uVar3 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),0xd);
    }
    else {
      uVar3 = (ulonglong)*(ushort *)(local_res18[0] + -2 + (longlong)*param_4 * 2);
    }
    FUN_00414480(param_2);
    while( true ) {
      if ((short)uVar3 == 0x27) {
        bVar1 = false;
      }
      else {
        iVar2 = 0;
        if (local_res18[0] != 0) {
          iVar2 = *(int *)(local_res18[0] + -4);
        }
        bVar1 = *param_4 <= iVar2;
      }
      if (!bVar1) break;
      FUN_00416780(local_20,uVar3 & 0xffffffff);
      FUN_00416ad0(param_2,local_20[0]);
      *param_4 = *param_4 + 1;
      iVar2 = 0;
      if (local_res18[0] != 0) {
        iVar2 = *(int *)(local_res18[0] + -4);
      }
      if (iVar2 < *param_4) {
        uVar3 = CONCAT62((int6)(uVar3 >> 0x10),0xd);
      }
      else {
        uVar3 = (ulonglong)*(ushort *)(local_res18[0] + -2 + (longlong)*param_4 * 2);
      }
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return param_2;
}

