/* Ghidra address: 01cbfc40 */
/* Ghidra symbol: FUN_01cbfc40 */


void FUN_01cbfc40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (local_res10[0] != 0) {
    uVar1 = FUN_00416740(local_res10[0]);
    uVar1 = FUN_00442bd0(uVar1);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  FUN_00414480(local_res10);
  return;
}

