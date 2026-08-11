/* Ghidra address: 0186a730 */
/* Ghidra symbol: FUN_0186a730 */


void FUN_0186a730(void)

{
  int iVar1;
  
  if ((((DAT_02110388 == 0) || (*(char *)(DAT_02110388 + 8) != '\0')) &&
      (*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0x2d0) == 0)) &&
     ((*PTR_DAT_02001218 != '\0' && (*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0x2d0) == 0)))) {
    iVar1 = FUN_00427ab0();
    if (*(int *)PTR_DAT_020050d8 != iVar1) {
      FUN_00452320(&DAT_02110388);
      DAT_02110390 = FUN_0186aa40(&PTR_FUN_0186a638,1);
      DAT_02110398 = thunk_FUN_0416e139(0,0xffffffff,0,L"FRX_GUI_THREAD_R");
      FUN_004d1ec0(DAT_02110390);
      thunk_FUN_0418d6df(DAT_02110398,100000);
      thunk_FUN_041d2921(DAT_02110398);
    }
  }
  return;
}

