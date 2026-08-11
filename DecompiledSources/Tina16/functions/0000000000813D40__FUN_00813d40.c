/* Ghidra address: 00813d40 */
/* Ghidra symbol: FUN_00813d40 */


undefined8 FUN_00813d40(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_00813d90(param_1);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = FUN_008199e0(uVar3);
      uVar2 = FUN_007ff990(uVar2);
      uVar3 = FUN_0081a8c0(uVar3,uVar2);
      *(undefined8 *)(param_1 + 0x28) = uVar3;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
  return uVar3;
}

