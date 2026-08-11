/* Ghidra address: 010fc020 */
/* Ghidra symbol: FUN_010fc020 */


void FUN_010fc020(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0xb08) + 0x90))(*(longlong **)(param_1 + 0xb08));
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_30,iVar3);
      uVar2 = (**(code **)(*param_2 + 0x30))(param_2,iVar3);
      (**(code **)(**(longlong **)(param_1 + 0xb08) + 0x80))
                (*(longlong **)(param_1 + 0xb08),local_30[0],uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return;
}

