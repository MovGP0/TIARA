/* Ghidra address: 01d34a80 */
/* Ghidra symbol: FUN_01d34a80 */


void FUN_01d34a80(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) || (param_3 < 0)) ||
     (*(int *)(param_1 + 0x10) <= param_3)) {
    FUN_01d34ef0(param_1);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8) =
       *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_3 * 8);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_3 * 8) = uVar1;
  return;
}

