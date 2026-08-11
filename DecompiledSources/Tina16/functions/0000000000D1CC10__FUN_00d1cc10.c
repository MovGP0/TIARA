/* Ghidra address: 00d1cc10 */
/* Ghidra symbol: FUN_00d1cc10 */


void FUN_00d1cc10(longlong param_1)

{
  uint uVar1;
  longlong local_20 [2];
  
  uVar1 = *(uint *)(param_1 + 0x28) & 0xf;
  *(undefined1 *)(param_1 + 0x2c + (longlong)(int)uVar1) = 0x80;
  uVar1 = uVar1 + 1;
  if (8 < uVar1) {
    FUN_0040d200(param_1 + 0x2c + (longlong)(int)uVar1,(longlong)(int)(0x10 - uVar1),0);
    FUN_00d1c5c0(param_1,param_1 + 0x2c);
    uVar1 = 0;
  }
  FUN_0040d200(param_1 + 0x2c + (longlong)(int)uVar1,(longlong)(int)(0x10 - uVar1),0);
  local_20[0] = (longlong)(*(int *)(param_1 + 0x28) * 8);
  FUN_00409a70(local_20,param_1 + 0x34,8);
  FUN_00d1c5c0(param_1,param_1 + 0x2c);
  FUN_0040d200(param_1 + 0x2c,0x10,0);
  FUN_00d0d260(param_1,0);
  return;
}

