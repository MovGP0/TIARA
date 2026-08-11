/* Ghidra address: 013328c0 */
/* Ghidra symbol: FUN_013328c0 */


void FUN_013328c0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ushort uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong unaff_RDI;
  undefined7 uVar10;
  bool bVar11;
  undefined1 local_2b;
  undefined1 local_2a;
  byte local_29;
  
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x28))();
  iVar9 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x30))
                        (*(longlong **)(param_1 + 0x130),iVar9);
      cVar2 = FUN_01330f80(*(undefined8 *)(lVar5 + 8),L"CSENSOR");
      if ((cVar2 == '\0') || (*(double *)(param_1 + 0x110) <= *(double *)(lVar5 + 0x10))) {
        plVar1 = *(longlong **)(*(longlong *)(lVar5 + 0x38) + 0x128);
        sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
        if ((ushort)(sVar3 - 8U) < 0xd8) {
          uVar8 = (ulonglong)(ushort)(sVar3 - 8U) + 0x20;
          bVar11 = (*(byte *)((longlong)L"CSENSOR" + ((longlong)uVar8 >> 3) + 0xc) >> (uVar8 & 7) &
                   1) != 0;
        }
        else {
          bVar11 = false;
        }
        uVar10 = (undefined7)(unaff_RDI >> 8);
        if (bVar11) {
          if (sVar3 == 0x25) {
            unaff_RDI = CONCAT71(uVar10,2);
          }
          else {
            unaff_RDI = CONCAT71(uVar10,3);
          }
        }
        else {
          uVar7 = sVar3 - 8;
          if (uVar7 < 0xe0) {
            bVar11 = ((byte)(&DAT_01332aaf)[(longlong)(int)(uint)uVar7 >> 3] >> (uVar7 & 7) & 1) !=
                     0;
          }
          else {
            bVar11 = false;
          }
          if (bVar11) {
            if (sVar3 == 0x26) {
              unaff_RDI = CONCAT71(uVar10,2);
            }
            else {
              unaff_RDI = CONCAT71(uVar10,3);
            }
          }
        }
        uVar8 = unaff_RDI & 0xffffffff;
        uVar6 = FUN_01b05ad0(*(undefined8 *)(lVar5 + 0x38),uVar8,0,&local_29,&local_2a,&local_2b);
        if (local_29 < 0x10) {
          bVar11 = ((int)CONCAT62((int6)(uVar8 >> 0x10),1) << (local_29 & 0x1f) & 0x2048U) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          FUN_01d3a010(uVar6,local_29,*(undefined8 *)(lVar5 + 0x30));
        }
        else {
          FUN_01b04d70(0x213,&LAB_01332adc);
        }
      }
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_01331590(param_1);
  return;
}

