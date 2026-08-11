/* Ghidra address: 00a32f10 */
/* Ghidra symbol: FUN_00a32f10 */


uint FUN_00a32f10(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = (param_2 & 0xff) - (param_3 & 0xff);
  uVar4 = (int)uVar1 >> 0x1f;
  iVar2 = (uVar1 ^ uVar4) - uVar4;
  uVar1 = (param_1 & 0xff) - (param_3 & 0xff);
  uVar4 = (int)uVar1 >> 0x1f;
  iVar3 = (uVar1 ^ uVar4) - uVar4;
  uVar1 = (param_1 & 0xff) + (param_2 & 0xff) + (param_3 & 0xff) * -2;
  uVar4 = (int)uVar1 >> 0x1f;
  iVar5 = (uVar1 ^ uVar4) - uVar4;
  if (((iVar3 < iVar2) || (iVar5 < iVar2)) && (param_1 = param_3, iVar3 <= iVar5)) {
    param_1 = param_2;
  }
  return param_1;
}

