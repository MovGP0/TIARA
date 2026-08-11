/* Ghidra address: 00684ef0 */
/* Ghidra symbol: FUN_00684ef0 */


void FUN_00684ef0(longlong param_1)

{
  code *pcVar1;
  
  if (*(longlong *)(param_1 + 0x4b8) == 0) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar1)(param_1);
  }
  else {
    (**(code **)(param_1 + 0x4b8))(*(undefined8 *)(param_1 + 0x4c0),param_1);
  }
  return;
}

