/* Ghidra address: 00658680 */
/* Ghidra symbol: FUN_00658680 */


void FUN_00658680(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  if (((*(ushort *)((longlong)param_1 + 0x34) & 10) == 0) &&
     (lVar1 = *(longlong *)(param_2 + 0x10), (*(uint *)(lVar1 + 0x20) & 1) == 0)) {
    cVar2 = FUN_00650bc0(param_1,lVar1 + 0x18,lVar1 + 0x1c);
    if (cVar2 == '\0') {
      *(uint *)(lVar1 + 0x20) = *(uint *)(lVar1 + 0x20) | 1;
    }
  }
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  return;
}

