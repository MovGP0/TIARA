/* Ghidra address: 0177d560 */
/* Ghidra symbol: FUN_0177d560 */


void FUN_0177d560(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  FUN_00724420(param_1,param_2);
  if (*(longlong *)(param_1 + 0x408) != 0) {
    FUN_007e2d20(*(longlong *)(param_1 + 0x408),0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x400) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_0177d540(param_1,&local_30);
      uVar3 = local_30;
      (**(code **)(**(longlong **)(param_1 + 0x400) + 0x18))
                (*(longlong **)(param_1 + 0x400),&local_38,iVar4);
      iVar2 = FUN_0044fdb0(uVar3,local_38,0);
      if (iVar2 == 0) {
        uVar3 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x3f8) + 0x80),iVar4);
        FUN_007e2d20(uVar3,1);
        uVar3 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x3f8) + 0x80),iVar4);
        *(undefined8 *)(param_1 + 0x408) = uVar3;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_38,2);
  return;
}

