/* Ghidra address: 01475b20 */
/* Ghidra symbol: FUN_01475b20 */


void FUN_01475b20(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x6e8) = *param_2;
  *(undefined1 *)(param_1 + 0x6e0) = param_3;
  *(undefined4 *)(param_1 + 0x6e4) = param_4;
  (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))
            (*(longlong **)(param_1 + 0x6c8),*(undefined1 *)(param_1 + 0x6e0));
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))
            (*(longlong **)(param_1 + 0x6d0),*(undefined1 *)(param_1 + 0x6e8));
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6d8),param_4);
  return;
}

