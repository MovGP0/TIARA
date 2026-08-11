/* Ghidra address: 017d4030 */
/* Ghidra symbol: FUN_017d4030 */


void FUN_017d4030(longlong param_1)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  short sVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar12;
  undefined1 *puVar11;
  int local_80;
  int local_7c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  double local_68;
  double local_60;
  
  if (DAT_01fa4c9d != '\0') {
    iVar5 = FUN_017d1380(*(undefined8 *)(param_1 + 0x4c0));
    iVar7 = *(int *)(param_1 + 0x2d8);
    local_7c = 1;
    if (0 < iVar7) {
      do {
        plVar3 = *(longlong **)
                  (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_7c * 8) +
                  0x128);
        sVar4 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if ((sVar4 == 0x3e) || (sVar4 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar4 == 0x66)) {
          pdVar6 = (double *)FUN_01cfde70(plVar3,1,0,&local_69,&local_6a,&local_6b);
          dVar1 = *pdVar6;
          puVar11 = &local_6b;
          pdVar6 = (double *)FUN_01cfde70(plVar3,2,0,&local_69,&local_6a,puVar11);
          dVar2 = *pdVar6;
          if (dVar2 == 0.0) {
            return;
          }
          dVar10 = 0.0;
          iVar8 = iVar5 + -1;
          local_80 = 1;
          dVar9 = 0.0;
          if (0 < iVar8) {
            do {
              uVar12 = (undefined4)((ulonglong)puVar11 >> 0x20);
              sVar4 = (**(code **)(*plVar3 + 0xf8))(plVar3);
              if (sVar4 == 0x66) {
                puVar11 = (undefined1 *)CONCAT44(uVar12,2);
                FUN_017d13d0(&local_68,param_1,local_80,plVar3,1,puVar11,1,1,1);
              }
              else {
                puVar11 = (undefined1 *)CONCAT44(uVar12,3);
                FUN_017d13d0(&local_68,param_1,local_80,plVar3,1,puVar11,4,1,1);
              }
              dVar10 = dVar10 + local_68 * local_68 + local_60 * local_60;
              local_80 = local_80 + 1;
              iVar8 = iVar8 + -1;
              dVar9 = dVar10;
            } while (iVar8 != 0);
          }
          dVar9 = (double)FUN_0040c760(dVar9);
          FUN_01cc47e0(*(undefined8 *)PTR_DAT_020027c0,dVar2);
          FUN_01cc4ee0(*(undefined8 *)PTR_DAT_020027c0,0,dVar9 / dVar1,0);
        }
        local_7c = local_7c + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_017d2ab0(param_1,8);
  }
  return;
}

