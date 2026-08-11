/* Ghidra address: 004192d0 */
/* Ghidra symbol: FUN_004192d0 */


void FUN_004192d0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                 longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = 0;
  if (param_2 != 0) {
    if (param_4 < 0) {
      param_5 = param_5 + param_4;
      param_4 = 0;
    }
    lVar3 = *(longlong *)(param_2 + -8);
    if (lVar3 < param_4) {
      param_4 = lVar3;
    }
    if (lVar3 - param_4 < param_5) {
      param_5 = lVar3 - param_4;
    }
    if (param_5 < 0) {
      param_5 = 0;
    }
    if (0 < param_5) {
      lVar2 = param_3 + (ulonglong)*(byte *)(param_3 + 1);
      plVar1 = *(longlong **)(lVar2 + 6);
      if (plVar1 == (longlong *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *plVar1;
      }
      lVar4 = (longlong)*(int *)(lVar2 + 2);
      lVar5 = param_5 * lVar4;
      lVar2 = FUN_004095c0(lVar5 + 0x10);
      *(undefined4 *)(lVar2 + 4) = 1;
      *(longlong *)(lVar2 + 8) = param_5;
      lVar2 = lVar2 + 0x10;
      param_2 = param_2 + param_4 * lVar4;
      if (0 < param_5) {
        if (lVar3 == 0) {
          FUN_00409a70(param_2,lVar2,lVar5);
        }
        else {
          FUN_0040d200(lVar2,lVar5,0);
          FUN_00418240(lVar2,param_2,lVar3,param_5);
        }
      }
    }
  }
  FUN_00419430(param_1,param_3);
  *param_1 = lVar2;
  return;
}

