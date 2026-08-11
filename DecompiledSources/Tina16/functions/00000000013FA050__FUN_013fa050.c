/* Ghidra address: 013fa050 */
/* Ghidra symbol: FUN_013fa050 */


void FUN_013fa050(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*PTR_DAT_020039a8 == '\0') {
    cVar2 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6d0));
    *(char *)(param_1 + 0x6f8) = cVar2;
    if (cVar2 == '\0') {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 8);
      FUN_00b95290(uVar1);
      FUN_01d3c090(uVar1,*(undefined8 *)(param_1 + 0x708));
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x10);
      FUN_00b95290(uVar1);
      FUN_01d3c090(uVar1,*(undefined8 *)(param_1 + 0x710));
    }
  }
  else {
    FUN_00b0a960(*(undefined8 *)(param_1 + 0x6d0));
    if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x638) == 1) {
      *(undefined4 *)(param_1 + 0x508) = 1;
    }
  }
  return;
}

