/* Ghidra address: 004a3290 */
/* Ghidra symbol: FUN_004a3290 */


ulonglong FUN_004a3290(int param_1,undefined8 param_2,int *param_3,uint param_4)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  int iVar2;
  
  if (param_4 < 0x80000000) {
    iVar2 = param_4 + 1;
    do {
      if (*param_3 == param_1) {
        uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
        FUN_00414ad0(param_2,*(undefined8 *)(param_3 + 2));
        goto LAB_004a32cc;
      }
      param_3 = param_3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar1 = 0;
LAB_004a32cc:
  return uVar1 & 0xffffffff;
}

