/* Ghidra address: 004b2480 */
/* Ghidra symbol: FUN_004b2480 */


void FUN_004b2480(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong local_30;
  
  (**(code **)(*param_1 + 0x28))(param_1,param_2,2);
  lVar2 = param_1[2];
  uVar1 = *(uint *)(lVar2 + 0x10);
  uVar3 = uVar1 - 1;
  if (uVar1 <= uVar3) {
    FUN_00594f90();
  }
  if (param_2 == *(longlong *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar3 * 8)) {
    FUN_00599670(param_1[2] + 8,*(int *)(param_1[2] + 0x10) + -1,5);
  }
  else {
    local_30 = param_2;
    FUN_005974f0(param_1[2] + 8,&local_30);
  }
  *(undefined8 *)(param_2 + 8) = 0;
  FUN_004b14f0(param_1,param_2,1);
  FUN_004b1e50(param_1);
  return;
}

