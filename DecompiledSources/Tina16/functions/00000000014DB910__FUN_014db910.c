/* Ghidra address: 014db910 */
/* Ghidra symbol: FUN_014db910 */


bool FUN_014db910(byte *param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined1 auStack_158 [40];
  longlong local_130;
  byte local_128 [256];
  
  lVar3 = (ulonglong)*param_1 + 1;
  pbVar5 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar5 = *param_1;
    param_1 = param_1 + 1;
    pbVar5 = pbVar5 + 1;
  }
  lVar3 = 0;
  iVar4 = 0;
  iVar6 = *(int *)(param_2 + 0x10);
  local_130 = param_2;
  if (-1 < iVar6 + -1) {
    do {
      uVar2 = FUN_01d347d0(local_130,iVar4);
      cVar1 = FUN_014db770(auStack_158,uVar2);
      if (cVar1 != '\0') {
        lVar3 = FUN_01d347d0(local_130,iVar4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *param_3 = lVar3;
  return *param_3 != 0;
}

