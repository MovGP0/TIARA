/* Ghidra address: 012a4bc0 */
/* Ghidra symbol: FUN_012a4bc0 */


void FUN_012a4bc0(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  if ((int)(param_2 & 0xff) < iVar1) {
    FUN_010dbd40(param_1,param_2);
  }
  return;
}

