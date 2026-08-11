/* Ghidra address: 013e8270 */
/* Ghidra symbol: FUN_013e8270 */


void FUN_013e8270(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x6d0);
  FUN_008483b0(uVar1,0);
  FUN_00848a30(uVar1,1);
  uVar1 = *(undefined8 *)(param_1 + 0x6d0);
  FUN_00b0ae40(uVar1);
  FUN_00848a70(uVar1,*(undefined4 *)(param_1 + 0x778));
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x788) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x788),iVar3);
      FUN_004095f0(uVar1);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x788) + 0x10))(*(longlong **)(param_1 + 0x788));
  puVar2 = (undefined8 *)FUN_004095c0(0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x788),puVar2);
  FUN_013e72b0(param_1);
  FUN_013e7620(param_1);
  return;
}

