/* Ghidra address: 00b3f100 */
/* Ghidra symbol: FUN_00b3f100 */


ulonglong FUN_00b3f100(longlong param_1,int param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 0;
  pbVar3 = param_3;
  do {
    *pbVar3 = (byte)iVar1;
    iVar1 = iVar1 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar1 != 0x100);
  param_3[0x100] = 0;
  param_3[0x101] = 0;
  iVar4 = 0;
  iVar1 = 0;
  iVar5 = 0x100;
  pbVar3 = param_3;
  do {
    iVar1 = (int)((uint)*(byte *)(param_1 + iVar4) + (uint)*pbVar3 + iVar1) % 0x100;
    FUN_00b3f0c0(pbVar3,param_3 + iVar1);
    iVar2 = iVar4 + 1;
    iVar4 = iVar2 % param_2;
    pbVar3 = pbVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return (longlong)iVar2 / (longlong)param_2 & 0xffffffff;
}

