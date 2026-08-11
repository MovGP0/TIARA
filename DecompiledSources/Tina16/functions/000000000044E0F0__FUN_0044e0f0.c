/* Ghidra address: 0044e0f0 */
/* Ghidra symbol: FUN_0044e0f0 */


void FUN_0044e0f0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    uVar1 = FUN_004097b0();
    cVar2 = FUN_004113d0(uVar1,&PTR_FUN_004334c0);
    if (cVar2 != '\0') {
      uVar1 = FUN_00409810();
      *(undefined8 *)(param_1 + 0x18) = uVar1;
    }
  }
  return;
}

