/* Ghidra address: 00cb98a0 */
/* Ghidra symbol: FUN_00cb98a0 */


void FUN_00cb98a0(longlong *param_1)

{
  longlong lVar1;
  
  FUN_00cac2c0(param_1);
  if (param_1[0x2b] == 0) {
    lVar1 = FUN_00c8f850(&PTR_FUN_00c8d880,1,0);
    param_1[0x2b] = lVar1;
  }
  else {
    FUN_00c8fb90(param_1[0x2b],1);
  }
  lVar1 = param_1[0x2b];
  *(undefined2 *)(lVar1 + 0x18) = *(undefined2 *)((longlong)param_1 + 0x16c);
  *(undefined2 *)(lVar1 + 0x1a) = *(undefined2 *)((longlong)param_1 + 0x16a);
  if ((param_1[0x20] != 0) && (0 < (int)param_1[0x25])) {
    (**(code **)(*param_1 + 0x1d0))(param_1);
  }
  return;
}

