/* Ghidra address: 00622160 */
/* Ghidra symbol: FUN_00622160 */


void FUN_00622160(longlong *param_1)

{
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  else {
    (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1]);
  }
  return;
}

