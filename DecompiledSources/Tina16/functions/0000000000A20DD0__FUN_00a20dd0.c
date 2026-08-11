/* Ghidra address: 00a20dd0 */
/* Ghidra symbol: FUN_00a20dd0 */


void FUN_00a20dd0(longlong param_1,longlong param_2,uint *param_3,uint param_4,longlong param_5,
                 uint *param_6,uint param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar4 = *param_3;
  if (uVar4 < param_4) {
    lVar9 = *(longlong *)(param_1 + 0x1c0);
    do {
      if (param_7 <= *param_6) {
        return;
      }
      uVar8 = *(int *)(param_1 + 0x13c) - *(int *)(lVar9 + 100);
      if (param_4 - uVar4 <= uVar8) {
        uVar8 = param_4 - uVar4;
      }
      (**(code **)(*(longlong *)(param_1 + 0x1d8) + 8))
                (param_1,param_2 + (ulonglong)uVar4 * 8,lVar9 + 0x10,*(int *)(lVar9 + 100),uVar8);
      *param_3 = *param_3 + uVar8;
      iVar6 = *(int *)(lVar9 + 100) + uVar8;
      *(int *)(lVar9 + 100) = iVar6;
      iVar5 = *(int *)(lVar9 + 0x60) - uVar8;
      *(int *)(lVar9 + 0x60) = iVar5;
      iVar7 = *(int *)(param_1 + 0x13c);
      if ((iVar5 == 0) && (iVar6 < iVar7)) {
        iVar5 = *(int *)(param_1 + 0x4c);
        if (0 < iVar5) {
          lVar10 = 0;
          if (iVar7 <= iVar6) goto LAB_00a20ee7;
          do {
            uVar3 = *(undefined8 *)(lVar9 + 0x10 + lVar10 * 8);
            uVar1 = *(undefined4 *)(param_1 + 0x30);
            iVar5 = iVar6 + -1;
            do {
              FUN_00a1bca0(uVar3,iVar5,uVar3,iVar6,1,uVar1);
              iVar6 = iVar6 + 1;
            } while (iVar7 != iVar6);
            iVar5 = *(int *)(param_1 + 0x4c);
LAB_00a20ee7:
            do {
              lVar10 = lVar10 + 1;
              if (iVar5 <= lVar10) {
                iVar7 = *(int *)(param_1 + 0x13c);
                goto LAB_00a20f01;
              }
              iVar6 = *(int *)(lVar9 + 100);
              iVar7 = *(int *)(param_1 + 0x13c);
            } while (iVar7 <= iVar6);
          } while( true );
        }
LAB_00a20f01:
        *(int *)(lVar9 + 100) = iVar7;
LAB_00a20f1d:
        (**(code **)(*(longlong *)(param_1 + 0x1e0) + 8))(param_1,lVar9 + 0x10,0,param_5,*param_6);
        *(undefined4 *)(lVar9 + 100) = 0;
        *param_6 = *param_6 + 1;
      }
      else if (iVar6 == iVar7) goto LAB_00a20f1d;
      if ((*(int *)(lVar9 + 0x60) == 0) && (uVar4 = *param_6, uVar4 < param_7)) {
        iVar6 = *(int *)(param_1 + 0x4c);
        if (0 < iVar6) {
          lVar9 = *(longlong *)(param_1 + 0x58);
          lVar10 = 0;
          while( true ) {
            iVar7 = *(int *)(lVar9 + 0xc);
            iVar5 = iVar7 * uVar4;
            if (iVar5 < (int)(iVar7 * param_7)) {
              uVar3 = *(undefined8 *)(param_5 + lVar10 * 8);
              iVar2 = *(int *)(lVar9 + 0x1c);
              iVar6 = iVar5 + -1;
              iVar7 = iVar7 * (param_7 - uVar4);
              do {
                FUN_00a1bca0(uVar3,iVar6,uVar3,iVar5,1,iVar2 << 3);
                iVar5 = iVar5 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              iVar6 = *(int *)(param_1 + 0x4c);
            }
            lVar10 = lVar10 + 1;
            if (iVar6 <= lVar10) break;
            lVar9 = lVar9 + 0x60;
            uVar4 = *param_6;
          }
        }
        *param_6 = param_7;
        return;
      }
      uVar4 = *param_3;
    } while (uVar4 < param_4);
  }
  return;
}

