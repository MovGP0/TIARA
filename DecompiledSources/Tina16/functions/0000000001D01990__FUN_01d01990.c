/* Ghidra address: 01d01990 */
/* Ghidra symbol: FUN_01d01990 */


void FUN_01d01990(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(ushort *)((longlong)param_1 + 0xee) != param_2) {
    lVar1 = param_1[0x1b];
    if (lVar1 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x1c8))(param_1);
      FUN_004095f0(lVar1,(longlong)(iVar2 * 0x10c));
    }
    param_1[0x1b] = 0;
    *(short *)((longlong)param_1 + 0xee) = (short)param_2;
    if ((short)param_2 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x1c8))(param_1);
      FUN_00b909a0(param_1 + 0x1b,iVar2 * 0x10c);
      lVar1 = param_1[0x1b];
      if (lVar1 != 0) {
        iVar2 = (**(code **)(*param_1 + 0x1c8))(param_1);
        FUN_0040d200(lVar1,(longlong)(iVar2 * 0x10c),0xff);
      }
      (**(code **)(*(longlong *)param_1[0xa1] + 0x90))((longlong *)param_1[0xa1]);
      if (0 < (int)param_2) {
        do {
          (**(code **)(*(longlong *)param_1[0xa1] + 0x78))((longlong *)param_1[0xa1],&DAT_01d01a9c);
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
    }
  }
  return;
}

