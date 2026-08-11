/* Ghidra address: 0062c510 */
/* Ghidra symbol: FUN_0062c510 */


undefined8 FUN_0062c510(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined8 uVar21;
  
  uVar21 = 0xfffffffe;
  if ((((param_2 != (undefined4 *)0x0) && (*(longlong *)(param_2 + 0xc) != 0)) &&
      (*(longlong *)(param_2 + 0xe) != 0)) &&
     ((plVar2 = *(longlong **)(param_2 + 10), plVar2 != (longlong *)0x0 &&
      ((undefined4 *)*plVar2 == param_2)))) {
    iVar1 = (int)plVar2[1];
    if ((((iVar1 - 0x39U < 0x39) &&
         ((0x100400400011001U >> ((ulonglong)(iVar1 - 0x39U) & 0x3f) & 1) != 0)) ||
        ((iVar1 == 0x29a || (iVar1 == 0x2a)))) && (param_1 != (undefined4 *)0x0)) {
      uVar21 = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x12) = uVar21;
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
      uVar3 = *param_2;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      uVar7 = param_2[4];
      uVar8 = param_2[5];
      uVar9 = param_2[6];
      uVar10 = param_2[7];
      uVar11 = param_2[9];
      uVar12 = param_2[10];
      uVar13 = param_2[0xb];
      uVar14 = param_2[0xc];
      uVar15 = param_2[0xd];
      uVar16 = param_2[0xe];
      uVar17 = param_2[0xf];
      param_1[8] = param_2[8];
      param_1[9] = uVar11;
      param_1[10] = uVar12;
      param_1[0xb] = uVar13;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[6] = uVar9;
      param_1[7] = uVar10;
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[0xc] = uVar14;
      param_1[0xd] = uVar15;
      param_1[0xe] = uVar16;
      param_1[0xf] = uVar17;
      puVar18 = (undefined8 *)(**(code **)(param_1 + 0xc))(*(undefined8 *)(param_1 + 0x10),1,0x1720)
      ;
      uVar21 = 0xfffffffc;
      if (puVar18 != (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 10) = puVar18;
        FUN_00626670(puVar18,plVar2,0x1720);
        *puVar18 = param_1;
        uVar19 = (**(code **)(param_1 + 0xc))
                           (*(undefined8 *)(param_1 + 0x10),
                            *(undefined4 *)((longlong)puVar18 + 0x44),2);
        puVar18[10] = uVar19;
        uVar19 = (**(code **)(param_1 + 0xc))
                           (*(undefined8 *)(param_1 + 0x10),
                            *(undefined4 *)((longlong)puVar18 + 0x44),2);
        puVar18[0xc] = uVar19;
        uVar19 = (**(code **)(param_1 + 0xc))
                           (*(undefined8 *)(param_1 + 0x10),
                            *(undefined4 *)((longlong)puVar18 + 0x74),2);
        puVar18[0xd] = uVar19;
        lVar20 = (**(code **)(param_1 + 0xc))
                           (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(puVar18 + 0x2de),4);
        puVar18[2] = lVar20;
        if ((((puVar18[10] == 0) || (puVar18[0xc] == 0)) || (lVar20 == 0)) || (puVar18[0xd] == 0)) {
          FUN_006297a0(param_1);
        }
        else {
          FUN_00626670(puVar18[10],plVar2[10],*(int *)((longlong)puVar18 + 0x44) * 2);
          FUN_00626670(puVar18[0xc],plVar2[0xc],(ulonglong)*(uint *)((longlong)puVar18 + 0x44) * 2);
          FUN_00626670(puVar18[0xd],plVar2[0xd],(ulonglong)*(uint *)((longlong)puVar18 + 0x74) * 2);
          FUN_00626670(puVar18[2],plVar2[2],*(undefined4 *)(puVar18 + 3));
          puVar18[4] = (plVar2[4] - plVar2[2]) + puVar18[2];
          puVar18[0x2df] = lVar20 + (ulonglong)(*(uint *)(puVar18 + 0x2de) & 0xfffffffe);
          puVar18[0x2dd] = (ulonglong)*(uint *)(puVar18 + 0x2de) * 3 + puVar18[2];
          puVar18[0x168] = (longlong)puVar18 + 0xbc;
          puVar18[0x16b] = puVar18 + 0x136;
          puVar18[0x16e] = (longlong)puVar18 + 0xaa4;
          uVar21 = 0;
        }
      }
    }
  }
  return uVar21;
}

