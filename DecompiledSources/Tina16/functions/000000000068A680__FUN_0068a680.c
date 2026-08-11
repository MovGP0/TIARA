/* Ghidra address: 0068a680 */
/* Ghidra symbol: FUN_0068a680 */


void FUN_0068a680(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(short *)(param_2 + 10) == 0) {
    (**(code **)(*param_1 + 0x268))(param_1,1);
  }
  else if (*(short *)(param_2 + 10) == 5) {
    pcVar1 = (code *)FUN_00411550(param_1,0xe9);
    (*pcVar1)(param_1);
  }
  return;
}

