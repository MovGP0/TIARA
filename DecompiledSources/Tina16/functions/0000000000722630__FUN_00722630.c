/* Ghidra address: 00722630 */
/* Ghidra symbol: FUN_00722630 */


void FUN_00722630(longlong *param_1,int *param_2)

{
  code *pcVar1;
  
  if (*param_2 == 0x4ca) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffef);
    (*pcVar1)(param_1);
  }
  else {
    (**(code **)(*param_1 + -0x40))(param_1);
  }
  return;
}

