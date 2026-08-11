/* Ghidra address: 0199b3c0 */
/* Ghidra symbol: FUN_0199b3c0 */


void FUN_0199b3c0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  local_34 = 0;
  local_2c = *(int *)(*(longlong *)(param_2 + 0x1a8) + 0x118);
  local_30 = *(int *)(*(longlong *)(param_2 + 0x1a8) + 100) - local_2c;
  iVar1 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  if (-1 < iVar3 + -1) {
    do {
      uVar2 = FUN_00b94e60(param_1,iVar1);
      FUN_0199b010(auStack_58,uVar2);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_019954b0(param_1,local_34);
  return;
}

