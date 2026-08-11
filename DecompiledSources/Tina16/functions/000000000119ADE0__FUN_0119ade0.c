/* Ghidra address: 0119ade0 */
/* Ghidra symbol: FUN_0119ade0 */


void FUN_0119ade0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0119a520(param_1,param_2);
  iVar2 = 0;
  if (-1 < param_1) {
    iVar4 = param_1 + 1;
    do {
      iVar3 = FUN_0119a520(param_1 - param_2,iVar2);
      if (0x230 < iVar1 * iVar3) {
        FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,0x881,0x882,1);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

