/* Ghidra address: 01cc9e60 */
/* Ghidra symbol: FUN_01cc9e60 */


void FUN_01cc9e60(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x90))(*(longlong **)(param_1 + 0x90));
  if (local_res10[0] != 0) {
    iVar1 = 0;
    if (local_res10[0] != 0) {
      iVar1 = *(int *)(local_res10[0] + -4);
    }
    if (*(short *)(local_res10[0] + -2 + (longlong)iVar1 * 2) == 0x2c) {
      FUN_00416e20(local_res10,iVar1,1);
    }
    FUN_004b4b10(*(undefined8 *)(param_1 + 0x90),local_res10[0]);
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

