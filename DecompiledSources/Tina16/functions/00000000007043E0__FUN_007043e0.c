/* Ghidra address: 007043e0 */
/* Ghidra symbol: FUN_007043e0 */


void FUN_007043e0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(param_1[0x9e]);
  lVar1 = param_1[0xac];
  param_1[0xac] = 0;
  FUN_00410f20(lVar1);
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x1f0))(param_1);
  }
  FUN_004d62f0(param_1[0xab]);
  lVar1 = param_1[0xae];
  param_1[0xae] = 0;
  FUN_00410f20(lVar1);
  FUN_0041b800(param_1 + 0xa7);
  FUN_00683790(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

