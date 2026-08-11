/* Ghidra address: 017b1f00 */
/* Ghidra symbol: FUN_017b1f00 */


ulonglong FUN_017b1f00(longlong *param_1)

{
  int iVar1;
  ulonglong unaff_RBX;
  undefined6 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  uVar2 = (undefined6)(unaff_RBX >> 0x10);
  if (iVar1 == -1) {
    unaff_RBX = CONCAT62(uVar2,0x19);
  }
  else if (iVar1 == 0) {
    unaff_RBX = CONCAT62(uVar2,0xfffd);
  }
  else if (iVar1 == 1) {
    unaff_RBX = CONCAT62(uVar2,0xfffd);
  }
  return unaff_RBX & 0xffffffff;
}

