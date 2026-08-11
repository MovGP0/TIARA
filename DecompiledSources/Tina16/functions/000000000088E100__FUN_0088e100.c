/* Ghidra address: 0088e100 */
/* Ghidra symbol: FUN_0088e100 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088e100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  _DAT_01e219f0 = FUN_00883390(param_1,L"GetAcceptExSockaddrs",&DAT_01e21614);
  PTR_FUN_01e219e8 = (undefined *)FUN_00883390(param_1,L"AcceptEx",&DAT_01e215e4);
  (*(code *)PTR_FUN_01e219e8)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

