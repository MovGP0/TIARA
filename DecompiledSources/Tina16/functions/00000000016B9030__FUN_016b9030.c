/* Ghidra address: 016b9030 */
/* Ghidra symbol: FUN_016b9030 */


undefined8 FUN_016b9030(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong local_res10 [3];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  int iVar2;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  uStack_28 = param_3[2];
  uStack_20 = param_3[3];
  local_res10[0] = param_2;
  FUN_00414630();
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
    iVar3 = 0;
    if (local_res10[0] != 0) {
      iVar3 = *(int *)(local_res10[0] + -4);
    }
  } while ((iVar1 <= iVar3) && (*(char *)(local_res10[0] + -1 + (longlong)iVar1) == ' '));
  if (1 < iVar1) {
    FUN_00415b50(local_res10,1,iVar2);
  }
  iVar1 = 1;
  while (uVar5 = (ulonglong)*(byte *)(local_res10[0] + -1 + (longlong)iVar1),
        (*(byte *)((longlong)&local_38 + ((longlong)uVar5 >> 3)) >> (uVar5 & 7) & 1) != 0) {
    iVar1 = iVar1 + 1;
  }
  uVar4 = 0;
  if (local_res10[0] != 0) {
    uVar4 = *(undefined4 *)(local_res10[0] + -4);
  }
  FUN_00415b50(local_res10,iVar1,uVar4);
  FUN_00414bf0(param_1,local_res10[0]);
  FUN_004144d0(local_res10);
  return param_1;
}

