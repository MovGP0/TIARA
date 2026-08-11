/* Ghidra address: 00a0d7c0 */
/* Ghidra symbol: FUN_00a0d7c0 */


int FUN_00a0d7c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  
  lVar1 = param_1[0x48];
  iVar11 = 2;
  if (*(int *)(lVar1 + 0x24) == 0) {
    iVar5 = (**(code **)(param_1[0x49] + 8))(param_1);
    if (iVar5 == 2) {
      *(undefined4 *)(lVar1 + 0x24) = 1;
      if (*(int *)(lVar1 + 0x28) == 0) {
        if (*(int *)((longlong)param_1 + 0xac) < *(int *)((longlong)param_1 + 0xb4)) {
          *(int *)((longlong)param_1 + 0xb4) = *(int *)((longlong)param_1 + 0xac);
        }
      }
      else if (*(int *)(param_1[0x49] + 0x1c) != 0) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x3b;
        (*(code *)*puVar3)(param_1);
      }
    }
    else {
      iVar11 = iVar5;
      if (iVar5 == 1) {
        if (*(int *)(lVar1 + 0x28) == 0) {
          if (*(int *)(lVar1 + 0x20) == 0) {
            puVar3 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar3 + 5) = 0x23;
            (*(code *)*puVar3)(param_1);
          }
          FUN_00a0db20(param_1);
          iVar11 = 1;
        }
        else {
          if ((0xffdc < *(int *)((longlong)param_1 + 0x34)) || (0xffdc < (int)param_1[6])) {
            *(undefined8 *)(*param_1 + 0x28) = 0xffdc00000029;
            (**(code **)*param_1)(param_1);
          }
          lVar4 = param_1[0x25];
          if ((int)lVar4 != 8) {
            lVar2 = *param_1;
            *(undefined4 *)(lVar2 + 0x28) = 0xf;
            *(int *)(lVar2 + 0x2c) = (int)lVar4;
            (**(code **)*param_1)(param_1);
          }
          iVar11 = (int)param_1[7];
          if (10 < iVar11) {
            lVar4 = *param_1;
            *(undefined4 *)(lVar4 + 0x28) = 0x1a;
            *(int *)(lVar4 + 0x2c) = iVar11;
            *(undefined4 *)(*param_1 + 0x30) = 10;
            (**(code **)*param_1)(param_1);
            iVar11 = (int)param_1[7];
          }
          param_1[0x33] = 0x100000001;
          if (iVar11 < 1) {
            *(undefined4 *)(param_1 + 0x34) = 8;
            iVar5 = 1;
          }
          else {
            piVar12 = (int *)(param_1[0x26] + 0xc);
            iVar10 = 0;
            iVar5 = 1;
            iVar8 = 1;
            do {
              iVar9 = piVar12[-1];
              if ((3 < iVar9 - 1U) || (3 < *piVar12 - 1U)) {
                puVar3 = (undefined8 *)*param_1;
                *(undefined4 *)(puVar3 + 5) = 0x12;
                (*(code *)*puVar3)(param_1);
                iVar11 = (int)param_1[7];
                iVar8 = (int)param_1[0x33];
                iVar9 = piVar12[-1];
                iVar5 = *(int *)((longlong)param_1 + 0x19c);
              }
              if (iVar9 <= iVar8) {
                iVar9 = iVar8;
              }
              *(int *)(param_1 + 0x33) = iVar9;
              iVar8 = *piVar12;
              if (*piVar12 <= iVar5) {
                iVar8 = iVar5;
              }
              iVar5 = iVar8;
              *(int *)((longlong)param_1 + 0x19c) = iVar5;
              iVar10 = iVar10 + 1;
              piVar12 = piVar12 + 0x18;
              iVar8 = iVar9;
            } while (iVar10 < iVar11);
            *(undefined4 *)(param_1 + 0x34) = 8;
            if (0 < iVar11) {
              piVar12 = (int *)(param_1[0x26] + 8);
              iVar11 = 1;
              while( true ) {
                piVar12[7] = 8;
                iVar5 = FUN_00a1bc70(*piVar12 * (int)param_1[6],iVar9 << 3);
                piVar12[5] = iVar5;
                iVar5 = FUN_00a1bc70(piVar12[1] * *(int *)((longlong)param_1 + 0x34),
                                     *(int *)((longlong)param_1 + 0x19c) << 3);
                piVar12[6] = iVar5;
                iVar5 = FUN_00a1bc70(*piVar12 * (int)param_1[6],(int)param_1[0x33]);
                piVar12[8] = iVar5;
                iVar5 = FUN_00a1bc70(piVar12[1] * *(int *)((longlong)param_1 + 0x34),
                                     *(undefined4 *)((longlong)param_1 + 0x19c));
                piVar12[9] = iVar5;
                piVar12[10] = 1;
                piVar12[0x12] = 0;
                piVar12[0x13] = 0;
                if ((int)param_1[7] <= iVar11) break;
                iVar9 = (int)param_1[0x33];
                piVar12 = piVar12 + 0x18;
                iVar11 = iVar11 + 1;
              }
              iVar5 = *(int *)((longlong)param_1 + 0x19c);
            }
          }
          uVar6 = FUN_00a1bc70(*(undefined4 *)((longlong)param_1 + 0x34),iVar5 << 3);
          *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar6;
          iVar11 = 1;
          uVar7 = 1;
          if ((int)param_1[7] <= (int)param_1[0x36]) {
            uVar7 = (uint)((int)param_1[0x27] != 0);
          }
          *(uint *)(param_1[0x48] + 0x20) = uVar7;
          *(undefined4 *)(lVar1 + 0x28) = 0;
        }
      }
    }
  }
  return iVar11;
}

