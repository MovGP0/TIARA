/* Ghidra address: 015f8ca0 */
/* Ghidra symbol: FUN_015f8ca0 */


int FUN_015f8ca0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 *puVar12;
  int local_cc;
  int local_c8;
  int local_ac;
  undefined8 local_a3;
  longlong *local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  plVar1 = (longlong *)param_1[0xa5];
  iVar3 = (**(code **)(*param_1 + 0x210))(param_1,param_2);
  iVar4 = (**(code **)(*plVar1 + 0x1c8))();
  local_c8 = 0;
  if (-1 < iVar4 + -1) {
    do {
      iVar5 = FUN_01d01940();
      local_cc = 1;
      if (0 < iVar5) {
        do {
          puVar10 = (undefined8 *)(plVar1[0x2d] + (longlong)local_cc * 99);
          puVar12 = &local_a3;
          for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          *(undefined2 *)puVar12 = *(undefined2 *)puVar10;
          *(undefined1 *)((longlong)puVar12 + 2) = *(undefined1 *)((longlong)puVar10 + 2);
          plVar2 = local_48;
          iVar6 = (**(code **)(*local_48 + 0x1c8))();
          iVar9 = 0;
          if (-1 < iVar6 + -1) {
            pcVar11 = (char *)((longlong)&local_a3 + 3);
            do {
              if ((((*pcVar11 == '\0') && ((byte)pcVar11[1] - 1 == local_c8)) &&
                  (iVar7 = (**(code **)(*plVar2 + 0x210))(plVar2,iVar9), iVar7 == iVar3)) &&
                 (iVar9 == param_2)) {
                local_ac = local_c8;
                goto LAB_015f8e19;
              }
              iVar9 = iVar9 + 1;
              pcVar11 = pcVar11 + 2;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          local_cc = local_cc + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_c8 = local_c8 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_ac = -1;
LAB_015f8e19:
  FUN_00414480(local_40);
  return local_ac;
}

