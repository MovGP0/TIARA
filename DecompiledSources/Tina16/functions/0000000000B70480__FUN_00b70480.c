/* Ghidra address: 00b70480 */
/* Ghidra symbol: FUN_00b70480 */


ulonglong FUN_00b70480(longlong *param_1,longlong param_2,wchar_t *param_3,uint param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_48 [24];
  
  if ((char)param_1[0xf] == '\0') {
    param_2 = 1;
    param_3 = L"Cipher not initialized";
    uVar2 = FUN_0044d490(&PTR_FUN_00b6aec8,1,L"Cipher not initialized");
    FUN_004134c0(uVar2);
  }
  FUN_0040d200(local_48,0x10,0);
  for (uVar4 = param_4 / 0x10; uVar4 != 0; uVar4 = uVar4 - 1) {
    (**(code **)(*param_1 + 0x110))(param_1,param_1 + 0x13,local_48);
    FUN_00b6f5d0(param_1);
    FUN_00409a70(param_2,param_3,0x10);
    FUN_00b6d090(param_3,local_48,0x10);
    param_2 = param_2 + 0x10;
    param_3 = param_3 + 8;
  }
  uVar3 = (ulonglong)param_4 / 0x10;
  uVar1 = (ulonglong)param_4 % 0x10;
  if ((int)uVar1 != 0) {
    (**(code **)(*param_1 + 0x110))(param_1,param_1 + 0x13,local_48);
    FUN_00b6f5d0(param_1);
    FUN_00409a70(param_2,param_3,uVar1);
    uVar3 = FUN_00b6d090(param_3,local_48,uVar1);
  }
  return uVar3;
}

