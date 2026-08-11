/* Ghidra address: 014c4290 */
/* Ghidra symbol: FUN_014c4290 */


void FUN_014c4290(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_014c4160(param_1);
  if (cVar1 != '\0') {
    FUN_00416ba0(local_20,*(undefined8 *)(param_1 + 8),L"ultsc.php?");
    FUN_014c39c0(param_1,local_20[0],local_res10[0],0x2800);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),0);
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

