/* Ghidra address: 00af5b20 */
/* Ghidra symbol: FUN_00af5b20 */


void FUN_00af5b20(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00af2f30(param_1);
  if (cVar1 == '\0') {
    FUN_00a77790(param_1,param_2);
    if (param_1[0x116] != 0) {
      *(undefined4 *)(param_1[0x116] + 0x168) = param_2;
    }
    if (param_1[0xe8] != 0) {
      FUN_0064e030(param_1[0xe8],param_2);
    }
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

