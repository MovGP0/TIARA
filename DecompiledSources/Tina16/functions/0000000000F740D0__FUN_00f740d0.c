/* Ghidra address: 00f740d0 */
/* Ghidra symbol: FUN_00f740d0 */


void FUN_00f740d0(longlong *param_1,undefined8 param_2)

{
  FUN_00f6fbc0(param_1,param_2);
  FUN_004b84c0(param_2,param_1 + 0x24,4);
  FUN_004b84c0(param_2,param_1 + 0x25,1);
  FUN_00f60970(param_2,param_1 + 0x22,(int)param_1[1]);
  FUN_00f60970(param_2,param_1 + 0x23,(int)param_1[1]);
  if (0x65 < DAT_0202eed4) {
    FUN_004b84c0(param_2,(longlong)param_1 + 0x124,4);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}

