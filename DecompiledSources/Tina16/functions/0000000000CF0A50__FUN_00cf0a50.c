/* Ghidra address: 00cf0a50 */
/* Ghidra symbol: FUN_00cf0a50 */


longlong FUN_00cf0a50(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                     longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = FUN_00cf1490(*(undefined8 *)(param_1 + 0x48));
  FUN_00414ad0(lVar1 + 0x38,param_2);
  FUN_00441920(local_20,param_6);
  FUN_00414ad0(lVar1 + 0x18,local_20[0]);
  FUN_00414ad0(lVar1 + 0x48,param_3);
  if (param_5 == 0) {
    FUN_00414ad0(lVar1 + 0x28,L"text/plain");
  }
  else {
    FUN_00cf25f0(lVar1,param_5);
  }
  if (param_4 != 0) {
    FUN_00414ad0(lVar1 + 0x20,param_4);
  }
  FUN_00414ad0(lVar1 + 0x30,L"quoted-printable");
  FUN_00414480(local_20);
  return lVar1;
}

