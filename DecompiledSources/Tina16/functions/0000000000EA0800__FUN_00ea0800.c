/* Ghidra address: 00ea0800 */
/* Ghidra symbol: FUN_00ea0800 */


ulonglong FUN_00ea0800(longlong param_1,longlong param_2,longlong param_3,int param_4,
                      undefined8 param_5,longlong param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort *local_38;
  ushort *local_30;
  
  if (((*(byte *)(param_1 + 10) & 8) == 0) && ((*(byte *)(param_1 + 0xd) & 4) == 0)) {
    uVar1 = FUN_00ea04d0();
    uVar2 = uVar1;
    if (0 < (int)uVar1) {
LAB_00ea088e:
      if (param_4 <= (int)uVar2) {
        return 0xfffffff9;
      }
      lVar3 = (longlong)*(int *)(param_3 + (longlong)(int)(uVar2 * 2) * 4);
      uVar4 = *(int *)(param_3 + (longlong)(int)(uVar2 * 2 + 1) * 4) - lVar3;
      if (param_7 <= (int)uVar4) {
        return 0xfffffffa;
      }
      FUN_00626670(param_6,param_2 + lVar3 * 2,uVar4 * 2);
      *(undefined2 *)(param_6 + (longlong)(int)uVar4 * 2) = 0;
      return uVar4 & 0xffffffff;
    }
  }
  else {
    uVar1 = FUN_00ea05b0(param_1,param_5,&local_30,&local_38);
    if ((int)uVar1 < 1) {
      return (ulonglong)uVar1;
    }
    uVar2 = (uint)*local_30;
    if (local_30 <= local_38) {
      do {
        if (((int)uVar2 < param_4) && (-1 < *(int *)(param_3 + (ulonglong)(uVar2 * 2) * 4))) break;
        uVar2 = (uint)local_30[(int)uVar1];
        local_30 = local_30 + (int)uVar1;
      } while (local_30 <= local_38);
    }
    uVar1 = 0;
    if (uVar2 != 0) goto LAB_00ea088e;
  }
  return (ulonglong)uVar1;
}

