/* Ghidra address: 01a3c820 */
/* Ghidra symbol: FUN_01a3c820 */


undefined8 FUN_01a3c820(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610();
  iVar3 = 0;
  if (local_res10[0] != 0) {
    iVar3 = *(int *)(local_res10[0] + -4);
  }
  iVar2 = 0;
  iVar1 = iVar3;
  if (0 < iVar3) {
    do {
      iVar2 = iVar1;
      if (*(short *)(local_res10[0] + -2 + (longlong)iVar2 * 2) == 0x20) break;
      iVar1 = iVar2 + -1;
      iVar2 = 0;
    } while (iVar1 != 0);
  }
  if (0 < iVar2) {
    FUN_00416dc0(local_res10,local_res10[0],iVar2 + 1,iVar3);
  }
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

