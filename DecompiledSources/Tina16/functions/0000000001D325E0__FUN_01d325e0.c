/* Ghidra address: 01d325e0 */
/* Ghidra symbol: FUN_01d325e0 */


void FUN_01d325e0(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  uVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  FUN_01d31740(param_1,uVar1);
  iVar2 = (**(code **)(*param_2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_30,iVar3);
      FUN_01d31630(param_1,local_30[0]);
      uVar1 = (**(code **)(*param_2 + 0x30))(param_2,iVar3);
      FUN_01d31740(param_1,uVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_30);
  return;
}

