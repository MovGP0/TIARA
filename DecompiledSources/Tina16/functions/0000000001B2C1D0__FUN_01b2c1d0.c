/* Ghidra address: 01b2c1d0 */
/* Ghidra symbol: FUN_01b2c1d0 */


void FUN_01b2c1d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x5fe9) = 0;
  *(undefined4 *)(param_1 + 0x758) = 0x14;
  *(undefined4 *)(param_1 + 0x75c) = 0;
  *(undefined4 *)(param_1 + 0x760) = 8;
  *(undefined4 *)(param_1 + 0x764) = 0;
  *(undefined4 *)(param_1 + 0x76c) = 0;
  *(undefined4 *)(param_1 + 0x770) = 0;
  *(undefined4 *)(param_1 + 0x774) = 0;
  FUN_00414ad0(param_1 + 0x778,&DAT_01b2c354);
  *(undefined1 *)(param_1 + 0x7c0) = 1;
  *(undefined1 *)(param_1 + 0x7c1) = 0;
  *(undefined1 *)(param_1 + 0x7c2) = 1;
  *(undefined1 *)(param_1 + 0x7c3) = 0;
  *(undefined1 *)(param_1 + 0x7c4) = 0;
  *(undefined1 *)(param_1 + 0x7c5) = 1;
  *(undefined1 *)(param_1 + 0x7c6) = 1;
  *(undefined1 *)(param_1 + 0x7c7) = 1;
  *(undefined1 *)(param_1 + 0x7c8) = 1;
  *(undefined4 *)(param_1 + 0x758) = 0;
  *(undefined4 *)(param_1 + 0x75c) = 0;
  *(undefined4 *)(param_1 + 0x768) = 0;
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x7cc + (longlong)iVar1 * 4) = 0;
    *(undefined4 *)(param_1 + 0xbcc + (longlong)iVar1 * 4) = 1;
    iVar2 = 0;
    do {
      *(undefined4 *)(param_1 + 0xfcc + (longlong)iVar2 * 0x400 + (longlong)iVar1 * 4) = 0;
      *(undefined4 *)(param_1 + 0x37cc + (longlong)iVar2 * 0x400 + (longlong)iVar1 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x100);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x730),*(undefined8 *)(param_1 + 0x778));
  (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x128))(*(longlong **)(param_1 + 0x6c8),0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),L"( ) / \' \" + * A B C");
  *(undefined4 *)PTR_DAT_02004708 = 1000;
  return;
}

