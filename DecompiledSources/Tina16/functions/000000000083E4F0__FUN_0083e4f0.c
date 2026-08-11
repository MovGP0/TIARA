/* Ghidra address: 0083e4f0 */
/* Ghidra symbol: FUN_0083e4f0 */


void FUN_0083e4f0(longlong *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*param_2 == 7) {
    lVar4 = FUN_007f9b70(param_1,1);
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_007f9b70(param_1,1);
      cVar1 = (**(code **)(*plVar5 + 0x2c8))(plVar5,param_1[0xa1]);
      if (cVar1 == '\0') {
        return;
      }
    }
    (**(code **)(*param_1 + -0x40))(param_1,param_2);
  }
  else {
    if (*param_2 == 0x201) {
      iVar2 = thunk_FUN_041c61bd();
      uVar3 = thunk_FUN_03a8bf3f();
      if ((uint)(iVar2 - (int)param_1[0xa2]) < uVar3) {
        *param_2 = 0x203;
      }
      *(undefined4 *)(param_1 + 0xa2) = 0;
    }
    FUN_00656570(param_1,param_2);
  }
  return;
}

