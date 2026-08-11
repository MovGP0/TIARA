/* Ghidra address: 009903a0 */
/* Ghidra symbol: FUN_009903a0 */


undefined8 FUN_009903a0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (cVar1 == '\0') {
    FUN_00414b90(param_2,L"false");
  }
  else {
    FUN_00414b90(param_2,L"true");
  }
  return param_2;
}

