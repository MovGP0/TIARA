/* Ghidra address: 00a20b50 */
/* Ghidra symbol: FUN_00a20b50 */


void FUN_00a20b50(longlong param_1,longlong param_2,uint *param_3,uint param_4,undefined8 param_5,
                 uint *param_6,uint param_7)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  
  if (*param_6 < param_7) {
    lVar3 = *(longlong *)(param_1 + 0x1c0);
    iVar5 = *(int *)(param_1 + 0x13c) * 3;
    do {
      uVar1 = *param_3;
      if (uVar1 < param_4) {
        uVar10 = *(int *)(lVar3 + 0x6c) - *(int *)(lVar3 + 100);
        if (param_4 - uVar1 <= uVar10) {
          uVar10 = param_4 - uVar1;
        }
        (**(code **)(*(longlong *)(param_1 + 0x1d8) + 8))
                  (param_1,param_2 + (ulonglong)uVar1 * 8,lVar3 + 0x10,*(int *)(lVar3 + 100),uVar10)
        ;
        if ((*(int *)(lVar3 + 0x60) == *(int *)(param_1 + 0x34)) &&
           (iVar7 = *(int *)(param_1 + 0x4c), 0 < iVar7)) {
          iVar6 = *(int *)(param_1 + 0x13c);
          lVar9 = 0;
          do {
            if (0 < iVar6) {
              iVar7 = 0;
              iVar8 = -1;
              do {
                uVar4 = *(undefined8 *)(lVar3 + 0x10 + lVar9 * 8);
                FUN_00a1bca0(uVar4,0,uVar4,iVar8,1,*(undefined4 *)(param_1 + 0x30));
                iVar6 = *(int *)(param_1 + 0x13c);
                iVar7 = iVar7 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar7 < iVar6);
              iVar7 = *(int *)(param_1 + 0x4c);
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar7);
        }
        *param_3 = *param_3 + uVar10;
        iVar7 = *(int *)(lVar3 + 100) + uVar10;
        *(int *)(lVar3 + 100) = iVar7;
        *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) - uVar10;
        iVar6 = *(int *)(lVar3 + 0x6c);
LAB_00a20d30:
        if (iVar7 == iVar6) goto LAB_00a20d35;
      }
      else {
        if (*(int *)(lVar3 + 0x60) != 0) {
          return;
        }
        iVar7 = *(int *)(lVar3 + 100);
        iVar6 = *(int *)(lVar3 + 0x6c);
        if (iVar6 <= iVar7) goto LAB_00a20d30;
        iVar8 = *(int *)(param_1 + 0x4c);
        if (0 < iVar8) {
          lVar9 = 0;
          if (iVar6 <= iVar7) goto LAB_00a20d08;
          do {
            uVar4 = *(undefined8 *)(lVar3 + 0x10 + lVar9 * 8);
            uVar2 = *(undefined4 *)(param_1 + 0x30);
            iVar8 = iVar7 + -1;
            do {
              FUN_00a1bca0(uVar4,iVar8,uVar4,iVar7,1,uVar2);
              iVar7 = iVar7 + 1;
            } while (iVar6 != iVar7);
            iVar8 = *(int *)(param_1 + 0x4c);
LAB_00a20d08:
            do {
              lVar9 = lVar9 + 1;
              if (iVar8 <= lVar9) {
                iVar6 = *(int *)(lVar3 + 0x6c);
                goto LAB_00a20d1b;
              }
              iVar7 = *(int *)(lVar3 + 100);
              iVar6 = *(int *)(lVar3 + 0x6c);
            } while (iVar6 <= iVar7);
          } while( true );
        }
LAB_00a20d1b:
        *(int *)(lVar3 + 100) = iVar6;
LAB_00a20d35:
        (**(code **)(*(longlong *)(param_1 + 0x1e0) + 8))
                  (param_1,lVar3 + 0x10,*(undefined4 *)(lVar3 + 0x68),param_5,*param_6);
        *param_6 = *param_6 + 1;
        iVar7 = *(int *)(param_1 + 0x13c);
        iVar6 = *(int *)(lVar3 + 0x68) + iVar7;
        if (iVar5 <= iVar6) {
          iVar6 = 0;
        }
        *(int *)(lVar3 + 0x68) = iVar6;
        iVar6 = *(int *)(lVar3 + 100);
        if (iVar5 <= iVar6) {
          *(undefined4 *)(lVar3 + 100) = 0;
          iVar6 = 0;
        }
        *(int *)(lVar3 + 0x6c) = iVar6 + iVar7;
      }
    } while (*param_6 < param_7);
  }
  return;
}

