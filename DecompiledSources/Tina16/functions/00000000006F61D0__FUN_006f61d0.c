/* Ghidra address: 006f61d0 */
/* Ghidra symbol: FUN_006f61d0 */


void FUN_006f61d0(longlong param_1,short *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  if (*param_2 == 0x104) {
    *param_3 = 1;
    if ((*(byte *)(param_2 + 6) & 1) == 0) {
      if ((*(byte *)(param_2 + 6) & 4) == 0) {
        uVar1 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar1,0x1014,
                           (longlong)-(*(int *)(param_2 + 2) - *(int *)(param_1 + 0x5b4)),
                           (longlong)-(*(int *)(param_2 + 4) - *(int *)(param_1 + 0x5b8)));
        *(undefined8 *)(param_1 + 0x5b4) = *(undefined8 *)(param_2 + 2);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x5b4) = *(undefined8 *)(param_2 + 2);
    }
  }
  return;
}

