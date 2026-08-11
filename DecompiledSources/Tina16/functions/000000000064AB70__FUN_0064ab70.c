/* Ghidra address: 0064ab70 */
/* Ghidra symbol: FUN_0064ab70 */


void FUN_0064ab70(undefined8 param_1,longlong param_2)

{
  FUN_00410f20(DAT_02012340);
  DAT_02012340 = 0;
  if (DAT_02012348 != (undefined8 *)0x0) {
    *(undefined1 *)((longlong)DAT_02012348 + 9) = 0;
    (**(code **)*DAT_02012348)
              (DAT_02012348,DAT_02012348[4],*(undefined4 *)(param_2 + 0x60),
               *(undefined4 *)(param_2 + 100),*(undefined1 *)(param_2 + 0x5f));
  }
  DAT_02012300 = 0;
  return;
}

