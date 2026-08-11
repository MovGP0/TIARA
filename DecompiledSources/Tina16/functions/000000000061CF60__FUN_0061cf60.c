/* Ghidra address: 0061cf60 */
/* Ghidra symbol: FUN_0061cf60 */


void FUN_0061cf60(longlong *param_1,longlong param_2,undefined4 param_3)

{
  FUN_005b4720(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == param_1[0x1a])) {
    (**(code **)(*param_1 + 0x98))(param_1,0);
  }
  return;
}

