/* Ghidra address: 01ceca50 */
/* Ghidra symbol: FUN_01ceca50 */


void FUN_01ceca50(longlong param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  bool bVar12;
  int local_6c;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  uVar5 = FUN_0069e8a0();
  if (param_2 <= param_3) {
    iVar11 = (param_3 - param_2) + 1;
    local_6c = param_2;
    do {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),local_6c + -1);
      lVar7 = FUN_004113f0(uVar6,&PTR_FUN_01ac9770);
      lVar8 = FUN_0069e8a0();
      plVar9 = (longlong *)FUN_006d6380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_40,local_6c + -1);
      FUN_00414ad0(lVar8 + 0x30,local_40);
      if (*(longlong *)PTR_DAT_02002660 != 0) {
        FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02002660 + 0x6c8),
                     *(undefined8 *)(lVar7 + 0x68));
      }
      local_38 = *(undefined8 *)(lVar7 + 0xa0);
      uStack_30 = *(undefined8 *)(lVar7 + 0xa8);
      uVar6 = FUN_0069e8a0();
      uVar6 = FUN_0069db00(uVar6);
      local_48 = FUN_00498310(0,0);
      FUN_01ace140(lVar7,*(undefined8 *)PTR_DAT_02001e00,uVar6,&local_48);
      uVar1 = *(undefined1 *)(lVar7 + 0xb0);
      *PTR_DAT_02002df8 = 1;
      *(undefined1 *)(lVar7 + 0xb0) = 2;
      uVar6 = *(undefined8 *)PTR_DAT_02001598;
      uVar10 = FUN_0069e8a0();
      uVar10 = FUN_0069db00(uVar10);
      *(undefined8 *)PTR_DAT_02001598 = uVar10;
      cVar2 = FUN_0069ddc0(uVar5);
      if (cVar2 == '\0') {
        uVar3 = FUN_0069df40(uVar5);
        uVar4 = FUN_0069df10(uVar5);
        FUN_00498350(local_58,0,0,uVar3,uVar4);
        FUN_01acf9e0(lVar7,local_58);
      }
      else {
        uVar3 = FUN_0069df40(uVar5);
        uVar4 = FUN_0069df10(uVar5);
        FUN_00498350(local_58,0,0,uVar3,uVar4);
        FUN_01acf9e0(lVar7,local_58);
      }
      FUN_01acfc60(lVar7);
      FUN_01aceb90(lVar7,0);
      *PTR_DAT_02002df8 = 0;
      *(undefined1 *)(lVar7 + 0xb0) = uVar1;
      *(undefined8 *)PTR_DAT_02001598 = uVar6;
      *(undefined4 *)(lVar7 + 0x104) = 0;
      *(undefined4 *)(lVar7 + 0x100) = 0;
      local_48 = FUN_00498310(0,0);
      FUN_01ace140(lVar7,*(undefined8 *)PTR_DAT_02001e00,
                   *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),&local_48);
      FUN_01acf9e0(lVar7,&local_38);
      if (*(char *)(lVar7 + 0x108) == '\0') {
LAB_01cecd07:
        FUN_01acfc60(lVar7);
      }
      else {
        if (*(byte *)(lVar7 + 0xb0) < 8) {
          bVar12 = ((int)CONCAT71((int7)((ulonglong)lVar7 >> 8),1) <<
                    (*(byte *)(lVar7 + 0xb0) & 0x1f) & 1U) != 0;
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) goto LAB_01cecd07;
        FUN_01acfa60(lVar7);
      }
      if (local_6c < param_3) {
        FUN_0069d690(uVar5);
      }
      local_6c = local_6c + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  FUN_00414480(&local_40);
  return;
}

