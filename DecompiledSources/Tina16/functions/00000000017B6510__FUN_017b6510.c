/* Ghidra address: 017b6510 */
/* Ghidra symbol: FUN_017b6510 */


ulonglong FUN_017b6510(longlong *param_1)

{
  int iVar1;
  ulonglong unaff_RBX;
  undefined6 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  uVar2 = (undefined6)(unaff_RBX >> 0x10);
  if (iVar1 < 3) {
    if (iVar1 == -1) {
      unaff_RBX = CONCAT62(uVar2,0x19);
      goto LAB_017b6583;
    }
    if (iVar1 == 0) {
LAB_017b656d:
      unaff_RBX = CONCAT62(uVar2,0xfff8);
      goto LAB_017b6583;
    }
    if (iVar1 == 1) {
LAB_017b6573:
      unaff_RBX = CONCAT62(uVar2,0xfff9);
      goto LAB_017b6583;
    }
    if (iVar1 != 2) goto LAB_017b6583;
  }
  else {
    if (iVar1 - 3U < 2) {
      unaff_RBX = CONCAT62(uVar2,0xfff7);
      goto LAB_017b6583;
    }
    if (iVar1 != 5) {
      if (iVar1 == 6) goto LAB_017b6573;
      if (iVar1 != 7) goto LAB_017b6583;
      goto LAB_017b656d;
    }
  }
  unaff_RBX = CONCAT62(uVar2,0xfffa);
LAB_017b6583:
  return unaff_RBX & 0xffffffff;
}

