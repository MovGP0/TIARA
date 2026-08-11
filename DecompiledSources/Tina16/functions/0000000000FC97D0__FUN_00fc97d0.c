/* Ghidra address: 00fc97d0 */
/* Ghidra symbol: FUN_00fc97d0 */


void FUN_00fc97d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x724) = 0x20;
  }
  else {
    *(undefined4 *)(param_1 + 0x724) = 1;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x728) = 0x10000;
  }
  else {
    *(undefined4 *)(param_1 + 0x728) = 0x100;
  }
  FUN_00fc9140(param_1);
  return;
}

