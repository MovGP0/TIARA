/* Ghidra address: 00848570 */
/* Ghidra symbol: FUN_00848570 */


void FUN_00848570(longlong *param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (param_1[0xa5] != 0) {
    FUN_0083da60(param_1 + 0xa5,0,0);
  }
  *(undefined4 *)(param_1 + 0x96) = param_2;
  pcVar1 = (code *)FUN_00411550(param_1,0xff9d);
  (*pcVar1)(param_1);
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

