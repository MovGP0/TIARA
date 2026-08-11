/* Ghidra address: 00b9ca20 */
/* Ghidra symbol: FUN_00b9ca20 */


void FUN_00b9ca20(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_00b9c7f0(*(int *)(param_1 + 0x1c) + 1);
  *(uint *)(param_1 + 0x1c) = uVar1;
  uVar4 = FUN_005db680(&PTR_FUN_005d3fc0,1,uVar1);
  *(undefined8 *)(param_1 + 8) = uVar4;
  uVar2 = FUN_0040c840(((double)uVar1 / 3.0) * 2.0);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),local_30,iVar5);
      FUN_005db560(*(undefined8 *)(param_1 + 8),local_30[0],iVar5);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(local_30);
  return;
}

