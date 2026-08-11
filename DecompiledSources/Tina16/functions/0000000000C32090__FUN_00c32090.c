/* Ghidra address: 00c32090 */
/* Ghidra symbol: FUN_00c32090 */


void FUN_00c32090(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  int local_5c;
  undefined1 local_58 [16];
  undefined8 *local_48;
  undefined8 *local_40;
  
  FUN_00c31b10();
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x70))
            (*(longlong **)(param_1 + 0x78),*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24));
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x88))
            (*(longlong **)(param_1 + 0x78),*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
  lVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
  *(undefined4 *)(lVar5 + 0x90) = 0xcc0020;
  local_5c = 0;
  bVar1 = false;
  do {
    if ((bVar1) ||
       (iVar3 = FUN_00c1aa10(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50)),
       iVar3 <= local_5c)) {
      bVar10 = 0;
      if (*(char *)(param_1 + 9) != '\0') {
        if (DAT_01e9f564 != '\0') {
          bVar10 = 4;
        }
        iVar3 = FUN_00c1aa10();
        local_5c = 0;
        if (-1 < iVar3 + -1) {
          do {
            lVar5 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50),local_5c);
            if (*(longlong *)(lVar5 + 0x60) != 0) {
              uVar7 = FUN_00c2e570(*(longlong *)(lVar5 + 0x60));
              if ((byte)uVar7 < 8) {
                bVar10 = bVar10 | (byte)((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) <<
                                        ((byte)uVar7 & 0x1f));
              }
            }
            local_5c = local_5c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if (((bVar10 & 4) == 0) || (*(char *)(param_1 + 8) == '\0')) {
          local_40 = (undefined8 *)(param_1 + 0x58);
          uVar7 = *local_40;
          *local_40 = 0;
          FUN_00410f20(uVar7);
        }
        else {
          plVar8 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
          *(longlong **)(param_1 + 0x58) = plVar8;
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x48))
                            (*(longlong **)(param_1 + 0x78));
          (**(code **)(*plVar8 + 0x70))(plVar8,uVar4);
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x60))
                            (*(longlong **)(param_1 + 0x78));
          (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))
                    (*(longlong **)(param_1 + 0x58),uVar4);
          cVar2 = FUN_00c350b0(*(undefined8 *)(param_1 + 0x10));
          if (cVar2 == '\0') {
            lVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x58));
            FUN_005fdcb0(*(undefined8 *)(lVar5 + 0x80),0);
            lVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x58));
            FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),*(undefined4 *)(param_1 + 0x30));
            plVar8 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x58));
            plVar9 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x58));
            (**(code **)(*plVar9 + 0x20))(plVar9,local_58);
            (**(code **)(*plVar8 + 0xa8))(plVar8,local_58);
          }
          else {
            lVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x58));
            *(undefined4 *)(lVar5 + 0x90) = 0xcc0020;
            uVar7 = FUN_00609e10(*(undefined8 *)(param_1 + 0x58));
            plVar8 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x58));
            (**(code **)(*plVar8 + 0x20))(plVar8,local_58);
            FUN_005fead0(uVar7,local_58,*(undefined8 *)(param_1 + 0x18),param_1 + 0x20);
          }
        }
        if ((bVar10 & 8) == 0) {
          local_48 = (undefined8 *)(param_1 + 0x70);
          uVar7 = *local_48;
          *local_48 = 0;
          FUN_00410f20(uVar7);
        }
        else {
          plVar8 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
          *(longlong **)(param_1 + 0x70) = plVar8;
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x48))
                            (*(longlong **)(param_1 + 0x78));
          (**(code **)(*plVar8 + 0x70))(plVar8,uVar4);
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x60))
                            (*(longlong **)(param_1 + 0x78));
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x88))
                    (*(longlong **)(param_1 + 0x70),uVar4);
          lVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x70));
          *(undefined4 *)(lVar5 + 0x90) = 0xcc0020;
          lVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x70));
          FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),*(undefined4 *)(param_1 + 0x30));
          lVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x70));
          FUN_005fdcb0(*(undefined8 *)(lVar5 + 0x80),0);
          uVar7 = FUN_00609e10(*(undefined8 *)(param_1 + 0x70));
          plVar8 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x70));
          (**(code **)(*plVar8 + 0x20))(plVar8,local_58);
          FUN_005fead0(uVar7,local_58,*(undefined8 *)(param_1 + 0x18),param_1 + 0x20);
        }
      }
      if ((*(char *)(param_1 + 8) == '\0') ||
         (cVar2 = FUN_00c350b0(*(undefined8 *)(param_1 + 0x10)), cVar2 == '\0')) {
        lVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
        FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),*(undefined4 *)(param_1 + 0x30));
        lVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
        FUN_005fdcb0(*(undefined8 *)(lVar5 + 0x80),0);
        plVar8 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
        plVar9 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
        (**(code **)(*plVar9 + 0x20))(plVar9,local_58);
        (**(code **)(*plVar8 + 0xa8))(plVar8,local_58);
      }
      else {
        lVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
        *(undefined4 *)(lVar5 + 0x90) = 0xcc0020;
        uVar7 = FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
        plVar8 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x78));
        (**(code **)(*plVar8 + 0x20))(plVar8,local_58);
        FUN_005fead0(uVar7,local_58,*(undefined8 *)(param_1 + 0x18),param_1 + 0x20);
      }
      return;
    }
    lVar5 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50),local_5c);
    iVar3 = FUN_00c1aa10();
    iVar11 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar6 = FUN_00c28360(*(undefined8 *)(lVar5 + 0x58),iVar11);
        cVar2 = FUN_004113d0(lVar6,&LAB_00c16d40);
        if (cVar2 != '\0') {
          FUN_00c31c80(param_1,*(undefined2 *)(lVar6 + 0x28));
          bVar1 = true;
          break;
        }
        iVar11 = iVar11 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_5c = local_5c + 1;
  } while( true );
}

