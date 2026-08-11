/* Ghidra address: 00fc0910 */
/* Ghidra symbol: FUN_00fc0910 */


void FUN_00fc0910(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  if (iVar1 < 4) {
    *(undefined4 *)(param_1 + 0x814) = 0;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(undefined4 *)(param_1 + 0x810) = uVar2;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(int *)(param_1 + 0x80c) = iVar1 + 5;
  }
  else {
    *(undefined4 *)(param_1 + 0x814) = 1;
    *(undefined4 *)(param_1 + 0x810) = 3;
    *(undefined4 *)(param_1 + 0x80c) = 9;
  }
  return;
}

