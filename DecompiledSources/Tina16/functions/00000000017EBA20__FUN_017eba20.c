/* Ghidra address: 017eba20 */
/* Ghidra symbol: FUN_017eba20 */


void FUN_017eba20(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x9b1) != '\0') {
    iVar1 = FUN_017eb400(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x6c8) + 0x4a8));
    FUN_017eb590(param_1,iVar1);
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))
              (*(longlong **)(param_1 + 0x710),iVar1 != 5);
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))
              (*(longlong **)(param_1 + 0x718),iVar1 != 5);
  }
  return;
}

