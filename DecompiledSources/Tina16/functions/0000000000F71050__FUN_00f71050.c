/* Ghidra address: 00f71050 */
/* Ghidra symbol: FUN_00f71050 */


void FUN_00f71050(longlong *param_1,undefined8 param_2)

{
  FUN_00f6fbc0(param_1,param_2);
  FUN_004b84c0(param_2,param_1 + 0x24,4);
  FUN_004b84c0(param_2,(longlong)param_1 + 0x124,1);
  FUN_00f60970(param_2,param_1 + 0x22,(int)param_1[1]);
  if (0x66 < DAT_0202eed4) {
    FUN_00f60970(param_2,param_1 + 0x23,(int)param_1[1]);
    FUN_004b84c0(param_2,(longlong)param_1 + 0x126,1);
  }
  if ((0x6c < DAT_0202eed4) && ((char)param_1[6] == '\x01')) {
    FUN_004b84c0(param_2,(longlong)param_1 + 0x125,1);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}

