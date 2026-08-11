/* Ghidra address: 006dbf60 */
/* Ghidra symbol: FUN_006dbf60 */


void FUN_006dbf60(longlong *param_1,longlong param_2,undefined4 param_3)

{
  FUN_00654ca0(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == param_1[0x99])) {
    (**(code **)(*param_1 + 0x270))(param_1,0);
  }
  return;
}

