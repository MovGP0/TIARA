/* Ghidra address: 0195aad0 */
/* Ghidra symbol: FUN_0195aad0 */


void FUN_0195aad0(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = *(longlong **)(param_1 + 0x288);
  if (param_6 == 0) {
    param_6 = 1;
  }
  uVar2 = (longlong)-param_6 / 2 & 0xffffffff;
  iVar5 = param_6 / 2 - (uint)(param_6 % 2 == 0);
  iVar6 = (int)((longlong)-param_6 / 2);
  if (iVar6 <= iVar5) {
    iVar6 = (iVar5 - iVar6) + 1;
    do {
      uVar3 = param_4 - param_2 >> 0x1f;
      uVar4 = param_5 - param_3 >> 0x1f;
      iVar5 = (int)uVar2;
      if ((int)((param_5 - param_3 ^ uVar4) - uVar4) < (int)((param_4 - param_2 ^ uVar3) - uVar3)) {
        (**(code **)(*plVar1 + 200))(plVar1,param_2,param_3 + iVar5);
        (**(code **)(*plVar1 + 0xc0))(plVar1,param_4,param_5 + iVar5);
      }
      else {
        (**(code **)(*plVar1 + 200))(plVar1,param_2 + iVar5,param_3);
        (**(code **)(*plVar1 + 0xc0))(plVar1,param_4 + iVar5,param_5);
      }
      uVar2 = (ulonglong)(iVar5 + 1);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

