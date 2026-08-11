/* Ghidra address: 019bb290 */
/* Ghidra symbol: FUN_019bb290 */


void FUN_019bb290(longlong param_1)

{
  undefined8 uVar1;
  
  if ((0 < *(int *)(param_1 + 0x4bc)) && (*(char *)(param_1 + 0x4c8) != '\0')) {
    if ((*(longlong *)(param_1 + 0x78) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x78) + 0x478) != '\0')) {
      uVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4c0));
      uVar1 = FUN_005ffa40(uVar1);
      FUN_006487e0(param_1,uVar1);
    }
    uVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4c0));
    uVar1 = FUN_005ffa40(uVar1);
    FUN_019bab40(param_1,uVar1,0);
    if (*(char *)(param_1 + 0x498) != '\0') {
      uVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4c0));
      FUN_007d6c70(*(undefined8 *)(param_1 + 0x4b0),uVar1,0,0,*(undefined4 *)(param_1 + 0x4a0),1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0x88))
              (*(longlong **)(param_1 + 0x490),0,0,*(undefined8 *)(param_1 + 0x4c0));
  }
  return;
}

