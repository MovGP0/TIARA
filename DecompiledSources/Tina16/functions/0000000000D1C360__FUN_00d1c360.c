/* Ghidra address: 00d1c360 */
/* Ghidra symbol: FUN_00d1c360 */


void FUN_00d1c360(longlong param_1)

{
  int iVar1;
  undefined7 uVar2;
  
  uVar2 = 0;
  FUN_0040d200(param_1 + 0x134,0x28,0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 3;
  *(undefined1 *)(param_1 + 0x2e) = 5;
  *(undefined1 *)(param_1 + 0x2f) = 7;
  *(undefined1 *)(param_1 + 0x30) = 0xb;
  iVar1 = 0;
  do {
    *(char *)(param_1 + 0x31 + (longlong)iVar1) = -1 - (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x100);
  FUN_00d0d260(param_1,CONCAT71(uVar2,1));
  return;
}

