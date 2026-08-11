/* Ghidra address: 01d779a0 */
/* Ghidra symbol: FUN_01d779a0 */


int FUN_01d779a0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong local_res10 [3];
  int local_c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = 0;
  local_c = 0;
  if (local_res10[0] != 0) {
    iVar2 = *(int *)(local_res10[0] + -4);
  }
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      if (*(short *)(local_res10[0] + -2 + (longlong)iVar1 * 2) == 0x5c) {
        local_c = local_c + 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_res10);
  return local_c;
}

