/* Ghidra address: 008041b0 */
/* Ghidra symbol: FUN_008041b0 */


void FUN_008041b0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_0065d670(param_1,param_2);
  if (((((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) && (param_1[0xf] != 0)) &&
      (param_1[0xa0] != 0)) && (*(longlong *)(param_1[0xa0] + 0x80) != 0)) {
    iVar3 = FUN_007e2ef0(*(undefined8 *)(param_1[0xa0] + 0x80));
    if (0 < iVar3) {
      lVar2 = *(longlong *)(param_2 + 0x10);
      iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,0xf);
      piVar1 = (int *)(lVar2 + 4);
      *piVar1 = *piVar1 + iVar3;
    }
  }
  return;
}

