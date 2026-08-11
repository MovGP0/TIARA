/* Ghidra address: 00546240 */
/* Ghidra symbol: FUN_00546240 */


undefined8 FUN_00546240(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_00419430(param_2,&DAT_0052f588);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))(*(longlong **)(param_1 + 0x28),param_2);
  }
  return param_2;
}

