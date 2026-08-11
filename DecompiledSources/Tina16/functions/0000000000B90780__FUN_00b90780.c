/* Ghidra address: 00b90780 */
/* Ghidra symbol: FUN_00b90780 */


undefined8 FUN_00b90780(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610();
  bVar1 = 0;
  do {
    bVar1 = bVar1 + 1;
    iVar3 = 0;
    if (local_res10[0] != 0) {
      iVar3 = *(int *)(local_res10[0] + -4);
    }
  } while (((int)(uint)bVar1 <= iVar3) &&
          (*(short *)(local_res10[0] + -2 + (ulonglong)bVar1 * 2) == 0x20));
  if (1 < bVar1) {
    FUN_00416e20(local_res10,1,bVar1 - 1);
  }
  cVar2 = FUN_004170c0(&LAB_00b90864,local_res10[0],1);
  if (cVar2 != '\0') {
    uVar4 = 0;
    if (local_res10[0] != 0) {
      uVar4 = *(undefined4 *)(local_res10[0] + -4);
    }
    FUN_00416e20(local_res10,cVar2,uVar4);
  }
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

