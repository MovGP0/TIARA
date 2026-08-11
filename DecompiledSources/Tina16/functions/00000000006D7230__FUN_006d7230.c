/* Ghidra address: 006d7230 */
/* Ghidra symbol: FUN_006d7230 */


void FUN_006d7230(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  lVar1 = param_1[0xa6];
  plVar3 = (longlong *)FUN_006d6380(param_1);
  (**(code **)(*plVar3 + 0x98))(plVar3,param_3);
  if (param_2 == lVar1) {
    plVar3 = (longlong *)FUN_006d6380(param_1);
    iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (iVar2 <= param_3) {
      plVar3 = (longlong *)FUN_006d6380(param_1);
      param_3 = (**(code **)(*plVar3 + 0x28))(plVar3);
      param_3 = param_3 + -1;
    }
    (**(code **)(*param_1 + 0x278))(param_1,param_3);
  }
  (**(code **)(*param_1 + 0x280))(param_1);
  return;
}

