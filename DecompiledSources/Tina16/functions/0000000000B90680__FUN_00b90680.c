/* Ghidra address: 00b90680 */
/* Ghidra symbol: FUN_00b90680 */


undefined8 FUN_00b90680(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar4;
  int iVar5;
  longlong local_res10 [3];
  ulonglong uVar3;
  
  local_res10[0] = param_2;
  FUN_00414610();
  uVar3 = 0;
  do {
    bVar1 = (char)uVar3 + 1;
    uVar3 = (ulonglong)bVar1;
    iVar5 = 0;
    if (local_res10[0] != 0) {
      iVar5 = *(int *)(local_res10[0] + -4);
    }
  } while (((int)(uint)bVar1 <= iVar5) && (*(short *)(local_res10[0] + -2 + uVar3 * 2) == 0x20));
  if (1 < bVar1) {
    FUN_00416e20(local_res10,1,bVar1 - 1);
  }
  uVar4 = 0;
  uVar3 = uVar4;
  if (local_res10[0] != 0) {
    uVar4 = (ulonglong)*(uint *)(local_res10[0] + -4);
    uVar3 = uVar4;
  }
  while ((cVar2 = (char)uVar4, cVar2 != '\0' &&
         (*(short *)(local_res10[0] + -2 + (uVar4 & 0xff) * 2) == 0x20))) {
    uVar4 = (ulonglong)(byte)(cVar2 - 1);
  }
  if ((cVar2 != (char)uVar3) && (cVar2 != '\0')) {
    FUN_00416e20(local_res10,((uint)uVar4 & 0xff) + 1,((uint)uVar3 & 0xff) - ((uint)uVar4 & 0xff));
  }
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

