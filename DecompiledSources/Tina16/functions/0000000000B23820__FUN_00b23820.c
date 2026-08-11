/* Ghidra address: 00b23820 */
/* Ghidra symbol: FUN_00b23820 */


void FUN_00b23820(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  FUN_0040d200(param_1 + 9,200,0);
  uVar2 = 0;
  if (local_res10[0] != 0) {
    uVar2 = *(uint *)(local_res10[0] + -4) >> 1;
  }
  uVar1 = FUN_00415f70(local_res10[0]);
  FUN_00409a70(uVar1,param_1 + 9,(longlong)(int)(uVar2 * 2));
  FUN_00414520(local_res10);
  return;
}

