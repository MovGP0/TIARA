/* Ghidra address: 01bb78e0 */
/* Ghidra symbol: FUN_01bb78e0 */


void FUN_01bb78e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x90))(*(longlong **)(param_1 + 0x6e8));
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    lVar1 = FUN_0198d430(*(longlong *)(param_1 + 0x6f0));
    if (lVar1 != 0) {
      FUN_01994230(*(undefined8 *)(param_1 + 0x6f0));
    }
  }
  FUN_01bb5f00(param_1,*(undefined8 *)(param_2 + 0x10));
  return;
}

