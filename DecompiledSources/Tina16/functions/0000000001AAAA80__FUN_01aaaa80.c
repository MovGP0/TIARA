/* Ghidra address: 01aaaa80 */
/* Ghidra symbol: FUN_01aaaa80 */


longlong FUN_01aaaa80(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  short sVar3;
  
  sVar3 = *(short *)(param_1 + 0x10);
  if (sVar3 != 0) {
    plVar2 = (longlong *)(param_1 + 0x18);
    do {
      uVar1 = (*(code *)**(undefined8 **)(*plVar2 + 0x41f0))(*plVar2);
      FUN_004095f0(uVar1);
      *plVar2 = 0;
      plVar2 = plVar2 + 1;
      sVar3 = sVar3 + -1;
    } while (sVar3 != 0);
  }
  FUN_004095f0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}

