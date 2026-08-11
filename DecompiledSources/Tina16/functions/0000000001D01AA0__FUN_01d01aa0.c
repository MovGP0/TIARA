/* Ghidra address: 01d01aa0 */
/* Ghidra symbol: FUN_01d01aa0 */


void FUN_01d01aa0(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(ushort *)(param_1 + 0x1e) != param_2) {
    if (param_1[0x1c] != 0) {
      iVar1 = (**(code **)(*param_1 + 0x1d0))();
      iVar3 = 0;
      if (-1 < iVar1 + -1) {
        do {
          FUN_00410f20(*(undefined8 *)(param_1[0x1c] + (longlong)iVar3 * 8));
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar1 = (**(code **)(*param_1 + 0x1d0))(param_1);
      FUN_004095f0(param_1[0x1c],(longlong)(iVar1 << 3));
    }
    param_1[0x1c] = 0;
    *(short *)(param_1 + 0x1e) = (short)param_2;
    if ((short)param_2 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x1d0))(param_1);
      FUN_00b909a0(param_1 + 0x1c,iVar1 << 3);
      if (param_1[0x1c] != 0) {
        iVar1 = (**(code **)(*param_1 + 0x1d0))();
        iVar3 = 0;
        if (-1 < iVar1 + -1) {
          do {
            uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
            *(undefined8 *)(param_1[0x1c] + (longlong)iVar3 * 8) = uVar2;
            iVar3 = iVar3 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
    }
  }
  return;
}

