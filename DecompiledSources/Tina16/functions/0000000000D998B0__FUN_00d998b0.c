/* Ghidra address: 00d998b0 */
/* Ghidra symbol: FUN_00d998b0 */


void FUN_00d998b0(longlong param_1,char param_2,undefined8 *param_3)

{
  if (param_2 == '\0') {
    (**(code **)(param_1 + 0x20))(param_1,param_3);
  }
  else if (param_2 == '\x01') {
    (**(code **)(param_1 + 0x28))(param_1,*param_3,param_3[1]);
  }
  return;
}

