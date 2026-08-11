/* Ghidra address: 01528410 */
/* Ghidra symbol: FUN_01528410 */


void FUN_01528410(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x720);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(lVar1 + 0x8a0));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6f0),*(undefined8 *)(lVar1 + 0x8a8));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x6f8),*(undefined2 *)(lVar1 + 0x8b0));
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))
            (*(longlong **)(param_1 + 0x710),*(undefined1 *)(lVar1 + 0x8b2));
  FUN_0064cf60(param_1,0x44e);
  return;
}

