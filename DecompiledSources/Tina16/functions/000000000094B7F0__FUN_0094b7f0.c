/* Ghidra address: 0094b7f0 */
/* Ghidra symbol: FUN_0094b7f0 */


void FUN_0094b7f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = param_2;
  iVar1 = FUN_00596a10(*(longlong *)(param_1 + 8) + 8,&local_10);
  if (iVar1 == -1) {
    uVar2 = FUN_0044d490(&PTR_FUN_00901268,1,L"Node not found error.");
    FUN_004134c0(uVar2);
  }
  return;
}

