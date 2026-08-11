/* Ghidra address: 009586a0 */
/* Ghidra symbol: FUN_009586a0 */


undefined1 FUN_009586a0(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x38);
  }
  return uVar1;
}

