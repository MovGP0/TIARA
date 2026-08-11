/* Ghidra address: 01b387d0 */
/* Ghidra symbol: FUN_01b387d0 */


undefined8 * FUN_01b387d0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = 0;
  if (local_res10[0] != 0) {
    iVar1 = *(int *)(local_res10[0] + -4);
  }
  for (; (*(short *)(local_res10[0] + -2 + (longlong)iVar1 * 2) != 0x28 && (0 < iVar1));
      iVar1 = iVar1 + -1) {
  }
  if (iVar1 < 1) {
    FUN_00414ad0(param_1,local_res10[0]);
  }
  else {
    FUN_00416dc0(param_1,local_res10[0],1,iVar1 + -1);
  }
  FUN_00b90680(&local_10,*param_1);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return param_1;
}

