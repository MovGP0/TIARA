/* Ghidra address: 00bf2d90 */
/* Ghidra symbol: FUN_00bf2d90 */


void FUN_00bf2d90(undefined8 param_1,longlong param_2,int param_3,int param_4,longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  if ((param_3 <= iVar2) && (0 < param_4)) {
    lVar1 = FUN_00416740(param_2);
    iVar2 = iVar2 - (param_3 + -1);
    if (param_4 <= iVar2) {
      iVar2 = param_4;
    }
    FUN_00409a70(lVar1 + (longlong)(param_3 + -1) * 2,*param_5,(longlong)(iVar2 * 2));
    *param_5 = *param_5 + (longlong)iVar2 * 2;
    *(undefined2 *)*param_5 = 0;
  }
  return;
}

