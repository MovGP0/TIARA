/* Ghidra address: 0062a220 */
/* Ghidra symbol: FUN_0062a220 */


undefined8 FUN_0062a220(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffe;
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0 && (*plVar1 == param_1))))
  {
    iVar2 = (int)plVar1[1];
    if (((iVar2 - 0x39U < 0x39) &&
        ((0x100400400011001U >> ((ulonglong)(iVar2 - 0x39U) & 0x3f) & 1) != 0)) ||
       ((iVar2 == 0x29a || (iVar2 == 0x2a)))) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x48) = 2;
      *(undefined4 *)(plVar1 + 5) = 0;
      plVar1[4] = plVar1[2];
      iVar2 = *(int *)((longlong)plVar1 + 0x2c);
      if (iVar2 < 0) {
        iVar2 = -iVar2;
        *(int *)((longlong)plVar1 + 0x2c) = iVar2;
      }
      uVar4 = 0x2a;
      if (iVar2 == 0) {
        uVar4 = 0x71;
      }
      uVar3 = 0x39;
      if (iVar2 != 2) {
        uVar3 = uVar4;
      }
      *(undefined4 *)(plVar1 + 1) = uVar3;
      if (iVar2 != 2) {
        uVar4 = FUN_006347b0(0,0,0);
      }
      else {
        uVar4 = FUN_00634c80(0,0,0);
      }
      *(undefined4 *)(param_1 + 0x4c) = uVar4;
      *(undefined4 *)(plVar1 + 8) = 0;
      FUN_00631f70(plVar1);
      uVar5 = 0;
    }
  }
  return uVar5;
}

