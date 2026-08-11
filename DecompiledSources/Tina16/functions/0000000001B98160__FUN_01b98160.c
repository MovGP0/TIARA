/* Ghidra address: 01b98160 */
/* Ghidra symbol: FUN_01b98160 */


void FUN_01b98160(longlong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined8 unaff_RSI;
  undefined7 uVar10;
  bool bVar11;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  lVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
  if (lVar5 != 0) {
    uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
    cVar1 = FUN_01b96a50(param_1,uVar6);
    if (cVar1 != '\0') {
      if (param_2 == *(longlong *)(param_1 + 0x7c0)) {
        uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
        cVar1 = FUN_01b95130(uVar6);
        if (cVar1 != '\0') goto LAB_01b9842d;
        bVar11 = true;
      }
      else {
        sVar2 = thunk_FUN_03cbc5c8(0x10);
        bVar11 = ((longlong)sVar2 & 0xfffeU) != 0;
      }
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x810),0);
      uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
      cVar1 = FUN_01b95130(uVar6);
      uVar10 = (undefined7)((ulonglong)unaff_RSI >> 8);
      if (cVar1 == '\0') {
        if (bVar11) {
          uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
          FUN_01b96a50(param_1,uVar6);
          lVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
          FUN_00414b50(&local_20,**(undefined8 **)(lVar5 + 0x18));
          lVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
          FUN_00414b50(&local_28,*(undefined8 *)(*(longlong *)(lVar5 + 0x18) + 8));
          lVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
          uVar9 = (uint)*(byte *)(*(longlong *)(lVar5 + 0x18) + 0x10);
        }
        else {
          FUN_00414b50(&local_20,DAT_02110dc8);
          FUN_00414b50(&local_28,local_20);
          uVar9 = (uint)CONCAT71(uVar10,1);
        }
        uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
        uVar6 = FUN_006dd390(uVar6);
      }
      else {
        FUN_00414b50(&local_20,DAT_02110dc8);
        FUN_00414b50(&local_28,local_20);
        uVar9 = (uint)CONCAT71(uVar10,1);
        uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
      }
      FUN_01b1cbc0(&local_30,local_20,1);
      uVar7 = FUN_01b95080(local_20,local_28,uVar9);
      lVar5 = FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),uVar6,local_30,
                           uVar7);
      FUN_01b1cbc0(&local_38,local_20,5);
      uVar3 = FUN_00c85dd0(*(undefined8 *)PTR_DAT_02002c40,local_38,*PTR_DAT_02002480,0);
      FUN_006dcbd0(lVar5,uVar3);
      if (-1 < *(int *)(lVar5 + 0x28)) {
        FUN_006dcca0(lVar5,*(int *)(lVar5 + 0x28));
      }
      uVar3 = FUN_006dd6f0(lVar5);
      FUN_01b97960(param_1,uVar3);
      iVar4 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
      if (-1 < iVar4) {
        plVar8 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
        uVar3 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
        (**(code **)(*plVar8 + 0x48))(plVar8,uVar3,1);
      }
    }
  }
LAB_01b9842d:
  FUN_00414560(&local_38,4);
  return;
}

