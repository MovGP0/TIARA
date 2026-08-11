/* Ghidra address: 00b67e70 */
/* Ghidra symbol: FUN_00b67e70 */


void FUN_00b67e70(undefined8 param_1)

{
  ushort *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined *puVar6;
  int iVar7;
  longlong local_30;
  
  local_30 = 0;
  iVar7 = 6;
  pbVar5 = &DAT_01e887f4;
  puVar6 = PTR_DAT_02001370;
  do {
    FUN_00415d10(&local_30,4,0);
    puVar1 = (ushort *)FUN_00414df0(&local_30);
    *puVar1 = *pbVar5 | 0x8000;
    lVar2 = FUN_00414df0(&local_30);
    *(undefined *)(lVar2 + 2) = *puVar6;
    lVar2 = FUN_00414df0(&local_30);
    *(undefined1 *)(lVar2 + 3) = 0xff;
    FUN_00b62ce0(param_1,0x293);
    uVar4 = 0;
    if (local_30 != 0) {
      uVar4 = *(undefined4 *)(local_30 + -4);
    }
    FUN_00b62ce0(param_1,uVar4);
    uVar3 = FUN_00414df0(&local_30);
    FUN_00b62d20(param_1,uVar3);
    puVar6 = puVar6 + 1;
    pbVar5 = pbVar5 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_004144d0(&local_30);
  return;
}

