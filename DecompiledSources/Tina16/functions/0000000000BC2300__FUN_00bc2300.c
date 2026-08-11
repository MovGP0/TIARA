/* Ghidra address: 00bc2300 */
/* Ghidra symbol: FUN_00bc2300 */


void FUN_00bc2300(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    do {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar3);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x30) = uVar1;
        *(undefined8 *)(lVar4 + 0x38) = uVar2;
        FUN_00bbfd60(lVar4);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}

