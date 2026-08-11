/* Ghidra address: 01b15870 */
/* Ghidra symbol: FUN_01b15870 */


void FUN_01b15870(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1,param_2,param_3);
  }
  return;
}

