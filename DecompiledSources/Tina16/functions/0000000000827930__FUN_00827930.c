/* Ghidra address: 00827930 */
/* Ghidra symbol: FUN_00827930 */


ulonglong FUN_00827930(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  FUN_00827890(param_1);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2);
  if (param_2 != (longlong *)0x0) {
    uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    if (0 < (int)uVar4) {
      uVar1 = FUN_0060a330(param_2);
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      iVar2 = (**(code **)(*param_2 + 0x60))(param_2);
      iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
      uVar4 = (longlong)iVar2 / (longlong)iVar3 & 0xffffffff;
      if (iVar2 % iVar3 == 0) {
        iVar3 = (**(code **)(*param_2 + 0x60))(param_2);
        iVar2 = (**(code **)(*param_2 + 0x48))(param_2);
        iVar3 = iVar3 / iVar2;
        if (4 < iVar3) {
          iVar3 = 1;
        }
        uVar4 = FUN_008279d0(param_1,iVar3);
      }
    }
  }
  return uVar4;
}

