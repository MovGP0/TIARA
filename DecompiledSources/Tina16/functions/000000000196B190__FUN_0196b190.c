/* Ghidra address: 0196b190 */
/* Ghidra symbol: FUN_0196b190 */


void FUN_0196b190(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_0196a500(param_1);
  FUN_007ff680(*(undefined8 *)(param_1 + 0x180),*(undefined1 *)(param_1 + 0x168));
  FUN_007ffc60(*(undefined8 *)(param_1 + 0x180),0);
  plVar1 = *(longlong **)(param_1 + 0x180);
  plVar1[0xdc] = param_1;
  plVar1[0xdb] = (longlong)FUN_0196a6a0;
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_007ffc60(*(undefined8 *)(param_1 + 0x180),3);
  return;
}

