/* Ghidra address: 00a3c4c0 */
/* Ghidra symbol: FUN_00a3c4c0 */


void FUN_00a3c4c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = FUN_00a39e90(param_1);
  cVar1 = *(char *)(lVar2 + 0x491);
  if ((cVar1 == '\0') || (cVar1 == '\x02')) {
    if (cVar1 == '\0') {
      *(undefined1 *)(lVar2 + 0x491) = 4;
    }
    else {
      *(undefined1 *)(lVar2 + 0x491) = 6;
    }
    uVar3 = FUN_004095c0((longlong)(*(int *)(lVar2 + 0x488) * *(int *)(lVar2 + 0x48c)));
    *(undefined8 *)(lVar2 + 0x480) = uVar3;
    FUN_0040d200(uVar3,(longlong)(*(int *)(lVar2 + 0x488) * *(int *)(lVar2 + 0x48c)),0xff);
  }
  else if (cVar1 == '\x03') {
    lVar2 = FUN_00a33e30(*(undefined8 *)(param_1 + 0x160),&PTR_FUN_00a31a70);
    if (lVar2 == 0) {
      lVar2 = FUN_00a33ac0(*(undefined8 *)(param_1 + 0x160),&PTR_FUN_00a31a70);
    }
    FUN_00a33eb0(lVar2,0x100);
    FUN_0040d200(lVar2 + 0x29,0x100,0xff);
    lVar4 = FUN_00a33f40(lVar2);
    *(int *)(lVar2 + 0x10) = 1 << (*(byte *)(lVar4 + 0x490) & 0x1f);
    *(undefined1 *)(lVar2 + 0x28) = 0;
  }
  return;
}

