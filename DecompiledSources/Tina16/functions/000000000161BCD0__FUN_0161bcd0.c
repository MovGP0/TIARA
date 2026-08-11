/* Ghidra address: 0161bcd0 */
/* Ghidra symbol: FUN_0161bcd0 */


undefined8 FUN_0161bcd0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  cVar1 = *(char *)(param_1 + 0x21);
  if (cVar1 == 'e') {
    uVar3 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x5f8),iVar2);
  }
  else if (cVar1 == 'f') {
    iVar2 = *(int *)(param_2 + 0x5d8) + iVar2;
    if (*(int *)(*(longlong *)(param_2 + 0x5f8) + 0x10) + -1 < iVar2) {
      FUN_01613110(L"VA_GetObject: generics");
    }
    uVar3 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x5f8),iVar2);
  }
  else if (((cVar1 == 'r') && (*(char *)(param_1 + 0x22) == '~')) && (*(int *)(param_1 + 0x10) != 0)
          ) {
    uVar3 = FUN_0161bc30(param_1,param_3,param_4);
  }
  else if ((cVar1 == 'o') || (cVar1 == 'r')) {
    if (*(int *)(*(longlong *)(param_2 + 0x600) + 0x10) + -1 < iVar2) {
      FUN_01613110(L"VA_GetObject: signals");
    }
    uVar3 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x600),iVar2);
  }
  else if ((char)param_4 != '\0') {
    FUN_01613110(L"VA_GetObject");
  }
  return uVar3;
}

