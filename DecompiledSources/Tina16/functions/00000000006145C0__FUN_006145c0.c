/* Ghidra address: 006145c0 */
/* Ghidra symbol: FUN_006145c0 */


void FUN_006145c0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_78 [2];
  longlong local_68;
  longlong local_30 [2];
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x80) == 0) {
      uVar2 = FUN_00614f00(&PTR_FUN_006133f0,1);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
    }
    local_68 = *(longlong *)(param_1 + 0x80) + 8;
    local_30[0] = param_2;
    iVar1 = FUN_00596a10(local_68,local_30);
    if (iVar1 < 0) {
      local_78[0] = param_2;
      FUN_00597e50(*(longlong *)(param_1 + 0x80) + 8,local_78);
    }
    *(longlong *)(param_2 + 8) = param_1;
  }
  return;
}

