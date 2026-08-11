/* Ghidra address: 016b8f10 */
/* Ghidra symbol: FUN_016b8f10 */


undefined8 FUN_016b8f10(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414630();
  bVar1 = 0;
  do {
    bVar1 = bVar1 + 1;
    iVar3 = 0;
    if (local_res10[0] != 0) {
      iVar3 = *(int *)(local_res10[0] + -4);
    }
  } while (((int)(uint)bVar1 <= iVar3) && (*(char *)(local_res10[0] + -1 + (ulonglong)bVar1) == ' ')
          );
  if (1 < bVar1) {
    FUN_00415b50(local_res10,1,bVar1 - 1);
  }
  FUN_00416880(&local_10,local_res10[0]);
  cVar2 = FUN_004170c0(&LAB_016b9024,local_10,1);
  if (cVar2 != '\0') {
    uVar4 = 0;
    if (local_res10[0] != 0) {
      uVar4 = *(undefined4 *)(local_res10[0] + -4);
    }
    FUN_00415b50(local_res10,cVar2,uVar4);
  }
  FUN_00414bf0(param_1,local_res10[0]);
  FUN_00414480(&local_10);
  FUN_004144d0(local_res10);
  return param_1;
}

