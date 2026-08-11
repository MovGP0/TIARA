/* Ghidra address: 006f2db0 */
/* Ghidra symbol: FUN_006f2db0 */


void FUN_006f2db0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x4c0);
    lVar5 = 0;
    if (lVar1 != 0) {
      FUN_006f6bd0(param_1,0);
      lVar5 = lVar1;
    }
    uVar4 = 0x402;
    if (*(char *)(param_1 + 0x558) != '\0') {
      uVar4 = 0x406;
    }
    if (*(char *)(param_1 + 0x55b) != '\0') {
      uVar4 = uVar4 | 1;
    }
    if (*(char *)(param_1 + 0x55c) != '\0') {
      uVar4 = uVar4 | 8;
    }
    if (*(char *)(param_1 + 0x55e) != '\0') {
      uVar4 = uVar4 | 0x20;
    }
    if (*(char *)(param_1 + 0x559) != '\0') {
      uVar4 = uVar4 | 0x100;
    }
    if (*(char *)(param_1 + 0x55a) != '\0') {
      uVar4 = uVar4 | 0x10;
    }
    if (*(char *)(param_1 + 0x5a0) != '\0') {
      uVar4 = uVar4 | 0x2000;
    }
    if ((*(byte *)(param_1 + 0x55d) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x55d) & 6) != 0) {
        uVar4 = uVar4 | 0x80;
      }
    }
    else {
      uVar4 = uVar4 | 0x40;
    }
    if ((*(byte *)(param_1 + 0x55d) & 4) != 0) {
      uVar4 = uVar4 | 0x800;
    }
    if ((*(byte *)(param_1 + 0x55d) & 2) != 0) {
      uVar4 = uVar4 | 0x1000;
    }
    uVar3 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar3,0x1036,0,uVar4);
    if (lVar5 != 0) {
      FUN_006f6bd0(param_1,lVar5);
    }
  }
  return;
}

