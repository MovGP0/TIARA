/* Ghidra address: 00ce8550 */
/* Ghidra symbol: FUN_00ce8550 */


undefined8 FUN_00ce8550(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_00416cd0(param_2,3,*(undefined8 *)(param_1 + 0x30),&DAT_00ce86b8,
               *(undefined8 *)(param_1 + 0x48));
  FUN_00ce6e60(param_2,L"Path",*(undefined8 *)(param_1 + 0x38));
  FUN_00ce6e60(param_2,L"Domain",*(undefined8 *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_00ce6f00(param_2,L"Secure");
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_00ce6f00(param_2,L"HttpOnly");
  }
  lVar1 = FUN_00ce84e0(param_1);
  if (-1 < lVar1) {
    FUN_0043f780(&local_10,lVar1);
    FUN_00ce6e60(param_2,L"Max-Age",local_10);
  }
  if (*(double *)(param_1 + 0x20) != 0.0) {
    FUN_00877960(&local_18,*(double *)(param_1 + 0x20),1);
    FUN_00ce6e60(param_2,L"Expires",local_18);
  }
  FUN_00414560(&local_18,2);
  return param_2;
}

