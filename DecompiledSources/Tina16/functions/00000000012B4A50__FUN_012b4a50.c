/* Ghidra address: 012b4a50 */
/* Ghidra symbol: FUN_012b4a50 */


byte FUN_012b4a50(longlong param_1,undefined1 param_2)

{
  short *psVar1;
  byte bVar2;
  undefined8 uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  double *pdVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  double dVar15;
  undefined1 *in_stack_ffffffffffffff68;
  undefined8 uVar16;
  undefined8 local_58;
  undefined8 local_50;
  byte local_43;
  undefined1 local_42;
  byte local_41;
  longlong local_40 [3];
  
  local_58 = 0;
  local_50 = 0;
  bVar2 = *(byte *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x19) = param_2;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0);
  iVar12 = 0;
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x470) + 0x10);
  if (-1 < iVar13 + -1) {
    do {
      uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
      plVar8 = (longlong *)
               FUN_004aeac0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x470),iVar12);
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x69d) == '\0') {
        uVar16 = CONCAT44(uVar5,(uint)*(ushort *)
                                       (*(longlong *)(param_1 + 0x10) + (longlong)iVar12 * 2));
        dVar15 = (double)FUN_017c58f0(*(undefined8 *)((longlong)plVar8 + 0x10c),
                                      *(undefined8 *)((longlong)plVar8 + 0x114),
                                      *(undefined8 *)((longlong)plVar8 + 0x11f),
                                      *(short *)((longlong)plVar8 + 0x11c) + -1,uVar16,
                                      *(undefined1 *)((longlong)plVar8 + 0x11e),0);
      }
      else {
        iVar6 = FUN_0040c770(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x695));
        uVar16 = CONCAT44(uVar5,(uint)*(ushort *)
                                       (*(longlong *)(param_1 + 0x10) + (longlong)iVar12 * 2));
        dVar15 = (double)FUN_017c58f0(*(undefined8 *)((longlong)plVar8 + 0x10c),
                                      *(undefined8 *)((longlong)plVar8 + 0x114),
                                      *(undefined8 *)((longlong)plVar8 + 0x11f),iVar6 + -1,uVar16,
                                      *(undefined1 *)((longlong)plVar8 + 0x11e),0);
      }
      if (*plVar8 == 0) {
        FUN_004169a0(&local_50,(longlong)plVar8 + 0xc);
        plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x438);
        uVar5 = (**(code **)(*plVar8 + 0xb8))(plVar8,local_50);
        in_stack_ffffffffffffff68 = (undefined1 *)CONCAT71((int7)((ulonglong)uVar16 >> 8),1);
        FUN_00b8fd60(&local_58,dVar15,6,0,in_stack_ffffffffffffff68);
        FUN_004b5450(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x438),uVar5
                     ,local_58);
      }
      else {
        lVar11 = *(longlong *)(param_1 + 8);
        iVar6 = FUN_01b07e10(lVar11,*plVar8);
        in_stack_ffffffffffffff68 = &local_42;
        pdVar9 = (double *)
                 FUN_01b05ad0(*(undefined8 *)
                               (*(longlong *)(lVar11 + 0x2b0) + -8 + (longlong)iVar6 * 8),
                              (char)plVar8[1],*(undefined1 *)((longlong)plVar8 + 9),&local_41,
                              in_stack_ffffffffffffff68,&local_43);
        (**(code **)(*(longlong *)*plVar8 + 0x2d0))
                  ((longlong *)*plVar8,*(byte *)(plVar8 + 1) - 1,local_40);
        if (bVar2 == 0) {
LAB_012b4d4f:
          *pdVar9 = dVar15;
        }
        else {
          if (local_41 < 8) {
            uVar7 = 1 << (local_41 & 0x1f);
            bVar14 = (uVar7 & 0x68) != 0;
            uVar10 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar14);
          }
          else {
            uVar10 = 0;
            bVar14 = false;
          }
          if (!bVar14) goto LAB_012b4d4f;
          if (local_41 < 8) {
            uVar7 = (int)CONCAT71((int7)(uVar10 >> 8),1) << (local_41 & 0x1f);
            bVar14 = (uVar7 & 0x48) != 0;
            uVar10 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar14);
          }
          else {
            uVar10 = 0;
            bVar14 = false;
          }
          if (bVar14) {
            FUN_01d3a010(pdVar9,local_41,dVar15);
          }
          else {
            if (local_41 == 5) {
              if (local_43 < 8) {
                bVar14 = ((int)CONCAT71((int7)(uVar10 >> 8),1) << (local_43 & 0x1f) & 0x90U) != 0;
              }
              else {
                bVar14 = false;
              }
              if ((!bVar14) || (*(char *)((longlong)plVar8 + 9) != '\x03')) {
                FUN_01d3a230(*(undefined8 *)(local_40[0] + 1),*(undefined8 *)(local_40[0] + 9),
                             *(byte *)((longlong)plVar8 + 9) - 1,dVar15);
                goto LAB_012b4d55;
              }
            }
            *pdVar9 = dVar15;
          }
        }
