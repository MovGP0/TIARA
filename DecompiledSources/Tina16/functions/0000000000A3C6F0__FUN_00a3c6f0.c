/* Ghidra address: 00a3c6f0 */
/* Ghidra symbol: FUN_00a3c6f0 */


undefined1 FUN_00a3c6f0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 0x160) + 0x10) != 0) {
    uVar2 = FUN_00a33e20(*(undefined8 *)(param_1 + 0x160),0);
    cVar1 = FUN_004113d0(uVar2,&PTR_FUN_00a30a98);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

