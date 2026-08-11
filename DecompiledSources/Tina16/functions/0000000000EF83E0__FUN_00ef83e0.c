/* Ghidra address: 00ef83e0 */
/* Ghidra symbol: FUN_00ef83e0 */


ulonglong FUN_00ef83e0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  byte local_68 [72];
  
  pbVar7 = local_68;
  for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pbVar7 = *param_2;
    param_2 = param_2 + 1;
    pbVar7 = (byte *)((longlong)pbVar7 + 8);
  }
  bVar5 = 0;
  uVar2 = (uint)*(byte *)(param_1 + 0x6f);
  do {
    iVar3 = 0;
    pbVar7 = local_68;
    uVar6 = uVar2;
    if (uVar2 - 1 < 0x80000000) {
      do {
        bVar1 = *pbVar7;
        if (local_68[iVar3 + 1] < bVar1) {
          *pbVar7 = local_68[iVar3 + 1];
          local_68[iVar3 + 1] = bVar1;
          bVar5 = bVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        uVar6 = uVar6 - 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar6 != 0);
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0xffffffff);
  return (ulonglong)bVar5 % 2;
}

