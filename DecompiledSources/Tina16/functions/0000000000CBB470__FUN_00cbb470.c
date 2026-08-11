/* Ghidra address: 00cbb470 */
/* Ghidra symbol: FUN_00cbb470 */


void FUN_00cbb470(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x28))(*(longlong **)(param_2 + 0x30));
  if (iVar1 == 0) {
    lVar2 = (**(code **)(*param_1 + 0x58))(param_1,*(undefined8 *)(param_2 + 0x18),param_2);
    if (lVar2 != 0) {
      (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))
                (*(longlong **)(param_2 + 0x30),*(undefined8 *)(lVar2 + 0x30));
    }
  }
  return;
}

