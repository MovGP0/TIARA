/* Ghidra address: 00691f10 */
/* Ghidra symbol: FUN_00691f10 */


void FUN_00691f10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  bVar2 = *(char *)(param_1 + 0x49) == '\x04';
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x49) = 2;
  }
  bVar3 = *(char *)(param_1 + 0x4a) == '\b';
  if (bVar3) {
    *(undefined1 *)(param_1 + 0x4a) = 6;
  }
  bVar4 = *(char *)(param_1 + 0x4c) == '\f';
  if (bVar4) {
    *(undefined1 *)(param_1 + 0x4c) = 10;
  }
  bVar5 = *(char *)(param_1 + 0x4d) == '\x10';
  if (bVar5) {
    *(undefined1 *)(param_1 + 0x4d) = 0xe;
  }
  bVar5 = bVar5 || (bVar4 || (bVar3 || bVar2));
  if (*(char *)(param_1 + 0x48) == '\x1c') {
    lVar1 = FUN_00786090(param_1);
    if (*(longlong *)(param_2 + 0x10) != lVar1) {
      *(undefined1 *)(param_1 + 0x48) = 0x1a;
      bVar5 = true;
    }
  }
  if (*(char *)(param_1 + 0x4b) == '\x18') {
    lVar1 = FUN_00786090(param_1);
    if (*(longlong *)(param_2 + 0x10) != lVar1) {
      *(undefined1 *)(param_1 + 0x4b) = 0x16;
      bVar5 = true;
    }
  }
  if (bVar5) {
    FUN_0068ff40(param_1);
  }
  return;
}

