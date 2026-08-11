/* Ghidra address: 008038e0 */
/* Ghidra symbol: FUN_008038e0 */


void FUN_008038e0(longlong *param_1,longlong param_2)

{
  if (((*(ulonglong *)(param_2 + 8) & 0xfff0) == 0xf020) &&
     (*(longlong **)(DAT_02012668 + 0xa8) == param_1)) {
    FUN_0080b490(DAT_02012668,param_2);
  }
  else if (((*(ulonglong *)(param_2 + 8) & 0xfff0) != 0xf010) ||
          ((((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0 ||
            (*(char *)((longlong)param_1 + 0xad) == '\0')) ||
           (*(char *)((longlong)param_1 + 0x4d2) == '\x01')))) {
    FUN_00659c40(param_1,param_2);
  }
  if ((((*(ulonglong *)(param_2 + 8) & 0xfff0) == 0xf020) ||
      ((*(ulonglong *)(param_2 + 8) & 0xfff0) == 0xf120)) &&
     (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0 &&
      (*(char *)((longlong)param_1 + 0xad) != '\0')))) {
    (**(code **)(*param_1 + 0x108))(param_1);
  }
  return;
}

