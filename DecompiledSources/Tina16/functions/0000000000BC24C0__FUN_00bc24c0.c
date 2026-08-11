/* Ghidra address: 00bc24c0 */
/* Ghidra symbol: FUN_00bc24c0 */


void FUN_00bc24c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    FUN_00bc2450(auStack_48,param_2,param_1 + 0x130);
    FUN_00414ad0(param_1 + 0xe8,param_2);
    uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe0) = uVar1;
  }
  else {
    FUN_00414ad0(param_1 + 0x130,param_2);
    FUN_00414480(param_1 + 0xe8);
    uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0xe0) = uVar1;
  }
  uVar1 = FUN_00416740();
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x130) + -4);
  }
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x138) = param_3;
  return;
}

