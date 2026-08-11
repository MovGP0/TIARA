/* Ghidra address: 010a4ab0 */
/* Ghidra symbol: FUN_010a4ab0 */


void FUN_010a4ab0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_006ded30(*(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0x550));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x9d0) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x9d0) + 0x18))
                (*(longlong **)(param_1 + 0x9d0),local_30,iVar2);
      FUN_006def00(*(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0x550),0,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return;
}

