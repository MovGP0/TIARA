/* Ghidra address: 0062bd30 */
/* Ghidra symbol: FUN_0062bd30 */


undefined8
FUN_0062bd30(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffe;
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0 && (*plVar2 == param_1))))
  {
    iVar1 = (int)plVar2[1];
    if (((iVar1 - 0x39U < 0x39) &&
        ((0x100400400011001U >> ((ulonglong)(iVar1 - 0x39U) & 0x3f) & 1) != 0)) ||
       ((iVar1 == 0x29a || (iVar1 == 0x2a)))) {
      *(undefined4 *)((longlong)plVar2 + 0xb4) = param_2;
      *(undefined4 *)(plVar2 + 0x15) = param_3;
      *(undefined4 *)(plVar2 + 0x17) = param_4;
      *(undefined4 *)((longlong)plVar2 + 0xa4) = param_5;
      uVar3 = 0;
    }
  }
  return uVar3;
}

