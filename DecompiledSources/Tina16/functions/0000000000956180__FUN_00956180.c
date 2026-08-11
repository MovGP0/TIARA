/* Ghidra address: 00956180 */
/* Ghidra symbol: FUN_00956180 */


void FUN_00956180(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_20;
  
  if (*param_2 != 0) {
    local_20 = *param_2;
    iVar1 = FUN_00596a10(*(longlong *)(param_1 + 0x88) + 8,&local_20);
    if (iVar1 == -1) {
      uVar2 = FUN_0044d490(&PTR_FUN_00900e68,1,L"Wrong document error.");
      iVar1 = FUN_004134c0(uVar2);
    }
    FUN_00599670(*(longlong *)(param_1 + 0x88) + 8,iVar1,5);
    FUN_00410f20(*param_2);
    *param_2 = 0;
  }
  return;
}

