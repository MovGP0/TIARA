/* Ghidra address: 0139ca60 */
/* Ghidra symbol: FUN_0139ca60 */


uint FUN_0139ca60(undefined2 param_1,int param_2,int param_3,ushort param_4,undefined2 *param_5,
                 int param_6,undefined8 param_7)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  uint unaff_EBX;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_1078 [4088];
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  longlong alStack_58 [2];
  ushort auStack_48 [2];
  int local_44;
  int local_40;
  byte local_39;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar9 = ((longlong)param_6 + 1) * 2 + 0xfU & 0xfffffffffffffff0;
  uVar14 = -uVar9;
  uVar4 = uVar14 & 0xfff;
  local_44 = param_2;
  local_40 = param_3;
  auStack_48[1] = param_4;
  while ((longlong)uVar14 < (longlong)uVar4) {
    auStack_1078[uVar4] = (char)(uVar4 - 0x1000);
    uVar4 = uVar4 - 0x1000;
  }
  lVar3 = -uVar9;
  puVar10 = (undefined2 *)((longlong)auStack_48 + lVar3);
  puVar11 = puVar10;
  for (lVar8 = (longlong)param_6 + 1; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *param_5;
    param_5 = param_5 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar6 = *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 7000);
  *(undefined8 *)((longlong)&uStack_80 + lVar3) = 0x139cb06;
  cVar5 = FUN_004113d0(uVar6,&PTR_FUN_0135f8e0);
  if (cVar5 != '\0') {
    local_2c = local_44;
    local_30 = local_40;
    *(undefined8 *)((longlong)&uStack_80 + lVar3) = 0x139cb27;
    FUN_01b1cd00(&local_2c,&local_30);
    uVar6 = *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
    *(undefined8 *)((longlong)&uStack_80 + lVar3) = 0x139cb3d;
    uVar6 = FUN_0198d430(uVar6);
    iVar13 = local_2c;
    iVar12 = local_30;
    *(int **)((longlong)alStack_58 + lVar3) = &local_30;
    *(undefined8 *)((longlong)&uStack_80 + lVar3) = 0x139cb59;
    FUN_01a98380(uVar6,iVar13,iVar12,&local_2c);
    iVar13 = local_2c;
    iVar12 = local_30;
    plVar1 = *(longlong **)(*(longlong *)PTR_DAT_02004e40 + 7000);
    pcVar2 = *(code **)(*plVar1 + 0x58);
    *(undefined8 *)((longlong)&uStack_80 + lVar3) = 0x139cb83;
    (*pcVar2)(plVar1,0,iVar13,iVar12);
    *(undefined8 *)((longlong)alStack_58 + lVar3) = 0;
    *(undefined8 *)((longlong)&uStack_80 + lVar3) = 0x139cba8;
    local_39 = FUN_0139d910(param_1,param_7,&local_34,&local_38);
    if ((local_39 != 0) && ((local_34 != 0 || (local_38 != 0)))) {
      plVar1 = *(longlong **)(*(longlong *)PTR_DAT_02004e40 + 7000);
      iVar12 = local_2c + local_34;
      iVar13 = local_30 + local_38;
      pcVar2 = *(code **)(*plVar1 + 0x58);
      *(undefined8 *)((longlong)&uStack_80 + lVar3) = 0x139cbf2;
      (*pcVar2)(plVar1,0,iVar12,iVar13);
    }
    iVar13 = local_2c;
    iVar12 = local_30;
    if (local_39 != 0) {
      plVar1 = *(longlong **)(*(longlong *)PTR_DAT_02004e40 + 7000);
      pcVar2 = *(code **)(*plVar1 + 8);
      *(undefined8 *)((longlong)&uStack_80 + lVar3) = 0x139cc20;
      (*pcVar2)(plVar1,iVar13,iVar12);
      *(undefined8 *)((longlong)&uStack_80 + lVar3) = 0x139cc36;
      FUN_01994230();
      lVar7 = 0;
      lVar8 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
      iVar12 = *(int *)(lVar8 + 0x10);
      iVar13 = 0;
      if (-1 < iVar12 + -1) {
        do {
          *(undefined8 *)((longlong)&uStack_80 + lVar3) = 0x139cc6b;
          uVar6 = FUN_00b94e60(lVar8,iVar13);
          *(undefined8 *)((longlong)&uStack_80 + lVar3) = 0x139cc76;
          cVar5 = FUN_0139ca00(auStack_78,uVar6);
          if (cVar5 != '\0') {
            *(undefined8 *)((longlong)&uStack_80 + lVar3) = 0x139cc84;
            lVar7 = FUN_00b94e60(lVar8,iVar13);
            break;
          }
          iVar13 = iVar13 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      if (lVar7 != 0) {
        *(undefined1 *)(lVar7 + 0x3d3) = 1;
        iVar12 = 0;
        do {
          if (iVar12 < (int)(uint)auStack_48[1]) {
            *(undefined2 *)(lVar7 + 0x26 + (longlong)iVar12 * 2) = *puVar10;
          }
          else {
            *(undefined2 *)(lVar7 + 0x26 + (longlong)iVar12 * 2) = 0xffff;
          }
          iVar12 = iVar12 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar12 != 0x15);
      }
    }
    unaff_EBX = (uint)local_39;
  }
  return unaff_EBX;
}

