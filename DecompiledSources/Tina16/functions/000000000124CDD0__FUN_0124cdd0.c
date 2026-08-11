/* Ghidra address: 0124cdd0 */
/* Ghidra symbol: FUN_0124cdd0 */


int FUN_0124cdd0(undefined8 param_1,longlong param_2)

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
  iVar1 = 0;
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    do {
      if (*(short *)(local_res10[0] + -2 + (longlong)iVar1 * 2) == 0x2c) {
        local_c = local_c + 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_res10,(longlong)local_c % 2 & 0xffffffff);
  return local_c / 2;
}

