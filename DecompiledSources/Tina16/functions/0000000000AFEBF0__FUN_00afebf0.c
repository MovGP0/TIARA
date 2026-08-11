/* Ghidra address: 00afebf0 */
/* Ghidra symbol: FUN_00afebf0 */


undefined8 FUN_00afebf0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x1b8) == 0)) ||
     (*(int *)(*(longlong *)(lVar1 + 0x1b8) + 0x10) < 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00610ca0(&PTR_FUN_00a903d8,1);
    FUN_00aa8900(*(undefined8 *)(param_1 + 0x8b0),uVar2);
  }
  return uVar2;
}

