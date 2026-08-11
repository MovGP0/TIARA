/* Ghidra address: 00629970 */
/* Ghidra symbol: FUN_00629970 */


undefined8 FUN_00629970(longlong *param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  
  uVar15 = 0xfffffffe;
  if ((((param_1 != (longlong *)0x0) && (param_1[6] != 0)) && (param_1[7] != 0)) &&
     ((plVar6 = (longlong *)param_1[5], plVar6 != (longlong *)0x0 &&
      ((longlong *)*plVar6 == param_1)))) {
    iVar2 = (int)plVar6[1];
    if ((((iVar2 - 0x39U < 0x39) &&
         ((0x100400400011001U >> ((ulonglong)(iVar2 - 0x39U) & 0x3f) & 1) != 0)) ||
        ((iVar2 == 0x29a || (iVar2 == 0x2a)))) &&
       ((param_2 != 0 &&
        ((iVar3 = *(int *)((longlong)plVar6 + 0x2c), iVar3 != 2 &&
         (((iVar2 == 0x2a || (iVar3 != 1)) && (*(int *)((longlong)plVar6 + 0x9c) == 0)))))))) {
      if (iVar3 == 1) {
        uVar12 = FUN_006347b0(*(undefined4 *)((longlong)param_1 + 0x4c),param_2,param_3);
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
      }
      *(undefined4 *)((longlong)plVar6 + 0x2c) = 0;
      uVar13 = *(uint *)((longlong)plVar6 + 0x44);
      if (uVar13 <= param_3) {
        if (iVar3 == 0) {
          lVar7 = plVar6[0xd];
          uVar19 = (ulonglong)(*(int *)((longlong)plVar6 + 0x74) - 1);
          *(undefined2 *)(lVar7 + uVar19 * 2) = 0;
          FUN_00626680(lVar7,0,uVar19 * 2);
          *(undefined4 *)((longlong)plVar6 + 0x94) = 0;
          *(undefined4 *)((longlong)plVar6 + 0x84) = 0;
          *(undefined4 *)((longlong)plVar6 + 0x170c) = 0;
          uVar13 = *(uint *)((longlong)plVar6 + 0x44);
        }
        param_2 = param_2 + (ulonglong)(param_3 - uVar13);
        param_3 = uVar13;
      }
      lVar11 = param_1[1];
      lVar7 = *param_1;
      *(uint *)(param_1 + 1) = param_3;
      *param_1 = param_2;
      FUN_00629c50(plVar6);
      uVar13 = *(uint *)((longlong)plVar6 + 0x94);
      uVar20 = *(uint *)((longlong)plVar6 + 0x9c);
      while (2 < uVar20) {
        uVar1 = uVar20 - 2;
        uVar14 = *(uint *)(plVar6 + 0xe);
        lVar8 = plVar6[10];
        uVar4 = *(uint *)((longlong)plVar6 + 0x7c);
        lVar9 = plVar6[0xd];
        lVar10 = plVar6[0xc];
        uVar5 = *(uint *)((longlong)plVar6 + 0x4c);
        bVar16 = (byte)(int)plVar6[0x10];
        uVar18 = uVar13;
        uVar17 = uVar1;
        if ((uVar1 & 1) != 0) {
          uVar14 = ((uint)*(byte *)(lVar8 + (ulonglong)(uVar13 + 2)) ^ uVar14 << (bVar16 & 0x1f)) &
                   uVar4;
          *(uint *)(plVar6 + 0xe) = uVar14;
          *(undefined2 *)(lVar10 + (ulonglong)(uVar5 & uVar13) * 2) =
               *(undefined2 *)(lVar9 + (ulonglong)uVar14 * 2);
          *(short *)(lVar9 + (ulonglong)uVar14 * 2) = (short)uVar13;
          uVar18 = uVar13 + 1;
          uVar17 = uVar20 - 3;
        }
        uVar19 = (ulonglong)uVar14;
        if (uVar20 != 3) {
          do {
            uVar20 = ((uint)*(byte *)(lVar8 + (ulonglong)(uVar18 + 2)) ^
                     (int)uVar19 << (bVar16 & 0x1f)) & uVar4;
            *(uint *)(plVar6 + 0xe) = uVar20;
            *(undefined2 *)(lVar10 + (ulonglong)(uVar5 & uVar18) * 2) =
                 *(undefined2 *)(lVar9 + (ulonglong)uVar20 * 2);
            *(short *)(lVar9 + (ulonglong)uVar20 * 2) = (short)uVar18;
            uVar20 = ((uint)*(byte *)(lVar8 + (ulonglong)(uVar18 + 3)) ^ uVar20 << (bVar16 & 0x1f))
                     & uVar4;
            uVar19 = (ulonglong)uVar20;
            *(uint *)(plVar6 + 0xe) = uVar20;
            *(undefined2 *)(lVar10 + (ulonglong)(uVar5 & uVar18 + 1) * 2) =
                 *(undefined2 *)(lVar9 + uVar19 * 2);
            *(short *)(lVar9 + uVar19 * 2) = (short)(uVar18 + 1);
            uVar17 = uVar17 - 2;
            uVar18 = uVar18 + 2;
          } while (uVar17 != 0);
        }
        *(uint *)((longlong)plVar6 + 0x94) = uVar1 + uVar13;
        *(undefined4 *)((longlong)plVar6 + 0x9c) = 2;
        FUN_00629c50(plVar6);
        uVar13 = *(uint *)((longlong)plVar6 + 0x94);
        uVar20 = *(uint *)((longlong)plVar6 + 0x9c);
      }
      *(uint *)((longlong)plVar6 + 0x94) = uVar13 + uVar20;
      *(uint *)((longlong)plVar6 + 0x84) = uVar13 + uVar20;
      *(uint *)((longlong)plVar6 + 0x170c) = uVar20;
      *(undefined8 *)((longlong)plVar6 + 0x9c) = 0x200000000;
      *(undefined4 *)(plVar6 + 0x11) = 2;
      *(undefined4 *)(plVar6 + 0x12) = 0;
      *param_1 = lVar7;
      *(int *)(param_1 + 1) = (int)lVar11;
      *(int *)((longlong)plVar6 + 0x2c) = iVar3;
      uVar15 = 0;
    }
  }
  return uVar15;
}

