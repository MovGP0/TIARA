/* Ghidra address: 004c2f90 */
/* Ghidra symbol: FUN_004c2f90 */


void FUN_004c2f90(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 0x98),param_1,param_2,param_3);
  }
  (**(code **)(*param_2 + 0x50))(param_2,*param_3);
  return;
}

