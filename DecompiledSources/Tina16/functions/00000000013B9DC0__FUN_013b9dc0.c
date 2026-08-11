/* Ghidra address: 013b9dc0 */
/* Ghidra symbol: FUN_013b9dc0 */


void FUN_013b9dc0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(**(longlong **)(param_1 + 200) + 0x90))(*(longlong **)(param_1 + 200));
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x90))(*(longlong **)(param_1 + 0xd0));
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x58) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x58),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))(*(longlong **)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x11c) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1);
    FUN_004095f0(uVar2);
  }
  uVar2 = FUN_013b2dc0(0,&PTR_FUN_013b25f8,10,5);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  return;
}

