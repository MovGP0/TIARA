/* Ghidra address: 00bf2e10 */
/* Ghidra symbol: FUN_00bf2e10 */


int FUN_00bf2e10(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  lVar1 = *param_5;
  FUN_00bf2d90(param_1,param_2,param_3,param_4,param_5);
  param_4 = param_4 - (int)((*param_5 - lVar1) / 2);
  uVar3 = FUN_00c09df0(*(undefined8 *)(param_1 + 0x110),(*param_5 - lVar1) % 2);
  if ((uVar3 & 0x4000000) == 0) {
    iVar2 = 0;
    iVar4 = param_4;
    if (-1 < param_4 + -1) {
      do {
        *(undefined2 *)(*param_5 + (longlong)iVar2 * 2) = 0x20;
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *param_5 = *param_5 + (longlong)param_4 * 2;
    param_4 = 0;
  }
  return param_4;
}