LAB_012b4d55:
        sVar4 = (**(code **)(*(longlong *)*plVar8 + 0xf8))((longlong *)*plVar8);
        if ((((((sVar4 == 0xf) ||
               (sVar4 = (**(code **)(*(longlong *)*plVar8 + 0xf8))((longlong *)*plVar8),
               sVar4 == 0x10)) ||
              (sVar4 = (**(code **)(*(longlong *)*plVar8 + 0xf8))((longlong *)*plVar8),
              sVar4 == 0xd9)) ||
             ((sVar4 = (**(code **)(*(longlong *)*plVar8 + 0xf8))((longlong *)*plVar8),
              sVar4 == 0xda ||
              (sVar4 = (**(code **)(*(longlong *)*plVar8 + 0xf8))((longlong *)*plVar8),
              sVar4 == 0xa4)))) ||
            ((sVar4 = (**(code **)(*(longlong *)*plVar8 + 0xf8))((longlong *)*plVar8), sVar4 == 0xa6
             || (sVar4 = (**(code **)(*(longlong *)*plVar8 + 0xf8))((longlong *)*plVar8),
                sVar4 == 0xa7)))) &&
           (((char)plVar8[1] == '\x02' && (*(char *)((longlong)plVar8 + 9) == '\x03')))) {
          in_stack_ffffffffffffff68 = &local_42;
          FUN_01cfde70(*plVar8,(char)plVar8[1],*(undefined1 *)((longlong)plVar8 + 9),&local_41,
                       in_stack_ffffffffffffff68,&local_43);
          if (local_43 == 4) {
            *pdVar9 = *pdVar9 - 90.0;
          }
        }
        FUN_01cc5c10(uVar3,*pdVar9);
      }
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x69d) == '\0') {
    iVar12 = 0;
    iVar13 = 0;
    while ((lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x470),
           iVar13 < *(int *)(lVar11 + 0x10) &&
           (lVar11 = FUN_004aeac0(lVar11,iVar13),
           (uint)*(ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar13 * 2) ==
           (int)*(short *)(lVar11 + 0x11c) - 1U))) {
      *(undefined2 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar13 * 2) = 0;
      if (iVar13 < *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x470)
                           + 0x10) + -1) {
        iVar12 = iVar13 + 1;
      }
      iVar13 = iVar13 + 1;
    }
    psVar1 = (short *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar12 * 2);
    *psVar1 = *psVar1 + 1;
  }
  else {
    iVar13 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x470) + 0x10
                     );
    iVar12 = 0;
    if (-1 < iVar13 + -1) {
      do {
        psVar1 = (short *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar12 * 2);
        *psVar1 = *psVar1 + 1;
        iVar12 = iVar12 + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
  }
  if ((bVar2 & *(byte *)(param_1 + 0x19)) != 0) {
    FUN_01440040(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa0),
                 *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1310),0);
    FUN_019af810(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa0),*(undefined1 *)(param_1 + 0x1a))
    ;
  }
  FUN_00414560(&local_58,2);
  return bVar2;
}

