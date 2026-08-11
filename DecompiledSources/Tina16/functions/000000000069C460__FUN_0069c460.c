/* Ghidra address: 0069c460 */
/* Ghidra symbol: FUN_0069c460 */


void FUN_0069c460(undefined4 *param_1)

{
  ushort uVar1;
  undefined1 auStack_38 [40];
  
  *param_1 = 0;
  if (param_1[4] == 0) {
    uVar1 = FUN_0069c420(auStack_38);
    param_1[1] = param_1[1] + (uint)uVar1;
  }
  else {
    param_1[1] = param_1[1] + param_1[4];
  }
  if (param_1[3] + param_1[4] * -2 < (int)param_1[1]) {
    FUN_0069c3f0(param_1);
  }
  param_1[4] = 0;
  return;
}

