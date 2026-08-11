/* Ghidra address: 00c60d10 */
/* Ghidra symbol: FUN_00c60d10 */


void FUN_00c60d10(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  int local_3c;
  undefined8 local_30;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_004aeac0(*(longlong *)(param_1 + 0x20),0);
    local_30 = *puVar4;
    uVar2 = FUN_01799a70(lVar1);
    uVar3 = FUN_01799b40(lVar1);
    lVar5 = FUN_017b4250(&PTR_FUN_017a9fa8,1,&local_30,0,uVar2,uVar3,
                         *(undefined4 *)(*(longlong *)(lVar1 + 0xc48) + 0x4a8));
    iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10) + -1;
    local_3c = 1;
    if (0 < iVar11) {
      do {
        piVar6 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_3c);
        piVar7 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_3c + -1);
        if (*piVar6 == *piVar7) {
          lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_3c);
          lVar9 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_3c + -1);
          if (*(int *)(lVar8 + 4) != *(int *)(lVar9 + 4)) goto LAB_00c60e13;
        }
        else {
LAB_00c60e13:
          if (local_3c == *(int *)(*(longlong *)(param_1 + 0x20) + 0x10) + -1) {
            piVar6 = (int *)FUN_004aeac0(*(longlong *)(param_1 + 0x20),local_3c);
            piVar7 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),0);
            if (*piVar6 == *piVar7) {
              lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_3c);
              lVar9 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),0);
              if (*(int *)(lVar8 + 4) == *(int *)(lVar9 + 4)) goto LAB_00c60e94;
            }
          }
          uVar10 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_3c);
          FUN_017b5040(lVar5,uVar10);
        }
LAB_00c60e94:
        local_3c = local_3c + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if (*(int *)(lVar5 + 0x60) < 3) {
      FUN_00410f20(lVar5);
    }
    else {
      FUN_017afd00(lVar5,1);
      FUN_004ae7e0(*(undefined8 *)(lVar1 + 0xd10),lVar5);
      uVar10 = FUN_00c5c220(&DAT_00c5bba8,1,*(undefined8 *)(lVar1 + 0xd10),lVar5,uVar2 & 0xffffff00)
      ;
      FUN_00c5c790(*(undefined8 *)(lVar1 + 0xd50),uVar10);
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    FUN_0064e770(*(undefined8 *)(lVar1 + 0x948));
  }
  FUN_00c5f0b0(param_1);
  return;
}

