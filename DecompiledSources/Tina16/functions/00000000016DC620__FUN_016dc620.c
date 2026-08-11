/* Ghidra address: 016dc620 */
/* Ghidra symbol: FUN_016dc620 */


undefined8 FUN_016dc620(longlong param_1,char param_2,double param_3,longlong param_4)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  
  if ((param_2 == '\x06') && (param_1 != 0)) {
    if ((*(byte *)(param_4 + 1) & 0x80) != 0) {
      dVar2 = (double)FUN_016d6580(*(undefined8 *)(param_1 + 0x1360),*(undefined4 *)(param_4 + 10));
      dVar3 = (double)FUN_0040af10(param_3 / dVar2);
      param_3 = param_3 - dVar3 * dVar2;
    }
    uVar1 = FUN_0040c770(*(undefined8 *)(param_1 + 0x7a8));
    uVar4 = FUN_016d65b0(*(undefined8 *)(param_1 + 0x1360),param_3,uVar1);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

