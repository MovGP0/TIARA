/* Ghidra address: 006297a0 */
/* Ghidra symbol: FUN_006297a0 */


undefined8 FUN_006297a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = 0xfffffffe;
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(code **)(param_1 + 0x38) != (code *)0x0)) &&
     ((plVar3 = *(longlong **)(param_1 + 0x28), plVar3 != (longlong *)0x0 && (*plVar3 == param_1))))
  {
    iVar1 = (int)plVar3[1];
    if (((iVar1 - 0x39U < 0x39) &&
        ((0x100400400011001U >> ((ulonglong)(iVar1 - 0x39U) & 0x3f) & 1) != 0)) ||
       ((iVar1 == 0x29a || (iVar1 == 0x2a)))) {
      if (plVar3[2] != 0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),plVar3[2]);
        plVar3 = *(longlong **)(param_1 + 0x28);
      }
      if (plVar3[0xd] != 0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),plVar3[0xd]);
        plVar3 = *(longlong **)(param_1 + 0x28);
      }
      if (plVar3[0xc] != 0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),plVar3[0xc]);
        plVar3 = *(longlong **)(param_1 + 0x28);
      }
      if (plVar3[10] != 0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),plVar3[10]);
        plVar3 = *(longlong **)(param_1 + 0x28);
      }
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),plVar3);
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar2 = 0xfffffffd;
      if (iVar1 != 0x71) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

