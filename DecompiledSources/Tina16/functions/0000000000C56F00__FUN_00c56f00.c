/* Ghidra address: 00c56f00 */
/* Ghidra symbol: FUN_00c56f00 */


int FUN_00c56f00(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x98) + -1;
  if ((param_2 <= iVar1) && (iVar1 = param_2, param_2 < 0)) {
    iVar1 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x9c) + -1;
  if ((param_3 <= iVar2) && (iVar2 = param_3, param_3 < 0)) {
    iVar2 = 0;
  }
  return (iVar2 / *(int *)(param_1 + 0x500)) * *(int *)(param_1 + 0x504) +
         iVar1 / *(int *)(param_1 + 0x4fc);
}

