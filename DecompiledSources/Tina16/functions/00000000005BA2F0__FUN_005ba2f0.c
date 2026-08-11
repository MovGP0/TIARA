/* Ghidra address: 005ba2f0 */
/* Ghidra symbol: FUN_005ba2f0 */


longlong *
FUN_005ba2f0(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_10;
  
  local_10 = 0;
  lVar2 = ((longlong)param_2 * 0x15180 + (longlong)param_3 * 0xe10 + (longlong)param_4 * 0x3c +
          (longlong)param_5) * 1000 + (longlong)param_6;
  if ((0x346dc5d638865 < lVar2) || (lVar2 < -0x346dc5d638865)) {
    FUN_0041ddd0(&local_10,PTR_PTR_02001750);
    uVar1 = FUN_0044d490(&PTR_FUN_00434000,1,local_10);
    lVar2 = FUN_004134c0(uVar1);
  }
  *param_1 = lVar2 * 10000;
  FUN_00414480(&local_10);
  return param_1;
}

