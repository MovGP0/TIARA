/* Ghidra address: 00611260 */
/* Ghidra symbol: FUN_00611260 */


void FUN_00611260(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (((char)param_3 == '\x01') && (*(longlong *)(param_1 + 0x78) != 0)) {
    (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 0x80),param_1,param_2);
  }
  FUN_004d2dc0(param_1,param_2,param_3);
  return;
}

