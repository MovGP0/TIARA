/* Ghidra address: 00c36440 */
/* Ghidra symbol: FUN_00c36440 */


void FUN_00c36440(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x70) == 0) {
    if (param_3 == '\x02') {
      FUN_00c1a320(param_4);
    }
  }
  else {
    (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x78));
  }
  return;
}

