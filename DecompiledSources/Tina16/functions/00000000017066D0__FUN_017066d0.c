/* Ghidra address: 017066d0 */
/* Ghidra symbol: FUN_017066d0 */


void FUN_017066d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (0 < iVar2) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(int *)(param_1 + 0x730) = iVar2;
    if (iVar2 != -1) {
      (**(code **)(**(longlong **)(param_1 + 0x710) + 0x18))
                (*(longlong **)(param_1 + 0x710),local_20,iVar2);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0xb0))
                        (*(longlong **)(param_1 + 0x708),local_20[0]);
      *(undefined4 *)(param_1 + 0x730) = uVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x508) = 1;
  FUN_00414480(local_20);
  return;
}

