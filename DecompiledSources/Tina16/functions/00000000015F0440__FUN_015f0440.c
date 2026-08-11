/* Ghidra address: 015f0440 */
/* Ghidra symbol: FUN_015f0440 */


undefined8 FUN_015f0440(undefined8 param_1,longlong param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  longlong local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = 0;
  if (local_res10[0] != 0) {
    iVar3 = *(int *)(local_res10[0] + -4);
  }
  if (0 < iVar3) {
    iVar3 = 0;
    if (local_res10[0] != 0) {
      iVar3 = *(int *)(local_res10[0] + -4);
    }
    if (iVar3 < *param_3) {
      uVar4 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),0xd);
    }
    else {
      uVar4 = (ulonglong)*(ushort *)(local_res10[0] + -2 + (longlong)*param_3 * 2);
    }
    FUN_00414480(param_1);
LAB_015f04fd:
    cVar2 = FUN_00c535d0(uVar4 & 0xffffffff);
    if (cVar2 == '\0') {
      cVar2 = FUN_00c53600(uVar4 & 0xffffffff);
      if (cVar2 != '\0') goto LAB_015f0513;
      bVar1 = false;
    }
    else {
LAB_015f0513:
      iVar3 = 0;
      if (local_res10[0] != 0) {
        iVar3 = *(int *)(local_res10[0] + -4);
      }
      bVar1 = *param_3 <= iVar3;
    }
    if (bVar1) {
      FUN_00416780(local_20,uVar4 & 0xffffffff);
      FUN_00416ad0(param_1,local_20[0]);
      *param_3 = *param_3 + 1;
      iVar3 = 0;
      if (local_res10[0] != 0) {
        iVar3 = *(int *)(local_res10[0] + -4);
      }
      if (iVar3 < *param_3) {
        uVar4 = CONCAT62((int6)(uVar4 >> 0x10),0xd);
      }
      else {
        uVar4 = (ulonglong)*(ushort *)(local_res10[0] + -2 + (longlong)*param_3 * 2);
      }
      goto LAB_015f04fd;
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return param_1;
}

