/* Ghidra address: 00b6e8a0 */
/* Ghidra symbol: FUN_00b6e8a0 */


ulonglong FUN_00b6e8a0(longlong *param_1,longlong param_2,longlong param_3,uint param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_40 [16];
  
  if ((char)param_1[0xf] == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_00b6aec8,1,L"Cipher not initialized");
    FUN_004134c0(uVar2);
  }
  FUN_0040d200(local_40,8,0);
  for (uVar4 = param_4 / 8; uVar4 != 0; uVar4 = uVar4 - 1) {
    FUN_00409a70(param_2,param_3,8);
    FUN_00409a70(param_2,local_40,8);
    (**(code **)(*param_1 + 0x118))(param_1,param_3,param_3);
    FUN_00b6d090(param_3,param_1 + 0x12,8);
    FUN_00409a70(local_40,param_1 + 0x12,8);
    param_2 = param_2 + 8;
    param_3 = param_3 + 8;
  }
  uVar3 = (ulonglong)param_4 / 8;
  uVar1 = (ulonglong)param_4 % 8;
  if ((int)uVar1 != 0) {
    (**(code **)(*param_1 + 0x110))(param_1,param_1 + 0x12,param_1 + 0x12);
    FUN_00409a70(param_2,param_3,uVar1);
    uVar3 = FUN_00b6d090(param_3,param_1 + 0x12,uVar1);
  }
  return uVar3;
}

