/* Ghidra address: 017514d0 */
/* Ghidra symbol: FUN_017514d0 */


void FUN_017514d0(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x38) = *param_2;
  if ((*(char *)(param_1 + 0xc) == '\0') ||
     (uVar2 = (int)*(uint *)(param_1 + 0x38) >> 0x1f,
     (int)((*(uint *)(param_1 + 0x38) ^ uVar2) - uVar2) < 0x65)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  return;
}

