/* Ghidra address: 00b870e0 */
/* Ghidra symbol: FUN_00b870e0 */


void FUN_00b870e0(longlong param_1,undefined8 param_2,wchar_t *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined7 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = (undefined7)((ulonglong)param_2 >> 8);
  uVar3 = (undefined1)param_2;
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar3 = 1;
    param_3 = L"Cipher not initialized";
    param_1 = FUN_0044d490(&PTR_FUN_00b6a318);
    FUN_004134c0();
  }
  uVar2 = 0;
  uVar6 = 0;
  uVar7 = 0;
  do {
    uVar2 = uVar2 + 1 & 0xff;
    uVar5 = (ulonglong)uVar2;
    bVar1 = *(byte *)(param_1 + 0x80 + uVar5);
    uVar6 = uVar6 + bVar1 & 0xff;
    *(undefined1 *)(param_1 + 0x80 + uVar5) = *(undefined1 *)(param_1 + 0x80 + (ulonglong)uVar6);
    *(byte *)(param_1 + 0x80 + (ulonglong)uVar6) = bVar1;
    *(byte *)((longlong)param_3 + (ulonglong)uVar7) =
         *(byte *)(CONCAT71(uVar4,uVar3) + (ulonglong)uVar7) ^
         *(byte *)(param_1 + 0x80 +
                  (ulonglong)((uint)bVar1 + (uint)*(byte *)(param_1 + 0x80 + uVar5) & 0xff));
    uVar7 = uVar7 + 1;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return;
}

