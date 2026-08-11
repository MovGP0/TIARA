/* Ghidra address: 01059b00 */
/* Ghidra symbol: FUN_01059b00 */


ulonglong FUN_01059b00(ulonglong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(short *)*param_1 != 0x22) {
    FUN_00416ba0(param_1,&LAB_01059be0,*param_1);
  }
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 - 4);
  }
  if (*(short *)((*param_1 - 2) + (longlong)iVar1 * 2) != 0x22) {
    FUN_00416ad0(param_1,&LAB_01059be0);
  }
  uVar2 = 0;
  if (*param_1 != 0) {
    uVar2 = (ulonglong)*(uint *)(*param_1 - 4);
  }
  if (2 < (int)uVar2) {
    if ((*(short *)*param_1 == 0x22) && (*(short *)(*param_1 + 2) == 0x22)) {
      FUN_00416e20(param_1,1,1);
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      uVar2 = (ulonglong)*(uint *)(*param_1 - 4);
    }
  }
  iVar1 = (int)uVar2;
  if (2 < iVar1) {
    if ((*(short *)((*param_1 - 2) + (longlong)iVar1 * 2) == 0x22) &&
       (*(short *)((*param_1 - 2) + (longlong)(iVar1 + -1) * 2) == 0x22)) {
      FUN_00416e20(param_1,uVar2,1);
    }
    uVar2 = *param_1;
  }
  return uVar2;
}

