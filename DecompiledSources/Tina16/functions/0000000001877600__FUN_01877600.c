/* Ghidra address: 01877600 */
/* Ghidra symbol: FUN_01877600 */


void FUN_01877600(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  cVar1 = (**(code **)*param_1)(param_1);
  if (cVar1 == '\0') {
    if (param_2 <= param_3) {
      iVar4 = (param_3 - param_2) + 1;
      do {
        uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
        iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
        FUN_0042a210(uVar3,(longlong)iVar2,0xff);
        param_2 = param_2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (param_2 <= param_3) {
    iVar4 = (param_3 - param_2) + 1;
    do {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
      FUN_0042a230(uVar3,(longlong)iVar2);
      param_2 = param_2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

