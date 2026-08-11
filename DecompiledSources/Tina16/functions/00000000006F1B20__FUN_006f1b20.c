/* Ghidra address: 006f1b20 */
/* Ghidra symbol: FUN_006f1b20 */


void FUN_006f1b20(longlong *param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  
  FUN_00411a80(param_1,param_2);
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x1f0))(param_1);
  }
  FUN_00410f20(param_1[0x9a]);
  FUN_00410f20(param_1[0xa0]);
  FUN_00410f20(param_1[0xb2]);
  FUN_00410f20(param_1[0xee]);
  FUN_00410f20(param_1[0x9c]);
  FUN_00410f20(param_1[0x9e]);
  FUN_00410f20(param_1[0xa1]);
  FUN_00410f20(param_1[0xa3]);
  FUN_00410f20(param_1[0xa4]);
  FUN_00410f20(param_1[0xb3]);
  FUN_004d62f0(param_1[0xf0]);
  if (param_1[0xa8] != 0) {
    thunk_FUN_03c9d277(param_1[0xa8],0xfffffffc,param_1[0xa6]);
  }
  FUN_004d62f0(param_1[0xf1]);
  lVar1 = param_1[0xad];
  param_1[0xad] = 0;
  FUN_00410f20(lVar1);
  lVar1 = param_1[0xae];
  param_1[0xae] = 0;
  FUN_00410f20(lVar1);
  lVar1 = param_1[0xb0];
  param_1[0xb0] = 0;
  FUN_00410f20(lVar1);
  lVar1 = param_1[0xaf];
  param_1[0xaf] = 0;
  FUN_00410f20(lVar1);
  FUN_00410f20(param_1[0x93]);
  param_1[0x93] = 0;
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

