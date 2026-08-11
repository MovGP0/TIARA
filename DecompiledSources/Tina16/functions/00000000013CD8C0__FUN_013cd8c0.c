/* Ghidra address: 013cd8c0 */
/* Ghidra symbol: FUN_013cd8c0 */


void FUN_013cd8c0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))(*(longlong **)(param_1 + 0x728));
  if (param_3 == '\0') {
    FUN_0074b490(*(undefined8 *)(param_1 + 0x870),0);
  }
  else {
    FUN_0074b490(*(undefined8 *)(param_1 + 0x870),1);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x870) + 0x4a8) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x8d0);
    FUN_00414ad0(param_1 + 0x8a8,&DAT_013cd974);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x8c8);
    FUN_00414ad0(param_1 + 0x8a8,L".ipr");
  }
  FUN_013cd9a0(param_1,uVar1);
  FUN_013cd830(param_1);
  return;
}

