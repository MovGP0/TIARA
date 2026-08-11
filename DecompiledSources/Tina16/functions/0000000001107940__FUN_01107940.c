/* Ghidra address: 01107940 */
/* Ghidra symbol: FUN_01107940 */


void FUN_01107940(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_01106ce0(param_1,param_2);
  lVar1 = FUN_004113f0(param_2,&PTR_FUN_01106460);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(lVar1 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar1 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar1 + 0x40);
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
            (*(longlong **)(param_1 + 0x50),*(undefined8 *)(lVar1 + 0x50));
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))
            (*(longlong **)(param_1 + 0x48),*(undefined8 *)(lVar1 + 0x48));
  return;
}

