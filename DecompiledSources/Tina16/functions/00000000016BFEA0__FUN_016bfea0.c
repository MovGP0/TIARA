/* Ghidra address: 016bfea0 */
/* Ghidra symbol: FUN_016bfea0 */


undefined8
FUN_016bfea0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
            byte *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte local_138 [264];
  
  lVar3 = (ulonglong)*param_5 + 1;
  pbVar5 = local_138;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar5 = *param_5;
    param_5 = param_5 + 1;
    pbVar5 = pbVar5 + 1;
  }
  cVar1 = *(char *)(param_1 + 0x46f);
  bVar4 = 1;
  while( true ) {
    cVar1 = cVar1 + -1;
    if (cVar1 == '\0') {
      return 0;
    }
    uVar6 = (ulonglong)bVar4;
    iVar2 = FUN_00414f50(*(longlong *)(param_1 + 0x460) + -0x200 + uVar6 * 0x204,local_138,
                         (ulonglong)
                         *(byte *)(*(longlong *)(param_1 + 0x460) + -0x200 + uVar6 * 0x204) + 1);
    if (iVar2 == 0) break;
    bVar4 = bVar4 + 1;
  }
  *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x460) + -0x204 + uVar6 * 0x204);
  FUN_00415020(param_3,*(longlong *)(param_1 + 0x460) + -0x100 + uVar6 * 0x204,param_4);
  *(char *)(param_1 + 0x46f) = *(char *)(param_1 + 0x46f) + -1;
  if (bVar4 < *(byte *)(param_1 + 0x46f)) {
    FUN_00409a70(*(longlong *)(param_1 + 0x460) + -0x204 + (ulonglong)(bVar4 + 1) * 0x204,
                 *(longlong *)(param_1 + 0x460) + -0x204 + uVar6 * 0x204,
                 (longlong)(int)(((uint)*(byte *)(param_1 + 0x46f) - (uint)bVar4) * 0x204));
  }
  return 1;
}

