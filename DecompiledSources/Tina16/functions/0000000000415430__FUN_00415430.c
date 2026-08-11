/* Ghidra address: 00415430 */
/* Ghidra symbol: FUN_00415430 */


void FUN_00415430(undefined8 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  iVar1 = 0;
  if (param_2 != (char *)0x0) {
    for (; *param_2 != '\0'; param_2 = param_2 + 1) {
    }
    iVar1 = (int)param_2 - iVar2;
  }
  FUN_004147f0(param_1,iVar2,iVar1,param_3);
  return;
}

