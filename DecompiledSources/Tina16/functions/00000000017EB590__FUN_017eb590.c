/* Ghidra address: 017eb590 */
/* Ghidra symbol: FUN_017eb590 */


void FUN_017eb590(longlong param_1,int param_2)

{
  if ((param_2 == 0) || (param_2 == 1)) {
    FUN_00b90440(*(undefined8 *)(param_1 + 0x710),0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x718),0x3ef4f8b588e368f0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),&DAT_017eb6fc);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),&DAT_017eb70c);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),&DAT_017eb71c);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x700),&DAT_017eb72c);
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0x720),100);
  }
  else if ((param_2 == 2) || ((param_2 == 3 || (param_2 == 5)))) {
    FUN_00b90440(*(undefined8 *)(param_1 + 0x710),0x40c3880000000000);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x718),0x412e848000000000);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),&DAT_017eb740);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),L"dB|deg");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),&DAT_017eb6fc);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x700),&DAT_017eb72c);
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0x720),100);
  }
  return;
}

