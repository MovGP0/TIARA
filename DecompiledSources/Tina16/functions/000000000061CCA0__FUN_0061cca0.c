/* Ghidra address: 0061cca0 */
/* Ghidra symbol: FUN_0061cca0 */


void FUN_0061cca0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  FUN_005b3970(param_1);
  if ((*(longlong *)(param_1 + 0x78) != 0) && ((*(ushort *)(param_1 + 0x34) & 0x10) != 0)) {
    lVar1 = *(longlong *)(param_1 + 8);
    cVar2 = FUN_004113d0(lVar1,&PTR_FUN_007f0370);
    if ((cVar2 != '\0') && (*(longlong *)(lVar1 + 0x510) != 0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x510) + 0x18))(*(longlong **)(lVar1 + 0x510));
    }
  }
  return;
}

