/* Ghidra address: 010f6a20 */
/* Ghidra symbol: FUN_010f6a20 */


void FUN_010f6a20(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  byte bVar5;
  byte local_29;
  
  bVar5 = 0;
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_29 = 0;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar4);
      uVar3 = FUN_004113f0(uVar3,&PTR_FUN_011051a8);
      FUN_010f6740(param_1,uVar3,0,&local_29,0);
      bVar5 = bVar5 | local_29;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (bVar5 != 0) {
    FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),param_2);
  }
  return;
}

