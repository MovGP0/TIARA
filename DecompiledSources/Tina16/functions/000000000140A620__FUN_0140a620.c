/* Ghidra address: 0140a620 */
/* Ghidra symbol: FUN_0140a620 */


uint FUN_0140a620(uint param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  cVar1 = FUN_0140a5c0(param_1,0);
  if (cVar1 == '\0') {
    uVar2 = param_1 >> 1;
  }
  else {
    uVar2 = FUN_0140a5b0(param_2 + -1);
    uVar2 = param_1 >> 1 | uVar2;
  }
  iVar3 = FUN_0140a5b0(param_2);
  return uVar2 & iVar3 - 1U;
}

