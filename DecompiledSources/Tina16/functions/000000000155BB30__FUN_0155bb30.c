/* Ghidra address: 0155bb30 */
/* Ghidra symbol: FUN_0155bb30 */


void FUN_0155bb30(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x78),iVar3);
      FUN_00b950f0(*(undefined8 *)(param_1 + 0x748),uVar1);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      puVar2 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x78),iVar3);
      uVar1 = (**(code **)*puVar2)(puVar2);
      FUN_00418590(uVar1,&DAT_01cf1390);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}

