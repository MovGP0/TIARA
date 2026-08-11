/* Ghidra address: 0112dd70 */
/* Ghidra symbol: FUN_0112dd70 */


uint FUN_0112dd70(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0x666666U + param_2 + *param_3;
  uVar1 = ~(uVar2 ^ param_1 + 0x666666U ^ param_2) & 0x1111110;
  uVar2 = uVar2 - (uVar1 >> 2 | uVar1 >> 3);
  *param_3 = uVar2 >> 0x18;
  return uVar2 & 0xffffff;
}

