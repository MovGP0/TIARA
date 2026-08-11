/* Ghidra address: 012bc430 */
/* Ghidra symbol: FUN_012bc430 */


void FUN_012bc430(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x6f8) = uVar3;
  lVar1 = *(longlong *)(param_1 + 0xd0);
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar1 + 0x18),
                             *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_0064b380(lVar1,2,uVar2);
  lVar1 = *(longlong *)(param_1 + 0xd0);
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar1 + 0x1c),
                             *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_0064b380(lVar1,3,uVar2);
  FUN_0064cf60(param_1,0x461);
  *(undefined1 *)(param_1 + 0x708) = 1;
  return;
}

