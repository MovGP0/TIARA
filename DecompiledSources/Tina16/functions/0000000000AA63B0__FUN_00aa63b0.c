/* Ghidra address: 00aa63b0 */
/* Ghidra symbol: FUN_00aa63b0 */


void FUN_00aa63b0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x270);
  if (lVar1 != 0) {
    if (param_2 == '\0') {
      FUN_00a956b0(lVar1,1);
    }
    else {
      FUN_00a956b0(lVar1,2);
    }
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x180))(*(longlong **)(param_1 + 0xc0));
  }
  return;
}

