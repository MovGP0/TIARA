/* Ghidra address: 01a83d70 */
/* Ghidra symbol: FUN_01a83d70 */


void FUN_01a83d70(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  int local_48;
  int local_44;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  FUN_01aee720(local_40,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFSetGridColorMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_40[0]);
  plVar6 = (longlong *)FUN_00724d70(&PTR_FUN_0071a4d0,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined1 *)(plVar6 + 0xf) = 1;
  cVar3 = (**(code **)(*plVar6 + 0xa8))(plVar6);
  if (cVar3 == '\0') goto LAB_01a83f18;
  lVar1 = *(longlong *)(param_1 + 0x7a0);
  iVar4 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x28))();
  local_48 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = *(longlong **)(lVar1 + 0x10);
      lVar7 = (**(code **)(*plVar2 + 0x30))(plVar2,local_48);
      *(undefined4 *)(lVar7 + 0x100) = 0;
      *(undefined4 *)(lVar7 + 0x104) = 0;
      iVar5 = (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x28))();
      local_44 = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar8 = (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x30))
                            (*(longlong **)(lVar7 + 0xd8),local_44);
          *(int *)(lVar8 + 0xa8) = (int)plVar6[0x1a];
          local_44 = local_44 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_48 = local_48 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  lVar1 = *(longlong *)(param_1 + 0x798);
  if (*(char *)(lVar1 + 0x108) == '\0') {
LAB_01a83f06:
    FUN_01acfc60(lVar1);
  }
  else {
    if (*(byte *)(lVar1 + 0xb0) < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(lVar1 + 0xb0) & 0x1f)
              & 1U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (!bVar9) goto LAB_01a83f06;
    FUN_01acfa60(lVar1);
  }
  FUN_01aceb90(lVar1,1);
LAB_01a83f18:
  FUN_00410f20(plVar6);
  FUN_00414480(local_40);
  return;
}

