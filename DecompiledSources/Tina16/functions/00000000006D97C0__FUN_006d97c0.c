/* Ghidra address: 006d97c0 */
/* Ghidra symbol: FUN_006d97c0 */


void FUN_006d97c0(longlong *param_1)

{
  code *pcVar1;
  
  if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffce);
    (*pcVar1)(param_1);
  }
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

