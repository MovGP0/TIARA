/* Ghidra address: 00a0ab50 */
/* Ghidra symbol: FUN_00a0ab50 */


uint FUN_00a0ab50(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00a09250);
  if (cVar1 != '\0') {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) == 0) ||
       (*(longlong *)(*(longlong *)(param_2 + 0x48) + 0x10) == 0)) {
      uVar2 = (uint)(*(longlong *)(param_1 + 0x48) == *(longlong *)(param_2 + 0x48));
    }
    else {
      uVar2 = FUN_00601f60(param_1,param_2);
    }
  }
  return uVar2;
}

