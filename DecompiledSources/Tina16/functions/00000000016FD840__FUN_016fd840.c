/* Ghidra address: 016fd840 */
/* Ghidra symbol: FUN_016fd840 */


void FUN_016fd840(undefined8 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = -1;
  if ((*(longlong *)PTR_DAT_02002e78 != 0) &&
     (iVar1 = -1, *(char *)(*(longlong *)PTR_DAT_02002e78 + 0xa9) != '\0')) {
    iVar1 = FUN_007fd800(*(undefined8 *)PTR_DAT_02002e78);
    iVar1 = iVar1 + *(int *)(*(longlong *)PTR_DAT_02002e78 + 0x9c) + 10;
  }
  FUN_0072d480(param_1,param_2,param_3,param_4,0xffffffff,iVar1);
  return;
}

