/* Ghidra address: 00976450 */
/* Ghidra symbol: FUN_00976450 */


void FUN_00976450(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_004113f0(*(undefined8 *)(*(longlong *)(param_2 + 0x110) + 0x80),&PTR_FUN_0090eed0);
  (**(code **)(**(longlong **)(lVar1 + 0x130) + 0x78))
            (*(longlong **)(lVar1 + 0x130),*(undefined1 *)(param_2 + 0xcf));
  return;
}

