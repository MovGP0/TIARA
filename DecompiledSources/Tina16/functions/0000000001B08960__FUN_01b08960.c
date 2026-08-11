/* Ghidra address: 01b08960 */
/* Ghidra symbol: FUN_01b08960 */


void FUN_01b08960(longlong param_1,byte param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  *(byte *)(param_1 + 0x89) = param_2;
  uVar1 = 0;
  uVar2 = (ulonglong)param_2;
  if (uVar2 < 7) {
    if (uVar2 == 6) {
      uVar1 = 1;
    }
    else {
      if (uVar2 != 1) {
        if (uVar2 - 2 < 2) {
          uVar1 = 0x40;
          goto LAB_01b089e4;
        }
        if (uVar2 != 4) {
          uVar1 = 0;
          if (uVar2 == 5) {
            uVar1 = 0x20;
          }
          goto LAB_01b089e4;
        }
      }
      uVar1 = 0x10;
    }
  }
  else if (uVar2 == 7) {
    uVar1 = 0x800;
  }
  else if (uVar2 == 8) {
    uVar1 = 2;
  }
  else if (uVar2 == 0xc) {
    uVar1 = 8;
  }
LAB_01b089e4:
  FUN_01b0f830(*(undefined8 *)(param_1 + 0x1378),uVar1);
  return;
}

