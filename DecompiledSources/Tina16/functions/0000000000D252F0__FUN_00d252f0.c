/* Ghidra address: 00d252f0 */
/* Ghidra symbol: FUN_00d252f0 */


void FUN_00d252f0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  
  pbVar3 = *(byte **)(param_1 + 0x68);
  bVar4 = *pbVar3;
  bVar5 = pbVar3[4];
  iVar8 = *(int *)(pbVar3 + 0xc);
  cVar7 = ' ';
  do {
    iVar1 = *(int *)(pbVar3 + (ulonglong)bVar5 * 4 + 0x210);
    bVar5 = bVar5 + (char)iVar8;
    uVar6 = (uint)bVar4;
    iVar2 = *(int *)(pbVar3 + (ulonglong)bVar5 * 4 + 0x210);
    bVar4 = bVar4 + 1;
    iVar8 = iVar2 + *(int *)(pbVar3 + (longlong)(int)(uVar6 - 0x80) * 4 + 0x210);
    *(int *)(pbVar3 + (ulonglong)bVar5 * 4 + 0x210) = iVar8;
    bVar5 = bVar5 + (char)iVar2;
    *param_2 = *param_2 - (iVar1 + iVar2);
    param_2 = param_2 + 1;
    cVar7 = cVar7 + -1;
  } while (cVar7 != '\0');
  return;
}

