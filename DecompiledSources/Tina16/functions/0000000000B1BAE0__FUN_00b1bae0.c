/* Ghidra address: 00b1bae0 */
/* Ghidra symbol: FUN_00b1bae0 */


void FUN_00b1bae0(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = (byte)(param_2 >> 8);
  iVar1 = (param_2 >> 0x10 & 0xff) - (param_3 >> 0x10 & 0xff);
  uVar2 = param_3 >> 8 & 0xff;
  FUN_0040c760((double)(int)(iVar1 * iVar1 + (bVar3 - uVar2) * (bVar3 - uVar2) +
                            ((param_2 & 0xff) - (param_3 & 0xff)) *
                            ((param_2 & 0xff) - (param_3 & 0xff))));
  FUN_0040c770();
  return;
}

