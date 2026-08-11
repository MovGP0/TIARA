/* Ghidra address: 01cc3760 */
/* Ghidra symbol: FUN_01cc3760 */


void FUN_01cc3760(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (local_res10[0] != 0) {
    uVar1 = FUN_00416740(local_res10[0]);
    uVar1 = FUN_00442bd0(uVar1);
    *(undefined8 *)(param_1 + 0x458) = uVar1;
  }
  FUN_00414480(local_res10);
  return;
}

