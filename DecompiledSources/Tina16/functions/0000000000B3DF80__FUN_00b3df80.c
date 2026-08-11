/* Ghidra address: 00b3df80 */
/* Ghidra symbol: FUN_00b3df80 */


void FUN_00b3df80(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      *(uint *)(param_1 + (ulonglong)uVar1 * 4) =
           CONCAT13(*(undefined1 *)(param_2 + (ulonglong)(uVar2 + 3)),
                    CONCAT12(*(undefined1 *)(param_2 + (ulonglong)(uVar2 + 2)),
                             CONCAT11(*(undefined1 *)(param_2 + (ulonglong)(uVar2 + 1)),
                                      *(undefined1 *)(param_2 + (ulonglong)uVar2))));
      uVar2 = uVar2 + 4;
      uVar1 = uVar1 + 1;
    } while (uVar2 < param_3);
  }
  return;
}

