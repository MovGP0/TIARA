/* Ghidra address: 00c353d0 */
/* Ghidra symbol: FUN_00c353d0 */


void FUN_00c353d0(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (((int)param_2 < 0) || (0xffff < (int)param_2)) {
    param_2 = 0;
  }
  iVar1 = FUN_00c1aa10();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_00c2fce0(param_1[10],iVar5);
      lVar3 = FUN_00c2fce0(param_1[10],iVar5);
      uVar4 = (uint)*(ushort *)(lVar2 + 0x49) + (uint)*(ushort *)(lVar3 + 0x4d);
      if ((int)param_2 < (int)uVar4) {
        param_2 = uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_2 != *(ushort *)(param_1[0xb] + 0x10)) {
    FUN_00c35490(param_1);
    *(short *)(param_1[0xb] + 0x10) = (short)param_2;
    FUN_00c34e10(param_1);
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

