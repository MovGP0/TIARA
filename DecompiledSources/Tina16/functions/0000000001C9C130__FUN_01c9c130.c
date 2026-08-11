/* Ghidra address: 01c9c130 */
/* Ghidra symbol: FUN_01c9c130 */


void FUN_01c9c130(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 7000) == 0) {
    uVar1 = FUN_00f4cc90(&PTR_FUN_00f4c278,1,*(undefined8 *)PTR_DAT_02004030,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0x488));
    *(undefined8 *)PTR_DAT_02002fa8 = uVar1;
    if (PTR_DAT_02004010[0x813] == '\0') {
      *(undefined1 *)(*(longlong *)PTR_DAT_02002fa8 + 0x6d8) = 0;
    }
    else if (PTR_DAT_02004010[0x813] == '\x01') {
      *(undefined1 *)(*(longlong *)PTR_DAT_02002fa8 + 0x6d8) = 1;
    }
    else {
      *(undefined1 *)(*(longlong *)PTR_DAT_02002fa8 + 0x6d8) = 2;
    }
    *(undefined1 *)(*(longlong *)PTR_DAT_02002fa8 + 0x6e0) = 0;
    FUN_008059a0(*(undefined8 *)PTR_DAT_02002fa8);
    FUN_01c6cf20(param_1);
    uVar1 = FUN_0136aba0(&PTR_FUN_01362bd8,1,param_1);
    FUN_01c6cee0(param_1,uVar1);
  }
  return;
}

