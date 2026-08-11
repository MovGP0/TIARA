/* Ghidra address: 01c28a80 */
/* Ghidra symbol: FUN_01c28a80 */


undefined8 FUN_01c28a80(undefined8 param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480();
  iVar2 = 1;
  while( true ) {
    iVar3 = 0;
    if (local_res10[0] != 0) {
      iVar3 = *(int *)(local_res10[0] + -4);
    }
    if ((iVar3 < iVar2) ||
       ((sVar1 = *(short *)(local_res10[0] + -2 + (longlong)iVar2 * 2), sVar1 != 0x20 &&
        (sVar1 != 9)))) break;
    iVar2 = iVar2 + 1;
  }
  iVar3 = 0;
  if (local_res10[0] != 0) {
    iVar3 = *(int *)(local_res10[0] + -4);
  }
  if (iVar2 <= iVar3) {
    FUN_00416780(param_1,*(undefined2 *)(local_res10[0] + -2 + (longlong)iVar2 * 2));
  }
  FUN_00414480(local_res10);
  return param_1;
}

