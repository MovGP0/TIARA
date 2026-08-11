/* Ghidra address: 017eb780 */
/* Ghidra symbol: FUN_017eb780 */


void FUN_017eb780(longlong param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x9b1) = 1;
  iVar1 = FUN_017eb400(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x6c8) + 0x4a8));
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))
            (*(longlong **)(param_1 + 0x710),iVar1 != 5);
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))
            (*(longlong **)(param_1 + 0x718),iVar1 != 5);
  return;
}

