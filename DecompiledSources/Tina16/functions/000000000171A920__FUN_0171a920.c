/* Ghidra address: 0171a920 */
/* Ghidra symbol: FUN_0171a920 */


undefined4 FUN_0171a920(longlong param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_2 == '\0') {
    lVar2 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),param_3);
    uVar1 = *(undefined4 *)(lVar2 + 0xb8);
  }
  else if (param_2 == '\x01') {
    lVar2 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),param_3);
    uVar1 = *(undefined4 *)(lVar2 + 0xbc);
  }
  else if (param_2 == '\x02') {
    lVar2 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),param_3);
    uVar1 = *(undefined4 *)(lVar2 + 0xc0);
  }
  else if (param_2 == '\x03') {
    lVar2 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),param_3);
    uVar1 = *(undefined4 *)(lVar2 + 0xc4);
  }
  else {
    lVar2 = FUN_0171bfe0(*(undefined8 *)(param_1 + 8),param_3);
    uVar1 = *(undefined4 *)(lVar2 + 200);
  }
  return uVar1;
}

