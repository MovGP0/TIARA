/* Ghidra address: 01aa3d90 */
/* Ghidra symbol: FUN_01aa3d90 */


void FUN_01aa3d90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  piVar1 = (int *)(param_1 + 0x28);
  (**(code **)(**(longlong **)(param_1 + 0x550) + 0x288))(*(longlong **)(param_1 + 0x550),&local_20)
  ;
  if (*piVar1 < 0x50) {
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(param_1 + 0x20 + (longlong)*piVar1 * 0x10) = param_2;
    *(undefined8 *)(piVar1 + (longlong)*piVar1 * 4) = param_3;
  }
  else {
    FUN_00416cd0(local_30,4,L"Event overflow on (",local_20,&DAT_01aa3ec8,L", simulation aborted!");
    FUN_016fd940(local_30[0]);
    DAT_02110a55 = 1;
  }
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

