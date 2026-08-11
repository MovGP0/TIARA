/* Ghidra address: 00432040 */
/* Ghidra symbol: FUN_00432040 */


undefined8 FUN_00432040(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if ((0x10ffff < param_2) || ((0xd7ff < param_2 && (param_2 < 0xe000)))) {
    uVar2 = FUN_0044d710(&PTR_FUN_00434000,1,PTR_PTR_02005c60);
    FUN_004134c0(uVar2);
  }
  if (param_2 < 0x10000) {
    FUN_00416780(param_1,param_2);
  }
  else {
    uVar1 = (ulonglong)(param_2 - 0x10000) / 0x400;
    FUN_00416780(&local_10,CONCAT62((int6)(uVar1 >> 0x10),(short)uVar1 + -0x2800));
    FUN_00416780(&local_18,(short)((ulonglong)(param_2 - 0x10000) % 0x400) + -0x2400);
    FUN_00416ba0(param_1,local_10,local_18);
  }
  FUN_00414560(&local_18,2);
  return param_1;
}

