/* Ghidra address: 01be6660 */
/* Ghidra symbol: FUN_01be6660 */


void FUN_01be6660(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (param_1[0xce] != 0) {
    return;
  }
  lVar6 = (**(code **)(*param_1 + 0x430))(param_1);
  lVar6 = (**(code **)(lVar6 + 0x78))(lVar6,1,param_1);
  param_1[0xce] = lVar6;
  plVar2 = (longlong *)param_1[0xce];
  FUN_0064c650(plVar2,6);
  *(undefined1 *)((longlong)plVar2 + 0x38c) = 1;
  (**(code **)(*plVar2 + 0x130))(plVar2,param_1);
  FUN_01bd41a0(plVar2,2);
  FUN_0041ddd0(plVar2 + 0x1e,PTR_PTR_02002768);
  FUN_01bd41d0(plVar2,1);
  FUN_01bd4200(plVar2,3);
  cVar3 = FUN_01bfab60(param_1[0x93]);
  if (cVar3 != '\0') {
    bVar1 = *(byte *)(param_1[0x93] + 0x28);
    if (bVar1 < 8) {
      uVar4 = (int)CONCAT71((int7)((ulonglong)param_1[0x93] >> 8),1) << (bVar1 & 0x1f);
      bVar8 = (uVar4 & 0x18) != 0;
      uVar7 = (ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar8);
    }
    else {
      uVar7 = 0;
      bVar8 = false;
    }
    if (!bVar8) {
      uVar5 = (undefined4)CONCAT71((int7)(uVar7 >> 8),1);
      goto LAB_01be6731;
    }
  }
  uVar5 = 0;
LAB_01be6731:
  FUN_01c060c0(plVar2,uVar5);
  plVar2[0x70] = (longlong)param_1;
  plVar2[0x6f] = (longlong)FUN_01be6060;
  return;
}

