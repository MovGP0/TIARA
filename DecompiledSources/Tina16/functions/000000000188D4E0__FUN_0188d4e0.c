/* Ghidra address: 0188d4e0 */
/* Ghidra symbol: FUN_0188d4e0 */


void FUN_0188d4e0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_004b67b0(*(undefined8 *)(param_1 + 200),1);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 200) + 0x18))
                (*(longlong **)(param_1 + 200),local_30,iVar3);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x30))
                        (*(longlong **)(param_1 + 200),iVar3);
      FUN_0188d450(param_1,local_30[0],uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return;
}

