/* Ghidra address: 00649e70 */
/* Ghidra symbol: FUN_00649e70 */


bool FUN_00649e70(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(longlong *)(DAT_02012300 + 0x20) != 0) {
    iVar1 = FUN_00649ce0(*(undefined8 *)(DAT_02012300 + 0x10),param_1,DAT_02012300,
                         *(longlong *)(DAT_02012300 + 0x20),DAT_02012300 + 0x18);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

