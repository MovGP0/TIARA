/* Ghidra address: 0095f0f0 */
/* Ghidra symbol: FUN_0095f0f0 */


longlong FUN_0095f0f0(longlong param_1,longlong param_2,wchar_t *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined7 uVar4;
  bool bVar5;
  
  uVar4 = (undefined7)((ulonglong)param_2 >> 8);
  uVar3 = (undefined1)param_2;
  if (*(longlong *)(param_1 + 0x30) != param_2) {
    if (param_2 != 0) {
      if (*(longlong *)(param_2 + 0x18) != *(longlong *)(param_1 + 0x18)) {
        uVar3 = 1;
        param_3 = L"Not supported error: Wrong owner element declaration.";
        uVar2 = FUN_0044d490(&PTR_FUN_009013a8,1,
                             L"Not supported error: Wrong owner element declaration.");
        param_1 = FUN_004134c0(uVar2);
      }
      bVar1 = *(byte *)(CONCAT71(uVar4,uVar3) + 0x29);
      if (bVar1 < 8) {
        bVar5 = ((byte)((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (bVar1 & 0x1f)) &
                *(byte *)(param_1 + 0x29)) != 0;
      }
      else {
        bVar5 = false;
      }
      if (!bVar5) {
        uVar3 = 1;
        uVar2 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
        param_1 = FUN_004134c0(uVar2);
      }
      if (*(char *)(CONCAT71(uVar4,uVar3) + 0x2b) != '\0') {
        uVar3 = 1;
        uVar2 = FUN_0044d490(&PTR_FUN_009014f0,1,L"Content model in use error.");
        param_1 = FUN_004134c0(uVar2);
      }
      *(undefined1 *)(CONCAT71(uVar4,uVar3) + 0x2b) = 1;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x2b) = 0;
    }
    param_2 = *(longlong *)(param_1 + 0x30);
    *(ulonglong *)(param_1 + 0x30) = CONCAT71(uVar4,uVar3);
  }
  return param_2;
}

