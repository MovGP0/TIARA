/* Ghidra address: 00da9400 */
/* Ghidra symbol: FUN_00da9400 */


void FUN_00da9400(void)

{
  undefined8 uVar1;
  
  DAT_0202da50 = DAT_0202da50 + 1;
  if (DAT_0202da50 == 0) {
    FUN_01d42ec0(L"cmnUtils.Finalization.0");
    uVar1 = DAT_0202da58;
    DAT_0202da58 = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_0202da60;
    DAT_0202da60 = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_0202da48;
    DAT_0202da48 = 0;
    FUN_00410f20(uVar1);
    FUN_01d42ec0(L"cmnUtils.Finalization.1");
    FUN_004144d0(&PTR_s_hD_r70YTT77_uGHjTYT56q_h6_7Gh_j7_01ed3c98);
  }
  return;
}

