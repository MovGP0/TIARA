/* Ghidra address: 01112430 */
/* Ghidra symbol: FUN_01112430 */


void FUN_01112430(longlong param_1)

{
  byte bVar1;
  code *pcVar2;
  char local_19;
  
  local_19 = '\x01';
  pcVar2 = (code *)FUN_00411550(param_1,0xffab);
  (*pcVar2)(param_1,*(undefined1 *)(param_1 + 0x5c2),&local_19);
  if (local_19 != '\0') {
    bVar1 = *(byte *)(param_1 + 0x5c2);
    if (bVar1 < 5) {
      if (bVar1 == 4) {
        FUN_01113500(param_1);
      }
      else if (bVar1 == 0) {
        FUN_01112e90(param_1);
      }
      else if (bVar1 == 1) {
        FUN_01113160(param_1);
      }
      else if (bVar1 == 2) {
        FUN_011130b0(param_1);
      }
      else if (bVar1 == 3) {
        FUN_01113340(param_1);
      }
    }
    else if (bVar1 == 5) {
      FUN_01113700(param_1);
    }
    else if (bVar1 == 6) {
      FUN_01113800(param_1);
    }
    else if (bVar1 == 7) {
      FUN_01112fc0(param_1);
    }
    else if (bVar1 == 8) {
      FUN_011138d0(param_1);
    }
    FUN_01112540(param_1,*(undefined1 *)(param_1 + 0x5c2));
  }
  return;
}

