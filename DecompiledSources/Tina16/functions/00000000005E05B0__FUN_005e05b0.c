/* Ghidra address: 005e05b0 */
/* Ghidra symbol: FUN_005e05b0 */


uint FUN_005e05b0(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
  }
  if (lVar4 == 0) {
    uVar5 = 0x80000000;
  }
  else {
    iVar3 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      iVar3 = (int)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
    }
    uVar5 = param_3 & iVar3 - 1U;
    while (uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar5 * 0x18),
          uVar1 != 0xffffffff) {
      if ((uVar1 == param_3) &&
         (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                            (*(longlong **)(param_1 + 0x18),
                             *(undefined8 *)
                              (*(longlong *)(param_1 + 8) + 8 + (longlong)(int)uVar5 * 0x18),param_2
                            ), cVar2 != '\0')) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar4 = 0;
      if (*(longlong *)(param_1 + 8) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
      }
      if (lVar4 <= (int)uVar5) {
        uVar5 = 0;
      }
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}

