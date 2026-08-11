/* Ghidra address: 01820b90 */
/* Ghidra symbol: FUN_01820b90 */


void FUN_01820b90(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x90))(*(longlong **)(param_1 + 0x78));
  *(undefined1 *)(param_1 + 0xc0) = 0;
  FUN_00414ad0(param_1 + 0x40,&DAT_01820c44);
  FUN_01820cc0(param_1,&DAT_01820c58);
  FUN_01820dd0(param_1,L"(*,*)");
  FUN_00414ad0(param_1 + 0x50,&DAT_01820c84);
  *(undefined8 *)(param_1 + 0x58) = 0x3ff000000000000;
  *(undefined8 *)(param_1 + 0x60) = 0x7fffffe87fffffe;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_00414480(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x98) = 1;
  FUN_00414ad0(param_1 + 0xa0,&DAT_01820cb4);
  *(undefined1 *)(param_1 + 0x99) = 1;
  return;
}

