/* Ghidra address: 0145e720 */
/* Ghidra symbol: FUN_0145e720 */


longlong FUN_0145e720(void)

{
  longlong lVar1;
  
  if (*(longlong *)PTR_DAT_020052f8 == 0) {
    lVar1 = FUN_01af24a0(&DAT_01af0038,1,1,0);
  }
  else {
    lVar1 = *(longlong *)PTR_DAT_020052f8;
  }
  FUN_01af2a70(lVar1,FUN_0145e6c0);
  *(undefined8 *)(lVar1 + 0x18) = 0x4059000000000000;
  FUN_01af29b0(lVar1,1);
  FUN_01af2ae0(lVar1);
  return lVar1;
}

