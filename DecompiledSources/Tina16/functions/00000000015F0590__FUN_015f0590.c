/* Ghidra address: 015f0590 */
/* Ghidra symbol: FUN_015f0590 */


undefined8 FUN_015f0590(undefined8 param_1,longlong param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  longlong local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = 0;
  if (local_res10[0] != 0) {
    iVar2 = *(int *)(local_res10[0] + -4);
  }
  if (0 < iVar2) {
    iVar2 = 0;
    if (local_res10[0] != 0) {
      iVar2 = *(int *)(local_res10[0] + -4);
    }
    if (iVar2 < *param_3) {
      uVar4 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),0xd);
    }
    else {
      uVar4 = (ulonglong)*(ushort *)(local_res10[0] + -2 + (longlong)*param_3 * 2);
    }
    FUN_00414480(param_1);
    while( true ) {
      sVar3 = (short)uVar4;
      if (((sVar3 == 0x20) || (sVar3 == 9)) || (sVar3 == 0x22)) {
        bVar1 = false;
      }
      else {
        iVar2 = 0;
        if (local_res10[0] != 0) {
          iVar2 = *(int *)(local_res10[0] + -4);
        }
        bVar1 = *param_3 <= iVar2;
      }
      if (!bVar1) break;
      FUN_00416780(local_20,uVar4 & 0xffffffff);
      FUN_00416ad0(param_1,local_20[0]);
      *param_3 = *param_3 + 1;
      iVar2 = 0;
      if (local_res10[0] != 0) {
        iVar2 = *(int *)(local_res10[0] + -4);
      }
      if (iVar2 < *param_3) {
        uVar4 = CONCAT62((int6)(uVar4 >> 0x10),0xd);
      }
      else {
        uVar4 = (ulonglong)*(ushort *)(local_res10[0] + -2 + (longlong)*param_3 * 2);
      }
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return param_1;
}

