/* Ghidra address: 0146a9a0 */
/* Ghidra symbol: FUN_0146a9a0 */


void FUN_0146a9a0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_01a5eb60(*(undefined8 *)(param_1 + 0x8e0),param_2);
  if (*(char *)(*(longlong *)(param_2 + 0x90) + 0x98) == '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c0),0);
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c0),1);
  }
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x848),*(char *)(param_2 + 0x98) == '\x03');
  if (*(char *)(param_2 + 0x99) == '\0') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x760),1);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x768),0);
  }
  else if (*(char *)(param_2 + 0x99) == '\x01') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x760),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x768),1);
  }
  cVar1 = *(char *)(param_2 + 0xa0);
  if (cVar1 == '\0') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x770),1);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x778),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x780),0);
  }
  else if (cVar1 == '\x01') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x770),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x778),1);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x780),0);
  }
  else if (cVar1 == '\x02') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x770),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x778),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x780),1);
  }
  *(undefined1 *)(param_1 + 0x8d8) = 1;
  FUN_006d8180(*(undefined8 *)(param_1 + 0x7f0),1);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0xb8);
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x80));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4d8);
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0xa0));
  return;
}

