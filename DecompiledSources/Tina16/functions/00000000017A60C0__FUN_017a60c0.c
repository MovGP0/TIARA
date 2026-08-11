/* Ghidra address: 017a60c0 */
/* Ghidra symbol: FUN_017a60c0 */


void FUN_017a60c0(longlong param_1,undefined8 param_2,short *param_3,ushort param_4)

{
  short sVar1;
  char cVar2;
  ushort local_res20;
  undefined1 auStack_28 [32];
  
  local_res20 = param_4;
  if ((param_4 & 4) != 0) {
    sVar1 = *param_3;
    if (sVar1 == 0x43) {
      *param_3 = 0x2d;
    }
    else if (sVar1 == 0x56) {
      *param_3 = 0x2d;
      local_res20 = 1;
    }
    else if (sVar1 == 0x58) {
      *param_3 = 0x2e;
      local_res20 = 1;
    }
  }
  sVar1 = *param_3;
  if (sVar1 == 0x1b) {
    cVar2 = FUN_0064eb50(*(undefined8 *)(param_1 + 0x6f0));
    if (cVar2 != '\0') {
      FUN_0064eb00(*(undefined8 *)(param_1 + 0x6f0),0);
    }
  }
  else if (sVar1 == 0x2d) {
    if ((local_res20 & 4) != 0) {
      FUN_017a5ac0(auStack_28);
    }
    if ((local_res20 & 1) != 0) {
      FUN_017a5e30(auStack_28);
    }
  }
  else if ((sVar1 == 0x2e) && ((local_res20 & 1) != 0)) {
    FUN_017a5d40(auStack_28);
  }
  return;
}

