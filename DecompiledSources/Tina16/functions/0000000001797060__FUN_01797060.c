/* Ghidra address: 01797060 */
/* Ghidra symbol: FUN_01797060 */


void FUN_01797060(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 == -1) {
    lVar1 = *(longlong *)(param_1 + 0xca8);
    uVar3 = FUN_00c3f320(lVar1);
    param_2 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x80))
                        (*(longlong **)(param_1 + 0xd18),*(undefined8 *)(lVar1 + 0x10),uVar3);
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x28))(*(longlong **)(param_1 + 0xd18));
  if (param_2 <= iVar2 + -1) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x30))
                      (*(longlong **)(param_1 + 0xd18),param_2);
    FUN_017970e0(param_1,uVar3);
  }
  return;
}

