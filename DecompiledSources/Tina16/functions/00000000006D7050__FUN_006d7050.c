/* Ghidra address: 006d7050 */
/* Ghidra symbol: FUN_006d7050 */


void FUN_006d7050(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_006d5120(param_1);
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0x280))(param_1);
  }
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
    lVar2 = FUN_007f9b70(param_1,1);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x510) != 0)) {
      (**(code **)(**(longlong **)(lVar2 + 0x510) + 0x18))(*(longlong **)(lVar2 + 0x510));
    }
  }
  FUN_006d4d60(param_1);
  return;
}

