/* Ghidra address: 018910f0 */
/* Ghidra symbol: FUN_018910f0 */


uint FUN_018910f0(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((int)param_1 < 0) {
    param_1 = thunk_FUN_041cde23(param_1 & 0xff);
  }
  if ((int)param_2 < 0) {
    param_2 = thunk_FUN_041cde23(param_2 & 0xff);
  }
  if (param_3 < 100) {
    uVar2 = 100;
  }
  else {
    uVar2 = 1000;
  }
  iVar1 = uVar2 - param_3;
  uVar3 = uVar2 / 2;
  return ((int)((param_1 >> 0x10) * param_3 + (param_2 >> 0x10) * iVar1 + uVar3) / (int)uVar2 &
         0xffU) << 0x10 |
         ((int)((param_1 >> 8 & 0xff) * param_3 + (param_2 >> 8 & 0xff) * iVar1 + uVar3) /
          (int)uVar2 & 0xffU) << 8 |
         (int)((param_1 & 0xff) * param_3 + (param_2 & 0xff) * iVar1 + uVar3) / (int)uVar2 & 0xffU;
}

