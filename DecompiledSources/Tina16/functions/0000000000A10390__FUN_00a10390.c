/* Ghidra address: 00a10390 */
/* Ghidra symbol: FUN_00a10390 */


ulonglong FUN_00a10390(longlong param_1,ulonglong param_2,int param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  if (param_3 < param_5) {
    iVar3 = FUN_00a10240(param_1,param_2,param_3,param_5);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    param_2 = (ulonglong)*(uint *)(param_1 + 0x10);
    param_3 = *(int *)(param_1 + 0x14);
  }
  param_3 = param_3 - param_5;
  uVar6 = (1 << ((byte)param_5 & 0x1f)) - 1U & (int)param_2 >> ((byte)param_3 & 0x1f);
  lVar5 = (longlong)param_5;
  if (*(int *)(param_4 + lVar5 * 4) < (int)uVar6) {
    do {
      if (param_3 < 1) {
        iVar3 = FUN_00a10240(param_1,param_2,param_3,1);
        if (iVar3 == 0) {
          return 0xffffffff;
        }
        param_2 = (ulonglong)*(uint *)(param_1 + 0x10);
        param_3 = *(int *)(param_1 + 0x14);
      }
      param_3 = param_3 + -1;
      uVar6 = (uint)param_2 >> ((byte)param_3 & 0x1f) & 1 | uVar6 * 2;
      lVar1 = lVar5 * 4;
      lVar5 = lVar5 + 1;
    } while (*(int *)(param_4 + 4 + lVar1) < (int)uVar6);
    param_5 = (int)lVar5;
  }
  *(int *)(param_1 + 0x10) = (int)param_2;
  *(int *)(param_1 + 0x14) = param_3;
  if (param_5 < 0x11) {
    uVar4 = (ulonglong)
            *(byte *)(*(longlong *)(param_4 + 0x90) + 0x11 +
                     (longlong)(int)uVar6 + (longlong)*(int *)(param_4 + 0x48 + lVar5 * 4));
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x18);
    lVar5 = *plVar2;
    *(undefined4 *)(lVar5 + 0x28) = 0x76;
    (**(code **)(lVar5 + 8))(plVar2,0xffffffff);
    uVar4 = 0;
  }
  return uVar4;
}

