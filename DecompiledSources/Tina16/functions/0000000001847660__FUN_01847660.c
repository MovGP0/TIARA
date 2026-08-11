/* Ghidra address: 01847660 */
/* Ghidra symbol: FUN_01847660 */


undefined8 FUN_01847660(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x48);
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      FUN_00414ad0(param_2,L"String");
      return param_2;
    }
    if (bVar1 == 0) {
      FUN_00414ad0(param_2,L"Integer");
      return param_2;
    }
    if (bVar1 == 1) {
      FUN_00414ad0(param_2,L"Boolean");
      return param_2;
    }
    if (bVar1 == 2) {
      FUN_00414ad0(param_2,L"Extended");
      return param_2;
    }
    if (bVar1 == 3) {
      FUN_00414ad0(param_2,L"Char");
      return param_2;
    }
  }
  else {
    if (bVar1 == 5) {
      FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x50));
      return param_2;
    }
    if (bVar1 == 6) {
      FUN_00414ad0(param_2,L"Array");
      return param_2;
    }
    if (bVar1 == 8) {
      FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x50));
      return param_2;
    }
    if (bVar1 == 10) {
      FUN_00414ad0(param_2,L"Int64");
      return param_2;
    }
  }
  FUN_00414ad0(param_2,L"Variant");
  return param_2;
}

