/* Ghidra address: 010a57a0 */
/* Ghidra symbol: FUN_010a57a0 */


void FUN_010a57a0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_01645a50(*(undefined8 *)(param_1 + 0x1a70));
  uVar1 = FUN_01645a30(*(undefined8 *)(param_1 + 0x1a70));
  *(undefined4 *)(param_1 + 0x980) = uVar1;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa00) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0xa00) + 0x18))
                (*(longlong **)(param_1 + 0xa00),local_30,iVar3);
      FUN_016496b0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a70) + 0x78),local_30[0]);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_010a3d40(param_1);
  FUN_0064cbf0(param_1,*(int *)(param_1 + 0x98) + -1);
  FUN_0064cbf0(param_1,*(int *)(param_1 + 0x98) + 1);
  FUN_00414480(local_30);
  return;
}

