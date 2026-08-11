/* Ghidra address: 00b62d60 */
/* Ghidra symbol: FUN_00b62d60 */


void FUN_00b62d60(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = FUN_00b17280(*(undefined8 *)(param_1 + 0x20));
  if (iVar1 % 0x200 != 0) {
    iVar1 = 0x200 - iVar1 % 0x200;
    FUN_00415d10(local_20,iVar1,0);
    uVar2 = FUN_00414df0(local_20);
    FUN_0040d200(uVar2,(longlong)iVar1,0);
    uVar2 = FUN_00414df0(local_20);
    FUN_00b173c0(*(undefined8 *)(param_1 + 0x20),uVar2,iVar1);
    FUN_004144d0(local_20);
  }
  FUN_004144d0(local_20);
  return;
}

