/* Ghidra address: 00f953a0 */
/* Ghidra symbol: FUN_00f953a0 */


void FUN_00f953a0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0));
  if ((((iVar1 == 4) ||
       (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                          (*(longlong **)(param_1 + 0x6f0)), iVar1 == 8)) ||
      (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                         (*(longlong **)(param_1 + 0x6f0)), iVar1 == 9)) ||
     (((iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                          (*(longlong **)(param_1 + 0x6f0)), iVar1 == 10 ||
       (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                          (*(longlong **)(param_1 + 0x6f0)), iVar1 == 0xb)) ||
      ((iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                          (*(longlong **)(param_1 + 0x6f0)), iVar1 == 0xc ||
       (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                          (*(longlong **)(param_1 + 0x6f0)), iVar1 == 0xd)))))) {
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),L"<disabled>");
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),1);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),local_20);
    iVar1 = FUN_00416db0(local_20[0],L"<disabled>");
    if (iVar1 == 0) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),&LAB_00f955b8);
    }
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0));
  *(undefined4 *)(param_1 + 0x6fc) = uVar2;
  FUN_00414480(local_20);
  return;
}

