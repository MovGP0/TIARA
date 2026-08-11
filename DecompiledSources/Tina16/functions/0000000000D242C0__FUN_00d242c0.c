/* Ghidra address: 00d242c0 */
/* Ghidra symbol: FUN_00d242c0 */


void FUN_00d242c0(longlong param_1,int param_2)

{
  byte bVar1;
  
  if ((3 < param_2) && (param_2 < 0xe)) goto LAB_00d24326;
  bVar1 = *(byte *)(param_1 + 0x7c);
  if (bVar1 < 6) {
    if ((bVar1 == 5) || (bVar1 == 1)) {
      param_2 = 5;
      goto LAB_00d24326;
    }
    if (bVar1 == 2) goto LAB_00d24313;
    if (bVar1 != 3) goto LAB_00d24321;
  }
  else {
    if (bVar1 == 6) {
LAB_00d24313:
      param_2 = 6;
      goto LAB_00d24326;
    }
    if (bVar1 != 7) {
LAB_00d24321:
      param_2 = 8;
      goto LAB_00d24326;
    }
  }
  param_2 = 10;
LAB_00d24326:
  *(int *)(param_1 + 0x78) = param_2;
  return;
}

