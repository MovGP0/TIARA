/* Ghidra address: 00710f90 */
/* Ghidra symbol: FUN_00710f90 */


void FUN_00710f90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c8) & 2) != 0) {
    uVar3 = FUN_00777cd0();
    uVar1 = FUN_00779380(uVar3,0xc);
    iVar2 = FUN_005fbf20(uVar1);
    *(longlong *)(param_2 + 0x10) = (longlong)iVar2;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

