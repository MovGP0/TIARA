/* Ghidra address: 01cd6b50 */
/* Ghidra symbol: FUN_01cd6b50 */


undefined8 FUN_01cd6b50(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  
  uVar6 = 0;
  iVar8 = *(int *)(*(longlong *)(param_1 + 0xf8) + 0x10);
  iVar7 = 0;
  if (-1 < iVar8 + -1) {
    do {
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
      cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01aae560);
      if (cVar1 != '\0') {
        uVar4 = FUN_01cd6670(param_1);
        if ((byte)uVar4 < 8) {
          bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 6U) != 0
          ;
        }
        else {
          bVar9 = false;
        }
        if ((!bVar9) ||
           ((lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7),
            *(double *)(param_1 + 0xb8) < *(double *)(lVar5 + 0x90) ||
            *(double *)(param_1 + 0xb8) == *(double *)(lVar5 + 0x90) &&
            (lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7),
            *(double *)(lVar5 + 0x98) < *(double *)(param_1 + 0xc0) ||
            *(double *)(lVar5 + 0x98) == *(double *)(param_1 + 0xc0))))) {
          uVar4 = FUN_01cd6670(param_1);
          if ((byte)uVar4 < 8) {
            bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 1U) !=
                    0;
          }
          else {
            bVar9 = false;
          }
          if (bVar9) {
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
            dVar10 = (double)FUN_01ab2a30(uVar4);
            if (*(double *)(param_1 + 0xb8) <= dVar10) {
              uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
              dVar10 = (double)FUN_01ab2a60(uVar4);
              if (dVar10 < *(double *)(param_1 + 0xc0) || dVar10 == *(double *)(param_1 + 0xc0))
              goto LAB_01cd6db8;
            }
            uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
            uVar6 = FUN_01ab2a30(uVar6);
            *(undefined8 *)(param_1 + 0xb8) = uVar6;
            uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
            uVar6 = FUN_01ab2a60(uVar6);
            *(undefined8 *)(param_1 + 0xc0) = uVar6;
            *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb8);
            *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xc0);
            uVar2 = FUN_01ccddc0(param_1);
            uVar3 = FUN_01ccddd0(param_1);
            FUN_01cd43b0(param_1,uVar2,uVar3);
            *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb8);
            *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xc0);
            uVar6 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
          }
        }
        else {
          lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
          *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar5 + 0x90);
          lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
          *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar5 + 0x98);
          *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb8);
          *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xc0);
          uVar2 = FUN_01ccddc0(param_1);
          uVar3 = FUN_01ccddd0(param_1);
          FUN_01cd43b0(param_1,uVar2,uVar3);
          *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb8);
          *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xc0);
          uVar6 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
        }
      }
LAB_01cd6db8:
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return uVar6;
}

