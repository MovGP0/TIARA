/* Ghidra address: 006547c0 */
/* Ghidra symbol: FUN_006547c0 */


void FUN_006547c0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  while (iVar1 = *(int *)(*(longlong *)(param_2 + 0x50) + 0x10), 0 < iVar1) {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x50),iVar1 + -1);
    *(undefined8 *)(param_2 + 0x48) = uVar2;
    if (*(char *)(*(longlong *)(param_2 + 0x48) + 0xad) == '\x03') {
      FUN_0064c650(*(undefined8 *)(param_2 + 0x48),4);
    }
    else {
      FUN_0064c650(*(undefined8 *)(param_2 + 0x48),3);
    }
    FUN_004ae870(*(undefined8 *)(param_2 + 0x50),*(int *)(*(longlong *)(param_2 + 0x50) + 0x10) + -1
                );
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x50));
  FUN_00654410(*(undefined8 *)(param_2 + 0x90));
  return;
}

