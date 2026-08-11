/* Ghidra address: 00adcf10 */
/* Ghidra symbol: FUN_00adcf10 */


void FUN_00adcf10(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined8 *)
   (*(longlong *)
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0xe8) + 0x20) + 0x310) =
       0;
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1,*(undefined8 *)(param_1 + 0x238));
    FUN_00a9b900(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x68),
                 *(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x60,
                 *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x7c));
  }
  FUN_00a74cd0(*(undefined8 *)(param_1 + 0x238));
  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x60) = 0;
  FUN_00ac0ab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0xe8),0xb3);
  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x68) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x28);
  *(undefined1 *)(param_1 + 0x22f) = 0;
  return;
}

