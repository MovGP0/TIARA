/* Ghidra address: 0062a170 */
/* Ghidra symbol: FUN_0062a170 */


undefined8 FUN_0062a170(longlong param_1,longlong param_2,uint *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = 0xfffffffe;
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0 && (*plVar2 == param_1))))
  {
    iVar1 = (int)plVar2[1];
    if (((iVar1 - 0x39U < 0x39) &&
        ((0x100400400011001U >> ((ulonglong)(iVar1 - 0x39U) & 0x3f) & 1) != 0)) ||
       ((iVar1 == 0x29a || (iVar1 == 0x2a)))) {
      uVar4 = *(uint *)((longlong)plVar2 + 0x9c) + *(uint *)((longlong)plVar2 + 0x94);
      if (*(uint *)((longlong)plVar2 + 0x44) < uVar4) {
        uVar4 = *(uint *)((longlong)plVar2 + 0x44);
      }
      if ((param_2 != 0) && (uVar4 != 0)) {
        FUN_00626670(param_2,((ulonglong)*(uint *)((longlong)plVar2 + 0x94) + plVar2[10] +
                             (ulonglong)*(uint *)((longlong)plVar2 + 0x9c)) - (ulonglong)uVar4);
      }
      uVar3 = 0;
      if (param_3 != (uint *)0x0) {
        *param_3 = uVar4;
      }
    }
  }
  return uVar3;
}

