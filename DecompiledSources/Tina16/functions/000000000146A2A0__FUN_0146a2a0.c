/* Ghidra address: 0146a2a0 */
/* Ghidra symbol: FUN_0146a2a0 */


void FUN_0146a2a0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_0064cf60(param_1,0x20b);
  FUN_007e8920(*(undefined8 *)(param_1 + 0x740),0x20d);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c0),0);
  *(undefined1 *)(param_1 + 0x8d8) = 1;
  FUN_006d8180(*(undefined8 *)(param_1 + 0x7f0),1);
  uVar3 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
  *(undefined8 *)(param_1 + 0x8e0) = uVar3;
  FUN_0146a1d0(param_1,param_1 + 0x8e0);
  lVar2 = *(longlong *)(param_1 + 0x8e0);
  cVar1 = *(char *)(lVar2 + 0x99);
  if (cVar1 == '\0') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x760),1);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x768),0);
  }
  else if (cVar1 == '\x01') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x760),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x768),1);
  }
  cVar1 = *(char *)(lVar2 + 0xa0);
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
  FUN_007fdf10(param_1,0x118);
  FUN_007fded0(param_1,0x195);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x700),
               *(int *)(*(longlong *)(param_1 + 0x708) + 0x90) * 2 +
               *(int *)(*(longlong *)(param_1 + 0x708) + 0x98));
  return;
}

