/* Ghidra address: 00785ef0 */
/* Ghidra symbol: FUN_00785ef0 */


undefined8 FUN_00785ef0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  FUN_00414480(param_2);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_00416db0(param_3,L"Caption");
    if ((iVar1 == 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x10),param_2);
    }
    lVar2 = FUN_00589ef0(*(undefined8 *)(**(longlong **)(param_1 + 0x10) + -0xa8),param_3);
    if (lVar2 != 0) {
      FUN_0058ce80(param_2,*(undefined8 *)(param_1 + 0x10),lVar2);
    }
  }
  return param_2;
}

