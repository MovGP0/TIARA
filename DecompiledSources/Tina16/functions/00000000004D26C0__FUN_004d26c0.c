/* Ghidra address: 004d26c0 */
/* Ghidra symbol: FUN_004d26c0 */


void FUN_004d26c0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_78 [2];
  longlong local_68;
  longlong local_30 [2];
  
  if ((*(longlong *)(param_1 + 8) == 0) ||
     (*(longlong *)(param_2 + 8) != *(longlong *)(param_1 + 8))) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      uVar2 = FUN_004e0f60(&PTR_FUN_0048f0b8,1);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
    }
    local_68 = *(longlong *)(param_1 + 0x28) + 8;
    local_30[0] = param_2;
    iVar1 = FUN_00596a10(local_68,local_30);
    if (iVar1 < 0) {
      local_78[0] = param_2;
      FUN_00597e50(*(longlong *)(param_1 + 0x28) + 8,local_78);
      FUN_004d26c0(param_2,param_1);
    }
  }
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) | 0x100;
  return;
}

