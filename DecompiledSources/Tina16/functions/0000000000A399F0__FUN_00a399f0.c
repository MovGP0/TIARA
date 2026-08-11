/* Ghidra address: 00a399f0 */
/* Ghidra symbol: FUN_00a399f0 */


void FUN_00a399f0(undefined8 param_1,undefined4 *param_2,uint *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar2 = FUN_00a3c6f0(param_1);
  if (cVar2 == '\0') {
    *param_3 = 0;
    *param_2 = 0;
    return;
  }
  lVar4 = FUN_00a39e90(param_1);
  lVar5 = FUN_00a39e90(param_1);
  lVar6 = FUN_00a39e90(param_1);
  uVar3 = FUN_00a32fa0(*(undefined4 *)(lVar4 + 0x488),*(undefined1 *)(lVar5 + 0x491),
                       *(undefined1 *)(lVar6 + 0x490));
  *param_2 = uVar3;
  lVar4 = FUN_00a39e90(param_1);
  bVar1 = *(byte *)(lVar4 + 0x491);
  if (bVar1 < 4) {
    if (bVar1 == 3) {
      *param_3 = 1;
      return;
    }
    if (bVar1 == 0) {
      lVar4 = FUN_00a39e90(param_1);
      if (*(char *)(lVar4 + 0x490) == '\x10') {
        *param_3 = 2;
        return;
      }
      *param_3 = 1;
      return;
    }
    if (bVar1 == 2) {
      lVar4 = FUN_00a39e90(param_1);
      *param_3 = (uint)(((ulonglong)*(byte *)(lVar4 + 0x490) * 3) / 8);
      return;
    }
  }
  else {
    if (bVar1 == 4) {
      lVar4 = FUN_00a39e90(param_1);
      *param_3 = ((uint)*(byte *)(lVar4 + 0x490) * 2) / 8;
      return;
    }
    if (bVar1 == 6) {
      lVar4 = FUN_00a39e90(param_1);
      *param_3 = ((uint)*(byte *)(lVar4 + 0x490) * 4) / 8;
      return;
    }
  }
  *param_3 = 0;
  return;
}

