/* Ghidra address: 00d9f910 */
/* Ghidra symbol: FUN_00d9f910 */


void FUN_00d9f910(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  DAT_0201a194 = DAT_0201a194 + -1;
  if (DAT_0201a194 == -1) {
    FUN_007828b0(&PTR_FUN_00d4f5c0);
    FUN_0041ddd0(&local_10,PTR_PTR_020036e0);
    FUN_00782560(&DAT_0075cd78,L".vsf",local_10,L"VCLSTYLE",&PTR_FUN_00d4dd08);
    FUN_00d8ebf0();
  }
  FUN_00414480(&local_10);
  return;
}

