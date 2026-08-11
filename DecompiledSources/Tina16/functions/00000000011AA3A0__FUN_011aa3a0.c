/* Ghidra address: 011aa3a0 */
/* Ghidra symbol: FUN_011aa3a0 */


void FUN_011aa3a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(*(longlong *)PTR_DAT_02003af0 + 0x5fe8) = 0;
  *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x768) = 0;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d0),0);
  iVar2 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_020048c8 + 0x700) + 0x4e0) + -1;
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x7cc +
              (longlong)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768) * 4) = iVar1 + -1;
      *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768) =
           *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768) + 1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

