/* Ghidra address: 01ad7f60 */
/* Ghidra symbol: FUN_01ad7f60 */


void FUN_01ad7f60(longlong param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined **ppuVar12;
  bool bVar13;
  longlong local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  cVar2 = FUN_01acff30(param_1,local_30);
  if (cVar2 == '\0') {
    cVar3 = '\0';
  }
  else {
    uVar8 = FUN_004aeac0(local_30[0],0);
    cVar3 = FUN_01ad1090(param_1,uVar8,&local_38);
  }
  ppuVar12 = &PTR_FUN_01ae9d80;
  plVar7 = (longlong *)FUN_004113f0(*(undefined8 *)(param_1 + 0x78),&PTR_FUN_01ae9d80);
  if (cVar2 == '\x01') {
    (**(code **)(*plVar7 + 0x388))(plVar7);
    if (cVar3 == '\0') {
      FUN_00410f20(local_30[0]);
      return;
    }
    uVar8 = FUN_004aeac0(local_30[0],0);
    uVar8 = FUN_01cd6670(uVar8);
    if ((byte)uVar8 < 8) {
      bVar13 = ((int)CONCAT71((int7)((ulonglong)uVar8 >> 8),1) << ((byte)uVar8 & 0x1f) & 0x51U) != 0
      ;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      plVar9 = *(longlong **)(local_38 + 0x70);
    }
    else {
      plVar9 = *(longlong **)(local_38 + 0x78);
    }
    iVar4 = (**(code **)(*plVar9 + 0x28))(plVar9);
    if (iVar4 < 2) {
      FUN_007e2da0(plVar7[0xdc],0);
    }
    else {
      FUN_007e2da0(plVar7[0xdc],1);
    }
    FUN_007e2da0(plVar7[0xe5],1);
    goto LAB_01ad84de;
  }
  if (cVar2 == '\x02') {
    (**(code **)(*plVar7 + 0x380))(plVar7);
    if (cVar3 == '\0') {
      FUN_00410f20(local_30[0]);
      return;
    }
    bVar1 = *(byte *)(local_38 + 0x58);
    if (bVar1 < 8) {
      bVar13 = ((int)CONCAT71((int7)((ulonglong)ppuVar12 >> 8),1) << (bVar1 & 0x1f) & 1U) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      iVar4 = (**(code **)(**(longlong **)(local_38 + 0x70) + 0x28))
                        (*(longlong **)(local_38 + 0x70));
      if ((iVar4 < 3) &&
         (lVar10 = FUN_004aeac0(local_30[0],0),
         1 < *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0xf8) + 0xf8) + 0x10))) {
        FUN_007e2da0(plVar7[0xd8],1);
      }
      else {
        FUN_007e2da0(plVar7[0xd8],0);
      }
      lVar10 = FUN_004aeac0(local_30[0],0);
      if (*(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x100) + 0xf8) + 0x10) < 2) {
        FUN_007e2da0(plVar7[0xd9],0);
      }
      else {
        FUN_007e2da0(plVar7[0xd9],1);
      }
      lVar10 = FUN_004aeac0(local_30[0],0);
      if (*(char *)(*(longlong *)(*(longlong *)(lVar10 + 0xd0) + 8) + 0x434) == '\x03') {
        FUN_007e2da0(plVar7[0xe2],1);
        FUN_007e2da0(plVar7[0xe4],1);
      }
      else {
        FUN_007e2da0(plVar7[0xe2],0);
        FUN_007e2da0(plVar7[0xe4],0);
      }
      FUN_007e2da0(plVar7[0xe6],1);
      FUN_007e2da0(plVar7[0xe3],1);
      FUN_007e2da0(plVar7[0xda],1);
      lVar10 = FUN_004aeac0(local_30[0],0);
      FUN_007e2da0(plVar7[0xe7],
                   *(char *)(*(longlong *)(*(longlong *)(lVar10 + 0xd0) + 8) + 0x434) == '\x04');
      lVar10 = FUN_004aeac0(local_30[0],0);
      FUN_007e2da0(plVar7[0xe8],
                   *(char *)(*(longlong *)(*(longlong *)(lVar10 + 0xd0) + 8) + 0x434) == '\x04');
      lVar10 = FUN_004aeac0(local_30[0],0);
      FUN_007e2da0(plVar7[0xe9],
                   *(char *)(*(longlong *)(*(longlong *)(lVar10 + 0xd0) + 8) + 0x434) == '\x04');
    }
    else if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 0x60U) != 0) {
      FUN_007e2da0(plVar7[0xd8],0);
      FUN_007e2da0(plVar7[0xd9],0);
      FUN_007e2da0(plVar7[0xda],0);
      FUN_007e2da0(plVar7[0xe2],0);
      FUN_007e2da0(plVar7[0xe4],0);
      FUN_007e2da0(plVar7[0xe6],0);
      FUN_007e2da0(plVar7[0xe7],0);
      FUN_007e2da0(plVar7[0xe8],0);
      FUN_007e2da0(plVar7[0xe9],0);
      FUN_007e2da0(plVar7[0xe3],0);
    }
    else {
      iVar4 = (**(code **)(**(longlong **)(local_38 + 0x70) + 0x28))
                        (*(longlong **)(local_38 + 0x70));
      if ((iVar4 < 3) &&
         (lVar10 = FUN_004aeac0(local_30[0],0),
         1 < *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0xe8) + 0xf8) + 0x10))) {
        FUN_007e2da0(plVar7[0xd8],1);
      }
      else {
        FUN_007e2da0(plVar7[0xd8],0);
      }
      FUN_007e2da0(plVar7[0xd9],0);
      FUN_007e2da0(plVar7[0xda],0);
      FUN_007e2da0(plVar7[0xe2],0);
      FUN_007e2da0(plVar7[0xe4],0);
      FUN_007e2da0(plVar7[0xe6],0);
      FUN_007e2da0(plVar7[0xe7],0);
      FUN_007e2da0(plVar7[0xe8],0);
      FUN_007e2da0(plVar7[0xe9],0);
      FUN_007e2da0(plVar7[0xe3],0);
    }
    FUN_007e2da0(plVar7[0xe5],1);
    goto LAB_01ad84de;
  }
  if (cVar2 != '\x04') {
    if (cVar2 == '\b') {
      (**(code **)(*plVar7 + 0x3a0))(plVar7);
      FUN_007e2da0(plVar7[0xe5],1);
    }
    else {
      (**(code **)(*plVar7 + 0x398))(plVar7);
      FUN_007e2da0(plVar7[0xe5],0);
    }
    goto LAB_01ad84de;
  }
  (**(code **)(*plVar7 + 0x390))(plVar7);
  lVar10 = FUN_004aeac0(local_30[0],0);
  if ((*(longlong *)(lVar10 + 0x58) == 0) || (local_38 == 0)) {
LAB_01ad845c:
    uVar6 = 0;
  }
  else {
    if (*(byte *)(local_38 + 0x58) < 8) {
      uVar5 = (int)CONCAT71((int7)((ulonglong)local_38 >> 8),1) <<
              (*(byte *)(local_38 + 0x58) & 0x1f);
      bVar13 = (uVar5 & 0x60) != 0;
      uVar11 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar13);
    }
    else {
      uVar11 = 0;
      bVar13 = false;
    }
    if (bVar13) goto LAB_01ad845c;
    uVar6 = (undefined4)CONCAT71((int7)(uVar11 >> 8),1);
  }
  FUN_007e2da0(plVar7[0xdd],uVar6);
  lVar10 = FUN_004aeac0(local_30[0],0);
  FUN_007e2da0(plVar7[0xde],*(longlong *)(lVar10 + 0x58) != 0);
  FUN_007e2da0(plVar7[0xe5],0);
LAB_01ad84de:
  FUN_00410f20(local_30[0]);
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_007e2f80(plVar7[0xda],0);
    FUN_007e2f80(plVar7[0xe2],0);
    FUN_007e2f80(plVar7[0xe4],0);
    FUN_007e2f80(plVar7[0xe6],0);
  }
  return;
}

