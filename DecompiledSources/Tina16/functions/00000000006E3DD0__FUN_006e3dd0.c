/* Ghidra address: 006e3dd0 */
/* Ghidra symbol: FUN_006e3dd0 */


void FUN_006e3dd0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x698) != 0) {
    (**(code **)(param_1 + 0x698))(*(undefined8 *)(param_1 + 0x6a0),param_1,param_2);
  }
  return;
}

