/* Ghidra address: 01c1bc30 */
/* Ghidra symbol: FUN_01c1bc30 */


void FUN_01c1bc30(void)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  DAT_02111498 = DAT_02111498 + -1;
  if (DAT_02111498 == -1) {
    DAT_02111490 = (longlong *)FUN_00410e60(&PTR_FUN_01c1b4b8,1);
    (**(code **)(*DAT_02111490 + 0x10))(DAT_02111490,local_20);
    FUN_00414ad0(PTR_DAT_02001360,local_20[0]);
    FUN_01beb6e0(DAT_02111490);
  }
  FUN_00414480(local_20);
  return;
}

