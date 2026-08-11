/* Ghidra address: 004aed30 */
/* Ghidra symbol: FUN_004aed30 */


void FUN_004aed30(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_2 != param_3) {
    if ((param_3 < 0) || (*(int *)(param_1 + 2) <= param_3)) {
      FUN_004ae960(*param_1,PTR_PTR_02004940,(longlong)param_3);
    }
    uVar1 = FUN_004aeac0(param_1,param_2);
    *(undefined8 *)(param_1[1] + (longlong)param_2 * 8) = 0;
    FUN_004ae870(param_1,param_2);
    FUN_004aec30(param_1,param_3,0);
    *(undefined8 *)(param_1[1] + (longlong)param_3 * 8) = uVar1;
  }
  return;
}

