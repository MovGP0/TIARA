/* Ghidra address: 01d76110 */
/* Ghidra symbol: FUN_01d76110 */


void FUN_01d76110(undefined8 param_1,undefined1 param_2,undefined1 param_3,char param_4,
                 undefined8 param_5,longlong param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_6 + 0x12908);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_016ec970(param_1,param_4 + (char)iVar1,param_2,param_3,
                   **(undefined1 **)(param_6 + 0x28 + (longlong)iVar1 * 0x2f8));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar3 = FUN_016eb0a0(param_1,1);
  *(undefined8 *)(param_6 + 0x18) = uVar3;
  uVar3 = FUN_016eb0a0(param_1,2);
  *(undefined8 *)(param_6 + 0x20) = uVar3;
  return;
}

