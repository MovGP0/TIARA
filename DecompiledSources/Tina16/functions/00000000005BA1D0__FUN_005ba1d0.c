/* Ghidra address: 005ba1d0 */
/* Ghidra symbol: FUN_005ba1d0 */


longlong * FUN_005ba1d0(longlong *param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  *param_1 = (longlong)param_2 * 0xe10 + (longlong)param_3 * 0x3c + (longlong)param_4;
  if ((0xd6bf94d5e5 < *param_1) || (*param_1 < -0xd6bf94d5e5)) {
    FUN_0041ddd0(&local_10,PTR_PTR_02001750);
    uVar1 = FUN_0044d490(&PTR_FUN_00434000,1,local_10);
    FUN_004134c0(uVar1);
  }
  *param_1 = *param_1 * 10000000;
  FUN_00414480(&local_10);
  return param_1;
}

