/* Ghidra address: 00f30070 */
/* Ghidra symbol: FUN_00f30070 */


void FUN_00f30070(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x18) + 8) != '\0')) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      FUN_00410f20(uVar1);
    }
    *(longlong *)(param_1 + 0x18) = param_2;
  }
  return;
}

