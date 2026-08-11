/* Ghidra address: 00692650 */
/* Ghidra symbol: FUN_00692650 */


void FUN_00692650(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_006926b0(param_1);
  }
  *(int *)(param_1 + 0x88) = param_2;
  if (param_2 < 4) {
    thunk_FUN_04176ccd(*(undefined8 *)(param_1 + 0x68),1,300,0);
  }
  else {
    thunk_FUN_04176ccd(*(undefined8 *)(param_1 + 0x68),1,0x32,0);
  }
  return;
}

