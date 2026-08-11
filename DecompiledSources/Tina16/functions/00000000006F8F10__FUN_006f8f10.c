/* Ghidra address: 006f8f10 */
/* Ghidra symbol: FUN_006f8f10 */


void FUN_006f8f10(longlong param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_006f7390(param_1,param_4,param_5);
  if ((lVar1 != 0) || (*(char *)(param_1 + 0x4e8) == '\0')) {
    FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

