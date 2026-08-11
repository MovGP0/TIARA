/* Ghidra address: 00ea0c80 */
/* Ghidra symbol: FUN_00ea0c80 */


ulonglong FUN_00ea0c80(longlong param_1,longlong param_2,longlong param_3,int param_4,
                      undefined8 param_5,longlong *param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort *local_40;
  ushort *local_38;
  
  if (((*(byte *)(param_1 + 10) & 8) == 0) && ((*(byte *)(param_1 + 0xd) & 4) == 0)) {
    uVar1 = FUN_00ea04d0();
    uVar2 = uVar1;
    if (0 < (int)uVar1) {
LAB_00ea0d0e:
      uVar4 = 0xfffffff9;
      if ((int)uVar2 < param_4) {
        uVar4 = (longlong)*(int *)(param_3 + (longlong)(int)(uVar2 * 2 + 1) * 4) -
                (longlong)*(int *)(param_3 + (longlong)(int)(uVar2 * 2) * 4);
        lVar3 = (*(code *)PTR_FUN_01edf908)((longlong)((int)uVar4 * 2 + 2));
        if (lVar3 == 0) {
          uVar4 = 0xfffffffa;
        }
        else {
          FUN_00626670(lVar3,param_2 + (longlong)*(int *)(param_3 + (longlong)(int)(uVar2 * 2) * 4)
                                       * 2,(longlong)((int)uVar4 * 2));
          *(undefined2 *)(lVar3 + uVar4 * 2) = 0;
          *param_6 = lVar3;
        }
      }
      goto LAB_00ea0d75;
    }
  }
  else {
    uVar1 = FUN_00ea05b0(param_1,param_5,&local_38,&local_40);
    uVar4 = (ulonglong)uVar1;
    if ((int)uVar1 < 1) goto LAB_00ea0d75;
    uVar2 = (uint)*local_38;
    if (local_38 <= local_40) {
      do {
        if (((int)uVar2 < param_4) && (-1 < *(int *)(param_3 + (ulonglong)(uVar2 * 2) * 4))) break;
        uVar2 = (uint)local_38[(int)uVar1];
        local_38 = local_38 + (int)uVar1;
      } while (local_38 <= local_40);
    }
    uVar1 = 0;
    if (uVar2 != 0) goto LAB_00ea0d0e;
  }
  uVar4 = (ulonglong)uVar1;
LAB_00ea0d75:
  return uVar4 & 0xffffffff;
}

