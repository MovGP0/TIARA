/* Ghidra address: 00aa66d0 */
/* Ghidra symbol: FUN_00aa66d0 */


void FUN_00aa66d0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 700) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x298) + 0x90))(*(longlong **)(param_1 + 0x298));
    (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x10))(*(longlong **)(param_1 + 0x2a0));
    (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x10))(*(longlong **)(param_1 + 0x2d0));
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  if ((*(char *)(param_1 + 0x1b0) != '\0') && (*(longlong *)(param_1 + 0x1a8) != 0)) {
    FUN_00a2a110(*(undefined8 *)(param_1 + 0x2a8),*(undefined8 *)(param_1 + 0x1a8));
  }
  FUN_00414480(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0x10))(*(longlong **)(param_1 + 0x1c0));
  uVar1 = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x228) = 0;
  FUN_00410f20(uVar1);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x220) + 0x10))(*(longlong **)(param_1 + 0x220));
  (**(code **)(**(longlong **)(param_1 + 0x240) + 0x90))(*(longlong **)(param_1 + 0x240));
  plVar2 = *(longlong **)(param_1 + 600);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x238) + 0x10))(*(longlong **)(param_1 + 0x238));
  if (*(char *)(param_1 + 700) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x280) + 0x90))(*(longlong **)(param_1 + 0x280));
    *(undefined1 *)(*(longlong *)(param_1 + 0x280) + 0x90) = *(undefined1 *)(param_1 + 0x60);
  }
  plVar2 = *(longlong **)(param_1 + 0x2c0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x90))(plVar2);
  }
  FUN_004ae840(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x10))(*(longlong **)(param_1 + 0x1b8));
  plVar2 = *(longlong **)(param_1 + 0x230);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return;
}

