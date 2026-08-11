/* Ghidra address: 011aa570 */
/* Ghidra symbol: FUN_011aa570 */


void FUN_011aa570(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_31 [4];
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  *(undefined1 *)(*(longlong *)PTR_DAT_02003af0 + 0x5fe8) = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x6d0) + 0xa9) != '\0') {
    local_31[0] = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))
                            (*(longlong **)(param_1 + 0x6d8));
    local_31[1] = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                            (*(longlong **)(param_1 + 0x6e0));
    local_31[2] = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))
                            (*(longlong **)(param_1 + 0x6e8));
    local_31[3] = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                            (*(longlong **)(param_1 + 0x6f0));
    local_2d = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))
                         (*(longlong **)(param_1 + 0x6f8));
    local_2c = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))
                         (*(longlong **)(param_1 + 0x700));
    local_2b = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                         (*(longlong **)(param_1 + 0x708));
    local_2a = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))
                         (*(longlong **)(param_1 + 0x710));
    local_29 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                         (*(longlong **)(param_1 + 0x718));
    *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x768) = 0;
    iVar3 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_020048c8 + 0x700) + 0x4e0) + -1;
    iVar2 = 1;
    if (0 < iVar3) {
      do {
        iVar1 = FUN_0119a4f0(iVar2 + -1);
        if (local_31[iVar1] != '\0') {
          *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x7cc +
                  (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768) * 4) = iVar2 + -1;
          *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768) =
               *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768) + 1;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

