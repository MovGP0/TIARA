/* Ghidra address: 007e2da0 */
/* Ghidra symbol: FUN_007e2da0 */


void FUN_007e2da0(longlong *param_1,byte param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(byte *)((longlong)param_1 + 0x81) == param_2) {
    return;
  }
  *(byte *)((longlong)param_1 + 0x81) = param_2;
  iVar1 = FUN_0044f060();
  if (((iVar1 != 2) || (iVar1 = FUN_007e2ef0(param_1), iVar1 == 0)) &&
     ((param_1[0x19] == 0 || (*(longlong *)(param_1[0x19] + 0xd8) == 0)))) {
    if ((param_1[0x19] != 0) && ((*(ushort *)((longlong)param_1 + 0x34) & 2) == 0)) {
      uVar2 = FUN_007de060(param_1[0x19]);
      thunk_FUN_04048b08(uVar2,(short)param_1[0x15],
                         *(undefined4 *)(&DAT_01e12f94 + (ulonglong)param_2 * 4));
    }
    (**(code **)(*param_1 + 0xa0))(param_1,0);
    return;
  }
  (**(code **)(*param_1 + 0xa0))(param_1,1);
  return;
}

