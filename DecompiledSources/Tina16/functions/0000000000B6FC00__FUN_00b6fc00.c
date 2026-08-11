/* Ghidra address: 00b6fc00 */
/* Ghidra symbol: FUN_00b6fc00 */


void FUN_00b6fc00(longlong *param_1,byte *param_2,wchar_t *param_3,int param_4)

{
  undefined8 uVar1;
  byte local_48 [24];
  
  if ((char)param_1[0xf] == '\0') {
    param_2 = (byte *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_3 = u_Cipher_not_initialized_00b6fcd0;
    uVar1 = FUN_0044d490(&PTR_FUN_00b6aec8);
    FUN_004134c0(uVar1);
  }
  FUN_0040d200(local_48,0x10,0);
  for (; param_4 != 0; param_4 = param_4 + -1) {
    (**(code **)(*param_1 + 0x110))(param_1,param_1 + 0x13,local_48);
    *(byte *)param_3 = *param_2 ^ local_48[0];
    FUN_00409a70((longlong)param_1 + 0x99,param_1 + 0x13,0xf);
    *(byte *)((longlong)param_1 + 0xa7) = (byte)*param_3;
    param_2 = param_2 + 1;
    param_3 = (wchar_t *)((longlong)param_3 + 1);
  }
  return;
}

