/* Ghidra address: 01b388b0 */
/* Ghidra symbol: FUN_01b388b0 */


void FUN_01b388b0(longlong *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  FUN_00414480(&local_20);
  iVar3 = 0;
  if (*param_1 != 0) {
    iVar3 = *(int *)(*param_1 + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      sVar1 = *(short *)(*param_1 + -2 + (longlong)iVar2 * 2);
      if (sVar1 != 0x20) {
        FUN_00416780(local_30,sVar1);
        FUN_00416ad0(&local_20,local_30[0]);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414ad0(param_1,local_20);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

