/* Ghidra address: 011acd00 */
/* Ghidra symbol: FUN_011acd00 */


void FUN_011acd00(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  char local_31 [4];
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  *(undefined1 *)(*(longlong *)PTR_DAT_02003af0 + 0x5fe8) = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x770) + 0x260))(*(longlong **)(param_1 + 0x770));
  if (cVar1 != '\0') {
    FUN_011acfa0(param_1,param_2);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778));
  if (cVar1 != '\0') {
    FUN_011acff0(param_1,param_2);
  }
  *(undefined4 *)PTR_DAT_02004708 = 0x834;
  if (*(char *)(*(longlong *)(param_1 + 0x718) + 0xa9) != '\0') {
    local_31[0] = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                            (*(longlong **)(param_1 + 0x720));
    local_31[1] = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))
                            (*(longlong **)(param_1 + 0x728));
    local_31[2] = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))
                            (*(longlong **)(param_1 + 0x730));
    local_31[3] = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))
                            (*(longlong **)(param_1 + 0x738));
    local_2d = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))
                         (*(longlong **)(param_1 + 0x740));
    local_2c = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                         (*(longlong **)(param_1 + 0x748));
    local_2b = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))
                         (*(longlong **)(param_1 + 0x750));
    local_2a = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))
                         (*(longlong **)(param_1 + 0x758));
    local_29 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))
                         (*(longlong **)(param_1 + 0x760));
    *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x768) = 0;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0) + -1;
    iVar4 = 1;
    if (0 < iVar6) {
      do {
        iVar2 = FUN_0119a4f0(iVar4 + -1);
        if (local_31[iVar2] != '\0') {
          *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x7cc +
                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768) * 4) = iVar4 + -1;
          *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768) =
               *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768) + 1;
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  iVar4 = 1;
  puVar5 = (undefined8 *)PTR_DAT_020013a0;
  do {
    FUN_00414ad0(&PTR_DAT_01f2a648 + (8 - iVar4),*puVar5);
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 != 9);
  iVar4 = 0x100;
  puVar3 = &DAT_02107244;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768);
  iVar6 = 0;
  if (-1 < iVar4 + -1) {
    do {
      (&DAT_02107244)[*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x7cc + (longlong)iVar6 * 4)] = 1;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_011abdf0(param_1);
  return;
}

