/* Ghidra address: 007d7580 */
/* Ghidra symbol: FUN_007d7580 */


void FUN_007d7580(longlong *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_3 < param_2) {
    if (param_3 <= param_2 + -1) {
      iVar3 = ((param_2 + -1) - param_3) + 1;
      do {
        uVar1 = FUN_007d56e0(param_1);
        uVar2 = FUN_007d56e0(param_1);
        thunk_FUN_041cfc68(uVar1,param_3,uVar2,param_2,1);
        param_3 = param_3 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if ((param_2 < param_3) && (param_2 + 1 <= param_3)) {
    iVar3 = ((param_2 + 1) - param_3) + -1;
    do {
      uVar1 = FUN_007d56e0(param_1);
      uVar2 = FUN_007d56e0(param_1);
      thunk_FUN_041cfc68(uVar1,param_3,uVar2,param_2,1);
      param_3 = param_3 + -1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0);
  }
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}

