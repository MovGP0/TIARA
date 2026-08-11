/* Ghidra address: 01951370 */
/* Ghidra symbol: FUN_01951370 */


void FUN_01951370(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_2 != *(longlong *)(param_1 + 0x40)) {
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x88),param_2);
  }
  iVar1 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x30))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x20))
                        (*(longlong **)(param_2 + 0x80),iVar3);
      FUN_01951370(param_1,uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

