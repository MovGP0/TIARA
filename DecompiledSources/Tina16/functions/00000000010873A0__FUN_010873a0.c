/* Ghidra address: 010873a0 */
/* Ghidra symbol: FUN_010873a0 */


void FUN_010873a0(longlong *param_1)

{
  *(int *)(*(longlong *)PTR_DAT_02004030 + 0xf4) = (int)param_1[0x98c];
  *(undefined4 *)(*(longlong *)PTR_DAT_02004030 + 0xf0) =
       *(undefined4 *)((longlong)param_1 + 0x4c64);
  if (*(char *)((longlong)param_1 + 0xb52) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x4c36) = 1;
    (**(code **)(*param_1 + 0x348))(param_1,1);
    FUN_010870a0(param_1);
    *(int *)(PTR_DAT_020030c0 + 0x10) = (int)param_1[0x13];
    *(undefined4 *)(PTR_DAT_020030c0 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x9c);
  }
  return;
}

