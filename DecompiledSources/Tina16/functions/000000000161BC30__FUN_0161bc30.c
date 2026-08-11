/* Ghidra address: 0161bc30 */
/* Ghidra symbol: FUN_0161bc30 */


undefined8 FUN_0161bc30(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
  }
  if ((((lVar1 == 0) || (*(char *)(param_1 + 0x21) != 'r')) || (*(char *)(param_1 + 0x22) != '~'))
     || (*(int *)(param_1 + 0x10) != *(int *)(lVar1 + 0xac))) {
    if (param_3 != '\0') {
      FUN_01613110(L"VA_GetDesignUnitObject");
    }
  }
  else {
    uVar2 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x13a40),*(undefined4 *)(param_1 + 0xc));
  }
  return uVar2;
}

