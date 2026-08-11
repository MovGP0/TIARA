/* Ghidra address: 004bad70 */
/* Ghidra symbol: FUN_004bad70 */


void FUN_004bad70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  
  uVar2 = thunk_FUN_040ef657(param_2,param_3,param_4);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_004bac90(auStack_48);
  }
  uVar2 = thunk_FUN_03bea8e6(param_2,*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_004bac90(auStack_48);
  }
  uVar2 = thunk_FUN_03f32752(*(undefined8 *)(param_1 + 0x28));
  uVar1 = thunk_FUN_03cf4f86(param_2,*(undefined8 *)(param_1 + 0x20));
  FUN_004b9c20(param_1,uVar2,uVar1);
  return;
}

