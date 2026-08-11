/* Ghidra address: 0044be60 */
/* Ghidra symbol: FUN_0044be60 */


longlong FUN_0044be60(longlong param_1)

{
  undefined **ppuVar1;
  longlong lVar2;
  undefined **ppuVar3;
  int iVar4;
  
  FUN_00414ad0(param_1,&DAT_0044bfc4);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 2;
  *(undefined2 *)(param_1 + 10) = 0x2f;
  *(undefined2 *)(param_1 + 0xc) = 0x3a;
  *(undefined2 *)(param_1 + 0xe) = 0x2c;
  FUN_00414ad0(param_1 + 0x10,L"MM/dd/yyyy");
  FUN_00414ad0(param_1 + 0x18,L"dddd, dd MMMMM yyyy HH:mm:ss");
  FUN_00414ad0(param_1 + 0x20,&PTR_DAT_0044c040);
  FUN_00414ad0(param_1 + 0x28,&PTR_DAT_0044c054);
  FUN_00414ad0(param_1 + 0x30,L"HH:mm");
  FUN_00414ad0(param_1 + 0x38,L"HH:mm:ss");
  iVar4 = 0xc;
  ppuVar1 = &PTR_PTR_01dc13b8;
  lVar2 = param_1 + 0x40;
  ppuVar3 = &PTR_PTR_01dc1418;
  do {
    FUN_0041ddd0(lVar2,*ppuVar1);
    FUN_0041ddd0(lVar2 + 0x60,*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
    lVar2 = lVar2 + 8;
    ppuVar1 = ppuVar1 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 7;
  ppuVar1 = &PTR_PTR_01dc1478;
  lVar2 = param_1 + 0x100;
  ppuVar3 = &PTR_PTR_01dc14b0;
  do {
    FUN_0041ddd0(lVar2,*ppuVar1);
    FUN_0041ddd0(lVar2 + 0x38,*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
    lVar2 = lVar2 + 8;
    ppuVar1 = ppuVar1 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined2 *)(param_1 + 0x178) = 0x2c;
  *(undefined2 *)(param_1 + 0x17a) = 0x2e;
  *(undefined2 *)(param_1 + 0x17c) = 0x32;
  *(undefined1 *)(param_1 + 0x17e) = 0;
  return param_1;
}

