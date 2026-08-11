/* Ghidra address: 005dc0b0 */
/* Ghidra symbol: FUN_005dc0b0 */


void FUN_005dc0b0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  uVar3 = FUN_005e0b50(&PTR_FUN_005d96d0,1,uVar1);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_004b3d70(*(undefined8 *)(param_1 + 8),&local_28,iVar4);
      FUN_005dbea0(param_1,&local_20,local_28);
      FUN_005e1410(*(undefined8 *)(param_1 + 0x10),local_20,iVar4);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_28,2);
  return;
}

