/* Ghidra address: 01957a10 */
/* Ghidra symbol: FUN_01957a10 */


void FUN_01957a10(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0xc);
  cVar3 = thunk_FUN_03f3ed25(0x7f,(uVar2 & 0xff) - (uVar1 & 0xff),0xff);
  cVar4 = thunk_FUN_03f3ed25(0x7f,(uVar2 >> 8 & 0xff) - (uVar1 >> 8 & 0xff),0xff);
  cVar5 = thunk_FUN_03f3ed25(0x7f,(uVar2 >> 0x10 & 0xff) - (uVar1 >> 0x10 & 0xff),0xff);
  FUN_0042a2a0((char)uVar1 + cVar3,(char)(uVar1 >> 8) + cVar4,(char)(uVar1 >> 0x10) + cVar5);
  return;
}

