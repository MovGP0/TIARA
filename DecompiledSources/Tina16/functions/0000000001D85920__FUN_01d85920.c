/* Ghidra address: 01d85920 */
/* Ghidra symbol: FUN_01d85920 */


void FUN_01d85920(void)

{
  undefined1 uVar1;
  
  if (PTR_FUN_02000af0 != (undefined *)0x0) {
    (*(code *)PTR_FUN_02000af0)();
  }
  if (((*(int *)PTR_DAT_020024a0 == -1) || (*(longlong *)PTR_DAT_020022c8 == 0)) ||
     (*(longlong *)PTR_DAT_020049d0 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(DAT_03567c88 + 0x2a) = uVar1;
  FUN_01d85620(DAT_03567c88);
  if (*(char *)(DAT_03567c88 + 0x2a) != '\0') {
    (**(code **)PTR_DAT_020049d0)();
  }
  return;
}

