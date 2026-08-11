/* Ghidra address: 008b0750 */
/* Ghidra symbol: FUN_008b0750 */


void FUN_008b0750(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  DAT_02012a68 = DAT_02012a68 + -1;
  if (DAT_02012a68 == -1) {
    FUN_0089fd80(&local_10);
    FUN_00414ad0(&DAT_02012a70,local_10);
    FUN_00419260(&DAT_02012a58,&DAT_0089e998,1,1);
    FUN_00414ad0(DAT_02012a58,L"FALSE");
    FUN_00419260(&DAT_02012a60,&DAT_0089e9d8,1,1);
    FUN_00414ad0(DAT_02012a60,L"TRUE");
  }
  FUN_00414480(&local_10);
  return;
}

