/* Ghidra address: 017b70b0 */
/* Ghidra symbol: FUN_017b70b0 */


ulonglong FUN_017b70b0(longlong *param_1)

{
  int iVar1;
  ulonglong unaff_RBX;
  undefined6 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  uVar2 = (undefined6)(unaff_RBX >> 0x10);
  if (iVar1 < 3) {
    if (iVar1 == -1) {
      unaff_RBX = CONCAT62(uVar2,0x19);
      goto LAB_017b7123;
    }
    if (iVar1 == 0) {
LAB_017b710d:
      unaff_RBX = CONCAT62(uVar2,0xfff8);
      goto LAB_017b7123;
    }
    if (iVar1 == 1) {
LAB_017b7113:
      unaff_RBX = CONCAT62(uVar2,0xfff9);
      goto LAB_017b7123;
    }
    if (iVar1 != 2) goto LAB_017b7123;
  }
  else {
    if (iVar1 - 3U < 2) {
      unaff_RBX = CONCAT62(uVar2,0xfff7);
      goto LAB_017b7123;
    }
    if (iVar1 != 5) {
      if (iVar1 == 6) goto LAB_017b7113;
      if (iVar1 != 7) goto LAB_017b7123;
      goto LAB_017b710d;
    }
  }
  unaff_RBX = CONCAT62(uVar2,0xfffa);
LAB_017b7123:
  return unaff_RBX & 0xffffffff;
}

