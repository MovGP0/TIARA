/* Ghidra address: 0081a100 */
/* Ghidra symbol: FUN_0081a100 */


void FUN_0081a100(longlong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined1 auStack_28 [32];
  
  if (((*(longlong *)(param_1 + 0xa0) != 0) &&
      (sVar2 = FUN_007f9990(*(undefined4 *)(param_2 + 0x10)), sVar2 == 2)) &&
     (cVar1 = FUN_00814060(*(undefined8 *)(param_1 + 0xa0),*(undefined2 *)(param_2 + 8)),
     cVar1 != '\0')) {
    *(undefined8 *)(param_2 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d6) == '\x01') &&
     (sVar2 = FUN_007f9990(*(undefined4 *)(param_2 + 0x10)), sVar2 == 2)) {
    FUN_00785c20(param_1,param_2);
    if ((*(longlong *)(param_2 + 0x18) == 0) && (cVar1 = FUN_0081a080(auStack_28), cVar1 != '\0')) {
      uVar3 = FUN_0065b870(*(undefined8 *)(DAT_02012668 + 0xa8));
      thunk_FUN_041b2403(uVar3,0xb006,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}

