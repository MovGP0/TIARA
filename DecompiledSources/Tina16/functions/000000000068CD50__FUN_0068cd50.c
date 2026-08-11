/* Ghidra address: 0068cd50 */
/* Ghidra symbol: FUN_0068cd50 */


void FUN_0068cd50(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (*(short *)(param_2 + 10) == 1) {
    FUN_0064d480(param_1);
    if (*(char *)((longlong)param_1 + 0x499) == '\0') {
      pcVar2 = (code *)FUN_00411550(param_1,0xffea);
      (*pcVar2)(param_1);
    }
    uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db5e0(uVar1);
  }
  else if (*(short *)(param_2 + 10) == 2) {
    pcVar2 = (code *)FUN_00411550(param_1,0xffe9);
    (*pcVar2)(param_1);
  }
  return;
}

