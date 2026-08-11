/* Ghidra address: 00b6eb50 */
/* Ghidra symbol: FUN_00b6eb50 */


void FUN_00b6eb50(longlong *param_1,byte *param_2,wchar_t *param_3,int param_4)

{
  byte bVar1;
  undefined8 uVar2;
  byte local_40 [16];
  
  if ((char)param_1[0xf] == '\0') {
    param_2 = (byte *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_3 = u_Cipher_not_initialized_00b6ec40;
    uVar2 = FUN_0044d490(&PTR_FUN_00b6aec8);
    FUN_004134c0(uVar2);
  }
  FUN_0040d200(local_40,8,0);
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *param_2;
    (**(code **)(*param_1 + 0x110))(param_1,param_1 + 0x12,local_40);
    *(byte *)param_3 = *param_2 ^ local_40[0];
    FUN_00409a70((longlong)param_1 + 0x91,param_1 + 0x12,7);
    *(byte *)((longlong)param_1 + 0x97) = bVar1;
    param_2 = param_2 + 1;
    param_3 = (wchar_t *)((longlong)param_3 + 1);
  }
  return;
}

