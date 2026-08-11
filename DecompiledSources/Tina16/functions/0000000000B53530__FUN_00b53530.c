/* Ghidra address: 00b53530 */
/* Ghidra symbol: FUN_00b53530 */


void FUN_00b53530(longlong param_1,ushort param_2,ushort param_3,int param_4,int param_5,
                 ushort param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined8 local_838;
  undefined8 local_830;
  int local_828 [256];
  uint local_428 [256];
  
  local_830 = 0;
  local_838 = 0;
  lVar7 = *(longlong *)(param_1 + 8);
  if (lVar7 != 0) {
    uVar9 = *(undefined8 *)(lVar7 + 0x10);
    uVar2 = **(undefined8 **)(lVar7 + 0x58);
    iVar12 = 0;
    puVar11 = local_428;
    piVar14 = local_828;
    do {
      *puVar11 = 0;
      lVar7 = FUN_00b52ce0(param_1,iVar12);
      *piVar14 = *(int *)(lVar7 + 0x38);
      iVar12 = iVar12 + 1;
      piVar14 = piVar14 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar12 != 0x100);
    iVar12 = FUN_00b4e330();
    iVar10 = 0;
    if (-1 < iVar12 + -1) {
      do {
        lVar7 = FUN_00b4fc70(uVar9,iVar10);
        uVar1 = *(ushort *)(lVar7 + 0x4a);
        lVar7 = FUN_00b4fc70(uVar9,iVar10);
        if ((((param_2 <= uVar1) && (uVar13 = (uint)uVar1, uVar13 <= param_3)) &&
            (param_4 <= (int)(uint)*(ushort *)(lVar7 + 0x48))) &&
           ((int)(uint)*(ushort *)(lVar7 + 0x48) <= param_5)) {
          uVar8 = FUN_00b4fc70(uVar9,iVar10);
          FUN_00b4f780(uVar8,&local_830);
          uVar8 = FUN_00b4fc70(uVar9,iVar10);
          uVar3 = FUN_00b4d770(uVar8);
          uVar8 = FUN_00b4fc70(uVar9,iVar10);
          FUN_00b4f740(uVar8,&local_838);
          uVar8 = FUN_00b4fc70(uVar9,iVar10);
          uVar5 = FUN_00b4dab0(uVar8);
          uVar6 = FUN_00b37f70(local_830,uVar3,local_838,uVar5,uVar2);
          uVar8 = FUN_00b4fc70(uVar9,iVar10);
          cVar4 = FUN_00b4d740(uVar8);
          if ((cVar4 != '\0') && (local_828[(int)uVar13] < (int)uVar6)) {
            uVar6 = 0;
          }
          uVar8 = FUN_00b4fc70(uVar9,iVar10);
          cVar4 = FUN_00b4d6e0(uVar8);
          if (cVar4 != '\0') {
            uVar6 = 0;
          }
          if (0 < (int)uVar6) {
            if ((int)(uint)param_6 < (int)uVar6) {
              uVar6 = (uint)param_6;
            }
            if ((int)local_428[(int)uVar13] < (int)uVar6) {
              local_428[(int)uVar13] = uVar6;
            }
          }
        }
        iVar10 = iVar10 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    iVar12 = 0;
    puVar11 = local_428;
    do {
      if (0 < (int)*puVar11) {
        uVar9 = FUN_00b52ce0(param_1,iVar12);
        FUN_00b51a80(uVar9,*puVar11);
      }
      iVar12 = iVar12 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar12 != 0x100);
  }
  FUN_004144d0(&local_838);
  FUN_00414520(&local_830);
  return;
}

