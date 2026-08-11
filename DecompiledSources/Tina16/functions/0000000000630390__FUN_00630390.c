/* Ghidra address: 00630390 */
/* Ghidra symbol: FUN_00630390 */


undefined8 FUN_00630390(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  code *pcVar3;
  
  uVar1 = 0xfffffffe;
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (pcVar3 = *(code **)(param_1 + 0x38), pcVar3 != (code *)0x0)) &&
     (((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0 && (*plVar2 == param_1))
      && ((int)plVar2[1] - 0x3f34U < 0x20)))) {
    if (plVar2[8] != 0) {
      (*pcVar3)(*(undefined8 *)(param_1 + 0x40),plVar2[8]);
      plVar2 = *(longlong **)(param_1 + 0x28);
      pcVar3 = *(code **)(param_1 + 0x38);
    }
    (*pcVar3)(*(undefined8 *)(param_1 + 0x40),plVar2);
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

