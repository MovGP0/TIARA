/* Ghidra address: 00b79a80 */
/* Ghidra symbol: FUN_00b79a80 */


void FUN_00b79a80(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = *param_1 & uVar1 >> 1;
  uVar2 = uVar2 & uVar2 >> 2;
  uVar2 = uVar2 & uVar2 >> 4;
  *param_2 = uVar2 & uVar2 >> 1 & uVar2 >> 2;
  uVar3 = ~*param_1;
  uVar2 = uVar3 & uVar3 >> 1;
  uVar2 = uVar2 & uVar2 >> 2;
  uVar2 = uVar2 & uVar2 >> 4;
  uVar2 = uVar2 & uVar2 >> 1 & uVar2 >> 2 | *param_2;
  *param_2 = uVar2 * 2 | uVar2 * 4 | uVar2 * 8 | uVar2 << 4 | uVar2 << 5 | uVar2 << 6 | uVar2 << 7 |
             uVar2 << 8;
  *param_2 = (*param_2 | uVar2 | uVar2 << 9) & (~*param_1 ^ *param_1 * 2) & (uVar3 ^ uVar1 >> 1);
  *param_2 = *param_2 & 0xfffffffc;
  return;
}

