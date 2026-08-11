/* Ghidra address: 01663140 */
/* Ghidra symbol: FUN_01663140 */


void FUN_01663140(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 local_30 [2];
  
  param_2 = param_2 + (param_3 << 3);
  for (; 0 < param_4; param_4 = param_4 + -1) {
    FUN_00409a70(param_2,local_30,8);
    iVar1 = FUN_0165d6d0(param_1,local_30[0]);
    if (iVar1 != -1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 8 + (longlong)iVar1 * 0x10) = 1;
    }
    param_2 = param_2 + 8;
  }
  return;
}

