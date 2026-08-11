/* Ghidra address: 0140a5e0 */
/* Ghidra symbol: FUN_0140a5e0 */


uint FUN_0140a5e0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 * 2;
  cVar1 = FUN_0140a5c0(uVar3,param_2);
  if (cVar1 != '\0') {
    uVar3 = uVar3 | 1;
  }
  iVar2 = FUN_0140a5b0(param_2);
  return uVar3 & iVar2 - 1U;
}

