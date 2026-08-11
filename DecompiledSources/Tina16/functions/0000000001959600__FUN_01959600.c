/* Ghidra address: 01959600 */
/* Ghidra symbol: FUN_01959600 */


void FUN_01959600(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_6 == 0) {
    param_6 = 1;
  }
  uVar1 = (longlong)-param_6 / 2 & 0xffffffff;
  iVar4 = param_6 / 2 - (uint)(param_6 % 2 == 0);
  iVar5 = (int)((longlong)-param_6 / 2);
  if (iVar5 <= iVar4) {
    iVar5 = (iVar4 - iVar5) + 1;
    do {
      uVar2 = param_4 - param_2 >> 0x1f;
      uVar3 = param_5 - param_3 >> 0x1f;
      iVar4 = (int)uVar1;
      if ((int)((param_5 - param_3 ^ uVar3) - uVar3) < (int)((param_4 - param_2 ^ uVar2) - uVar2)) {
        (**(code **)(**(longlong **)(param_1 + 0x88) + 200))
                  (*(longlong **)(param_1 + 0x88),param_2,param_3 + iVar4);
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0xc0))
                  (*(longlong **)(param_1 + 0x88),param_4,param_5 + iVar4);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x88) + 200))
                  (*(longlong **)(param_1 + 0x88),param_2 + iVar4,param_3);
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0xc0))
                  (*(longlong **)(param_1 + 0x88),param_4 + iVar4,param_5);
      }
      uVar1 = (ulonglong)(iVar4 + 1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

