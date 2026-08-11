/* Ghidra address: 00f30110 */
/* Ghidra symbol: FUN_00f30110 */


void FUN_00f30110(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                    (*(longlong **)(param_1 + 0x10),param_2,param_3);
  uVar2 = (ulonglong)iVar1;
  if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar2)) {
    uVar2 = FUN_00410a90();
  }
  *(undefined1 *)(param_2 + uVar2) = 0x3a;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
            (*(longlong **)(param_1 + 0x18),param_2,iVar1 + 1);
  return;
}

