/* Ghidra address: 00e815c0 */
/* Ghidra symbol: FUN_00e815c0 */


void FUN_00e815c0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x90) + -4);
  }
  *(int *)(param_1 + 0xac) = (int)uVar3;
  if ((int)uVar3 == 0) {
    param_1 = FUN_0044d490(&PTR_FUN_004334c0,CONCAT71((int7)(uVar3 >> 8),1),L"Pattern is empty");
    FUN_004134c0();
  }
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xac) + 1;
  *(undefined4 *)(param_1 + 0xa8) = 1;
  uVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0xb4 + (ulonglong)uVar1 * 4) = *(undefined4 *)(param_1 + 0xb0);
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0);
  iVar4 = *(int *)(param_1 + 0xac);
  iVar2 = 1;
  if (0 < iVar4) {
    do {
      *(int *)(param_1 + 0xb4 +
              (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x90) + -2 + (longlong)iVar2 * 2) * 4)
           = *(int *)(param_1 + 0xb0) - iVar2;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  while( true ) {
    iVar4 = *(int *)(param_1 + 0xac);
    if ((iVar4 <= *(int *)(param_1 + 0xa8)) ||
       (*(short *)(*(longlong *)(param_1 + 0x90) + -2 + (longlong)iVar4 * 2) ==
        *(short *)(*(longlong *)(param_1 + 0x90) + -2 +
                  (longlong)(iVar4 - *(int *)(param_1 + 0xa8)) * 2))) break;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  }
  *(undefined1 *)(param_1 + 0x400c0) = 1;
  return;
}

