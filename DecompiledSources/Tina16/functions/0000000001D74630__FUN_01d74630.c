/* Ghidra address: 01d74630 */
/* Ghidra symbol: FUN_01d74630 */


void FUN_01d74630(undefined8 param_1,undefined1 param_2,undefined4 param_3,char param_4,
                 undefined8 param_5,longlong param_6)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = 0;
  do {
    FUN_016ec970(param_1,param_4 + bVar1,param_2,param_3,
                 **(undefined1 **)(param_6 + 0x28 + (ulonglong)bVar1 * 0x2f8));
    bVar1 = bVar1 + 1;
  } while (bVar1 != 8);
  uVar2 = FUN_016eb0a0(param_1,1);
  *(undefined8 *)(param_6 + 0x18) = uVar2;
  uVar2 = FUN_016eb0a0(param_1,2);
  *(undefined8 *)(param_6 + 0x20) = uVar2;
  return;
}

