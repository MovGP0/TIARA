/* Ghidra address: 013fa0f0 */
/* Ghidra symbol: FUN_013fa0f0 */


void FUN_013fa0f0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_328 [776];
  
  uVar2 = *(undefined8 *)(param_1 + 0x6d0);
  FUN_008483b0(uVar2,0);
  FUN_00848a30(uVar2,1);
  uVar2 = *(undefined8 *)(param_1 + 0x6d0);
  FUN_00b0ae40(uVar2);
  FUN_00848a70(uVar2,*(undefined4 *)(param_1 + 0x728));
  uVar2 = FUN_01d3bfb0(0,&PTR_FUN_01d354b8,5,2);
  *(undefined8 *)(param_1 + 0x708) = uVar2;
  uVar2 = FUN_01d3bfb0(0,&PTR_FUN_01d354b8,5,2);
  *(undefined8 *)(param_1 + 0x710) = uVar2;
  FUN_01d03160(*(undefined8 *)(param_1 + 0x6e0));
  FUN_01d3da40(local_328,*(undefined8 *)(param_1 + 0x6e0));
  iVar1 = FUN_01d3e250(local_328,1);
  if (0 < iVar1) {
    do {
      FUN_01d3c020(*(undefined8 *)(param_1 + 0x708),4);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_01d3e250(local_328,2);
  if (0 < iVar1) {
    do {
      FUN_01d3c020(*(undefined8 *)(param_1 + 0x710),4);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_013f9a20(param_1);
  FUN_013f9d40(param_1);
  return;
}

