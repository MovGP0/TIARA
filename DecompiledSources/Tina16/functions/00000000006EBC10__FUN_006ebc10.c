/* Ghidra address: 006ebc10 */
/* Ghidra symbol: FUN_006ebc10 */


void FUN_006ebc10(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if (*(short *)(param_2 + 8) == 4) {
    if (*(int *)((longlong)param_1 + 0x4b4) < (int)*(short *)(param_2 + 10)) {
      pcVar1 = (code *)FUN_00411550(param_1,0xffab);
      (*pcVar1)(param_1,0);
    }
    else if ((int)*(short *)(param_2 + 10) < *(int *)((longlong)param_1 + 0x4b4)) {
      pcVar1 = (code *)FUN_00411550(param_1,0xffab);
      (*pcVar1)(param_1,1);
    }
    *(int *)((longlong)param_1 + 0x4b4) = (int)*(short *)(param_2 + 10);
  }
  return;
}

