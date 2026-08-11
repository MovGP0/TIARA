/* Ghidra address: 00b233a0 */
/* Ghidra symbol: FUN_00b233a0 */


void FUN_00b233a0(undefined1 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_0040d200(param_1 + 9,200,0);
  uVar2 = 0;
  if (DAT_01e83d18 != 0) {
    uVar2 = *(uint *)(DAT_01e83d18 + -4) >> 1;
  }
  uVar1 = FUN_00415f70(DAT_01e83d18);
  FUN_00409a70(uVar1,param_1 + 9,(longlong)(int)(uVar2 * 2));
  param_1[6] = 0x39;
  *(undefined2 *)(param_1 + 7) = 10;
  return;
}

