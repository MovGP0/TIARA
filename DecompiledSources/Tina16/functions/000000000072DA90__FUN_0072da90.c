/* Ghidra address: 0072da90 */
/* Ghidra symbol: FUN_0072da90 */


void FUN_0072da90(undefined8 param_1,int param_2,undefined1 *param_3)

{
  code *pcVar1;
  
  if (param_2 == -1) {
    *param_3 = 0;
    pcVar1 = (code *)FUN_00411550(param_1,0xffffffe9);
    (*pcVar1)(param_1);
  }
  return;
}

