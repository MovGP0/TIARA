/* Ghidra address: 009dfc70 */
/* Ghidra symbol: FUN_009dfc70 */


undefined8 FUN_009dfc70(undefined8 param_1,longlong param_2,short param_3,undefined2 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = 0;
  if (local_res10[0] != 0) {
    iVar3 = *(int *)(local_res10[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      if (*(short *)(local_res10[0] + -2 + (longlong)iVar2 * 2) == param_3) {
        lVar1 = FUN_00414de0(local_res10);
        *(undefined2 *)(lVar1 + -2 + (longlong)iVar2 * 2) = param_4;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

