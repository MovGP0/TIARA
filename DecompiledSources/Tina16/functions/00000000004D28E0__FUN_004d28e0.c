/* Ghidra address: 004d28e0 */
/* Ghidra symbol: FUN_004d28e0 */


void FUN_004d28e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong local_78 [2];
  longlong local_68;
  longlong local_30;
  
  *(undefined8 *)(param_2 + 8) = 0;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (0 < *(int *)(lVar1 + 0x10)) {
    uVar3 = *(int *)(lVar1 + 0x10) - 1;
    if (*(uint *)(lVar1 + 0x10) <= uVar3) {
      FUN_00594f90();
    }
    if (*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8) == param_2) {
      FUN_00599670(*(longlong *)(param_1 + 0x20) + 8,uVar3,5);
    }
    else {
      local_68 = *(longlong *)(param_1 + 0x20) + 8;
      local_30 = param_2;
      FUN_005974f0(local_68,&local_30);
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      local_78[0] = param_2;
      FUN_005974f0(*(longlong *)(param_1 + 0x60) + 8,local_78);
    }
  }
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x10) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    FUN_00410f20(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_00410f20(uVar2);
  }
  return;
}

