/* Ghidra address: 01336180 */
/* Ghidra symbol: FUN_01336180 */


void FUN_01336180(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 == 0) {
    lVar1 = (longlong)param_3;
    FUN_01337730(param_1,param_3,*(char *)(*(longlong *)(param_1 + 0x708) + lVar1) == '\0');
    *(bool *)(*(longlong *)(param_1 + 0x708) + lVar1) =
         *(char *)(*(longlong *)(param_1 + 0x708) + lVar1) == '\0';
    *(int *)(param_1 + 0x710) = param_3;
  }
  return;
}

