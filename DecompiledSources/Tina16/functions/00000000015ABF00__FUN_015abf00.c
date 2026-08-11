/* Ghidra address: 015abf00 */
/* Ghidra symbol: FUN_015abf00 */


void FUN_015abf00(void)

{
  undefined **local_38;
  undefined **local_30;
  undefined **local_28;
  undefined **local_20;
  undefined **local_18;
  undefined **local_10;
  
  DAT_0210ef14 = DAT_0210ef14 + -1;
  if (DAT_0210ef14 == -1) {
    FUN_0041b5a0(FUN_015abe50);
    DAT_01f6bde8 = FUN_015abe30();
    if (DAT_01f6bde8 < 4) {
      PTR_FUN_01f6bdc8 = FUN_015ab380;
      PTR_FUN_01f6bdd0 = FUN_015ab400;
    }
    else {
      PTR_FUN_01f6bdc8 = FUN_015ab310;
      PTR_FUN_01f6bdd0 = FUN_015ab470;
    }
    local_38 = &PTR_FUN_015a8170;
    local_30 = &PTR_FUN_015a8498;
    local_28 = &PTR_FUN_015a8808;
    local_20 = &PTR_FUN_015a8a28;
    local_18 = &PTR_FUN_015a8d30;
    local_10 = &PTR_FUN_015a90a0;
    FUN_015aba90(&local_38,5);
  }
  return;
}

