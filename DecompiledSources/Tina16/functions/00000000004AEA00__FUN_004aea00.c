/* Ghidra address: 004aea00 */
/* Ghidra symbol: FUN_004aea00 */


void FUN_004aea00(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 2) <= param_2)) {
    FUN_004ae960(*param_1,PTR_PTR_02004940,(longlong)param_2);
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 2) <= param_3)) {
    FUN_004ae960(*param_1,PTR_PTR_02004940,(longlong)param_3);
  }
  uVar1 = *(undefined8 *)(param_1[1] + (longlong)param_2 * 8);
  *(undefined8 *)(param_1[1] + (longlong)param_2 * 8) =
       *(undefined8 *)(param_1[1] + (longlong)param_3 * 8);
  *(undefined8 *)(param_1[1] + (longlong)param_3 * 8) = uVar1;
  return;
}

