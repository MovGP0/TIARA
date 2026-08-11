/* Ghidra address: 00683790 */
/* Ghidra symbol: FUN_00683790 */


void FUN_00683790(longlong *param_1,uint param_2)

{
  char cVar1;
  
  FUN_00411a80(param_1,param_2);
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x1f0))(param_1);
  }
  FUN_004d62f0(param_1[0xa6]);
  FUN_004d62f0(param_1[0xa5]);
  FUN_00410f20(param_1[0x92]);
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

