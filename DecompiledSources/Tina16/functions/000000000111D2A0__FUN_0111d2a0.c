/* Ghidra address: 0111d2a0 */
/* Ghidra symbol: FUN_0111d2a0 */


undefined8 FUN_0111d2a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  if (*(short *)(param_1 + 0x2e) == 0x2e) {
    uVar3 = *(ushort *)
             (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) +
             (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x150) * 2);
    if (uVar3 < 0x100) {
      bVar5 = ((byte)(&DAT_0111d47c)[(longlong)(ulonglong)uVar3 >> 3] >> ((ulonglong)uVar3 & 7) & 1)
              != 0;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x150);
      if ((*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) + (longlong)iVar2 * 2) ==
           0x2e) &&
         (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) +
                    (longlong)(iVar2 + 1) * 2) == 0x2e)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x150);
        *piVar1 = *piVar1 + 2;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x163) = 7;
      return 0;
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x150);
    *piVar1 = *piVar1 + 1;
    uVar4 = *(ulonglong *)(param_1 + 0x40);
    *(undefined1 *)(uVar4 + 0x163) = 0xd;
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  else {
    uVar3 = *(short *)(param_1 + 0x2e) - 0x30;
    uVar4 = (ulonglong)uVar3;
    if (uVar3 == 0) {
      *(undefined2 *)(param_1 + 0x2e) =
           *(undefined2 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) +
            (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x150) * 2);
      uVar3 = *(ushort *)(param_1 + 0x2e);
      if (uVar3 < 0x100) {
        bVar5 = ((byte)(&DAT_0111d49c)[(longlong)(ulonglong)uVar3 >> 3] >> ((ulonglong)uVar3 & 7) &
                1) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x150);
        *piVar1 = *piVar1 + 1;
        uVar4 = *(ulonglong *)(param_1 + 0x40);
        *(undefined1 *)(uVar4 + 0x163) = 0xb;
        *(undefined1 *)(param_1 + 0x2d) = 3;
      }
      else if (*(short *)(param_1 + 0x2e) == 0x2e) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x150);
        *piVar1 = *piVar1 + 1;
        *(undefined1 *)(param_1 + 0x2d) = 1;
        uVar4 = *(ulonglong *)(param_1 + 0x40);
        *(undefined1 *)(uVar4 + 0x163) = 0xd;
      }
      else {
        uVar3 = *(ushort *)(param_1 + 0x2e);
        if (uVar3 < 0x100) {
          uVar4 = (ulonglong)
                  CONCAT11((char)(uVar3 >> 8),
                           ((byte)(&DAT_0111d47c)[(longlong)(ulonglong)uVar3 >> 3] >>
                            ((ulonglong)uVar3 & 7) & 1) != 0);
        }
        else {
          uVar4 = 0;
        }
        if ((char)uVar4 != '\0') {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x150);
          *piVar1 = *piVar1 + 1;
          uVar3 = *(ushort *)(param_1 + 0x2e);
          if (uVar3 < 0x100) {
            bVar5 = ((byte)(&DAT_0111d4bc)[(longlong)(ulonglong)uVar3 >> 3] >>
                     ((ulonglong)uVar3 & 7) & 1) != 0;
          }
          else {
            bVar5 = false;
          }
          if (bVar5) {
            uVar4 = *(ulonglong *)(param_1 + 0x40);
            *(undefined1 *)(uVar4 + 0x163) = 0xc;
            *(undefined1 *)(param_1 + 0x2d) = 4;
          }
          else {
            uVar4 = *(ulonglong *)(param_1 + 0x40);
            *(undefined1 *)(uVar4 + 0x163) = 0xd;
            *(undefined1 *)(param_1 + 0x2d) = 2;
          }
        }
      }
    }
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}

