/* Ghidra address: 01c662e0 */
/* Ghidra symbol: FUN_01c662e0 */


void FUN_01c662e0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 local_140 [256];
  undefined8 local_40 [2];
  
  lVar2 = DAT_035667e0;
  local_40[0] = 0;
  iVar9 = -1;
  bVar1 = false;
  do {
    iVar9 = iVar9 + 1;
    if (iVar9 < *(int *)(lVar2 + 0x10)) {
      uVar7 = FUN_00b94e60(lVar2,iVar9);
      cVar4 = FUN_01c66290(uVar7);
      if (cVar4 != '\0') {
        plVar8 = (longlong *)FUN_00b94e60(lVar2,iVar9);
        uVar6 = (**(code **)(*plVar8 + 0x210))(plVar8,0);
        (**(code **)(*plVar8 + 0x288))(plVar8,local_40);
        FUN_00416910(local_140,local_40[0],0xff);
        FUN_00daefd0(DAT_035667e8,uVar6,local_140);
      }
    }
    else {
      bVar1 = true;
    }
    lVar3 = DAT_035667e0;
  } while (!bVar1);
  iVar9 = -1;
  bVar1 = false;
  do {
    iVar9 = iVar9 + 1;
    if (iVar9 < *(int *)(lVar3 + 0x10)) {
      uVar7 = FUN_00b94e60(lVar3,iVar9);
      cVar4 = FUN_0198a580(uVar7);
      if (cVar4 == '\x04') {
        uVar7 = FUN_00b94e60(lVar3,iVar9);
        cVar4 = FUN_0198a580(uVar7);
        if (cVar4 == '\x04') {
          uVar7 = FUN_00b94e60(lVar3,iVar9);
          cVar4 = FUN_01d01970(uVar7);
          if (cVar4 != '\0') {
            plVar8 = (longlong *)FUN_00b94e60(lVar3,iVar9);
            uVar7 = FUN_00b94e60(lVar3,iVar9);
            cVar4 = FUN_0198a580(uVar7);
            if (cVar4 == '\x04') {
              sVar5 = FUN_01d03160(plVar8);
              if (sVar5 == 0x2901) {
                uVar6 = (**(code **)(*plVar8 + 0x210))(plVar8,0);
                FUN_00dae910(DAT_035667f8,uVar6);
              }
            }
            plVar8 = (longlong *)FUN_00b94e60(lVar3,iVar9);
            uVar7 = FUN_00b94e60(lVar3,iVar9);
            cVar4 = FUN_0198a580(uVar7);
            if (cVar4 == '\x04') {
              sVar5 = FUN_01d03160(plVar8);
              if (sVar5 == 0x2902) {
                uVar6 = (**(code **)(*plVar8 + 0x210))(plVar8,0);
                FUN_00dae910(DAT_03566800,uVar6);
              }
            }
          }
        }
      }
    }
    else {
      bVar1 = true;
    }
    lVar2 = DAT_035667e0;
  } while (!bVar1);
  iVar9 = -1;
  bVar1 = false;
  do {
    iVar9 = iVar9 + 1;
    if (iVar9 < *(int *)(lVar2 + 0x10)) {
      uVar7 = FUN_00b94e60(lVar2,iVar9);
      cVar4 = FUN_0198a580(uVar7);
      if (cVar4 == '\x04') {
        plVar8 = (longlong *)FUN_00b94e60(lVar2,iVar9);
        uVar7 = FUN_00b94e60(lVar2,iVar9);
        cVar4 = FUN_0198a580(uVar7);
        if (cVar4 == '\x04') {
          sVar5 = FUN_01d03160(plVar8);
          if (sVar5 == 0x4b0) {
            uVar7 = FUN_00b94e60(lVar2,iVar9);
            uVar6 = (**(code **)(*plVar8 + 0x210))(plVar8,0);
            FUN_01b4b4f0(DAT_03566808,uVar7,uVar6);
          }
        }
      }
    }
    else {
      bVar1 = true;
    }
  } while (!bVar1);
  FUN_00414480(local_40);
  return;
}

