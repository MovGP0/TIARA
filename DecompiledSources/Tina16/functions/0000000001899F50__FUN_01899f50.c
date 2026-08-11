/* Ghidra address: 01899f50 */
/* Ghidra symbol: FUN_01899f50 */


void FUN_01899f50(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_01899bf0(param_1);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x4c0) != 0)) {
    param_5 = *(int *)(*(longlong *)(lVar1 + 0x4c0) + 0x90) + 8;
    param_4 = param_5;
  }
  if ((*(char *)(param_1 + 800) == '\x03') && (param_4 <= param_5)) {
    param_4 = param_4 + 0x10;
  }
  FUN_0064c7e0(param_1,param_2,param_3,param_4,param_5);
  return;
}

