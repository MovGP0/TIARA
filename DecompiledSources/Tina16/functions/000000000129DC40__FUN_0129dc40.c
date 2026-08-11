/* Ghidra address: 0129dc40 */
/* Ghidra symbol: FUN_0129dc40 */


void FUN_0129dc40(undefined8 *param_1,double param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [35];
  byte local_85;
  undefined8 local_84;
  double local_7c;
  double local_74;
  double local_6c;
  double local_58;
  int local_4c;
  
  pbVar6 = &local_85;
  for (lVar3 = 5; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pbVar6 = *param_1;
    param_1 = param_1 + 1;
    pbVar6 = pbVar6 + 8;
  }
  *(undefined4 *)pbVar6 = *(undefined4 *)param_1;
  pbVar6[4] = *(byte *)((longlong)param_1 + 4);
  dVar7 = (double)FUN_00c42750((double)(int)-(uint)(byte)*PTR_DAT_02005310);
  iVar4 = 1 << (local_85 & 0x1f);
  dVar8 = local_7c - local_84;
  local_4c = FUN_0040c840(local_74 * dVar8);
  iVar1 = FUN_0040c840((local_6c * dVar8 - dVar7) + 1.0);
  iVar1 = (iVar1 - local_4c) + 1;
  if (iVar4 / 2 < iVar1) {
    iVar1 = iVar4 / 2;
  }
  local_58 = 1.0 / ((double)iVar4 * (dVar8 / (double)iVar4));
  iVar4 = FUN_0040c840(param_2 * dVar8,(longlong)iVar4 % 2 & 0xffffffff);
  iVar4 = iVar4 - local_4c;
  iVar2 = FUN_0040c840(param_2 * dVar8 + 1.0);
  if (iVar1 + -1 < iVar2) {
    iVar2 = iVar1 + -1;
  }
  do {
    uVar5 = (uint)(iVar4 + iVar2) >> 1;
    dVar7 = (double)FUN_0129dc10(auStack_a8,uVar5);
    if (dVar7 < 0.0) {
      iVar2 = uVar5 - 1;
    }
    else {
      iVar4 = uVar5 + 1;
    }
  } while (iVar4 <= iVar2);
  FUN_0129dbf0(auStack_a8,(uint)(iVar4 + iVar2) >> 1);
  return;
}

