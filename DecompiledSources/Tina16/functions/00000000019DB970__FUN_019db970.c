/* Ghidra address: 019db970 */
/* Ghidra symbol: FUN_019db970 */


void FUN_019db970(longlong param_1)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x810) != '\0') {
    bVar2 = *(int *)(*(longlong *)(param_1 + 0x778) + 0x4a8) == 0;
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar2);
    if (bVar2) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x790),*(undefined8 *)(param_1 + 0x868));
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x788),uVar1 & 0xffffffff);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c0),uVar1 & 0xffffffff);
    (**(code **)(**(longlong **)(param_1 + 0x790) + 0x128))
              (*(longlong **)(param_1 + 0x790),uVar1 & 0xffffffff);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x790),uVar1 & 0xffffffff);
    (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x128))
              (*(longlong **)(param_1 + 0x7c8),uVar1 & 0xffffffff);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c8),uVar1 & 0xffffffff);
  }
  return;
}

