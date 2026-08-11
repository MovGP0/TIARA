/* Ghidra address: 006ebce0 */
/* Ghidra symbol: FUN_006ebce0 */


void FUN_006ebce0(longlong *param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if (*(short *)(param_2 + 8) == 4) {
    iVar1 = (int)*(short *)(param_2 + 10);
    if (*(int *)((longlong)param_1 + 0x4b4) < (int)*(short *)(param_2 + 10)) {
      *(int *)((longlong)param_1 + 0x4b4) = iVar1;
      pcVar2 = (code *)FUN_00411550(param_1,0xffab);
      (*pcVar2)(param_1,0);
    }
    else if (iVar1 < *(int *)((longlong)param_1 + 0x4b4)) {
      *(int *)((longlong)param_1 + 0x4b4) = iVar1;
      pcVar2 = (code *)FUN_00411550(param_1,0xffab);
      (*pcVar2)(param_1,1);
    }
  }
  return;
}

