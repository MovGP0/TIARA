/* Ghidra address: 0067fec0 */
/* Ghidra symbol: FUN_0067fec0 */


void FUN_0067fec0(longlong *param_1,char param_2)

{
  code *pcVar1;
  
  if (*(char *)((longlong)param_1 + 0x33d) != param_2) {
    *(char *)((longlong)param_1 + 0x33d) = param_2;
    pcVar1 = (code *)FUN_00411550(param_1,0xffc4);
    (*pcVar1)(param_1);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

