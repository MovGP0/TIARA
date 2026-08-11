/* Ghidra address: 01873d20 */
/* Ghidra symbol: FUN_01873d20 */


void FUN_01873d20(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_20 [16];
  
  FUN_01874e10(param_1,local_20,param_1 + 0x18,8);
  uVar1 = *(uint *)(param_1 + 0x18) >> 3 & 0x3f;
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  else {
    iVar2 = 0x78 - uVar1;
  }
  FUN_01873c50(param_1,&DAT_01fb02f4,iVar2);
  FUN_01873c50(param_1,local_20,8);
  FUN_01874e10(param_1,param_1 + 0x60,param_1 + 8,0x10);
  FUN_0040d200(param_1 + 0x18,8,0);
  FUN_0040d200(param_1 + 8,0x10,0);
  FUN_0040d200(param_1 + 0x20,0x40,0);
  return;
}

