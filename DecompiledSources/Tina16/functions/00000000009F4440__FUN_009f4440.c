/* Ghidra address: 009f4440 */
/* Ghidra symbol: FUN_009f4440 */


undefined4 FUN_009f4440(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_009f43d0();
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x10);
  }
  return uVar1;
}

