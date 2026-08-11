/* Ghidra address: 01891a50 */
/* Ghidra symbol: FUN_01891a50 */


void FUN_01891a50(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  longlong local_20;
  
  local_20 = 0;
  fVar3 = (float)FUN_01818dc0(param_1);
  uVar2 = FUN_0040c770((double)fVar3 * 2.0);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x4c0),&local_20);
  *(bool *)(param_1 + 0x4b9) = local_20 != 0;
  if (local_20 != 0) {
    iVar1 = *(int *)(param_1 + 0x9c);
    (**(code **)(**(longlong **)(param_1 + 0x4c0) + 400))
              (*(longlong **)(param_1 + 0x4c0),iVar1,uVar2,*(int *)(param_1 + 0x98) + iVar1 * -2,
               iVar1 + -1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x4c0) + 400))
              (*(longlong **)(param_1 + 0x4c0),1,uVar2,
               *(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x9c),*(int *)(param_1 + 0x9c) + -1);
  }
  FUN_00414480(&local_20);
  return;
}

