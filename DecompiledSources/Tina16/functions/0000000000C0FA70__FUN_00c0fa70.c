/* Ghidra address: 00c0fa70 */
/* Ghidra symbol: FUN_00c0fa70 */


int FUN_00c0fa70(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_20;
  int iStack_1c;
  
  uVar3 = *param_2;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
  iStack_1c = (int)((ulonglong)uVar3 >> 0x20);
  if (iStack_1c <= iVar1) {
    iVar1 = iStack_1c;
  }
  iVar1 = iVar1 + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  local_20 = (int)uVar3;
  uVar3 = FUN_004113f0(*(undefined8 *)(param_1 + 0x4e8),&PTR_FUN_00bcce18);
  iVar2 = FUN_00bcf8a0(uVar3,iVar1);
  return iVar2 + iVar1 * 2 + local_20 + -1;
}

