/* Ghidra address: 01b34cf0 */
/* Ghidra symbol: FUN_01b34cf0 */


void FUN_01b34cf0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,&local_10,0x88e);
  FUN_00414ad0(param_1 + 0x5fd8,local_10);
  *(undefined1 *)(param_1 + 0x7c0) = 1;
  *(undefined1 *)(param_1 + 0x7c1) = 0;
  *(undefined4 *)(param_1 + 0x764) = 0;
  FUN_00414ad0(param_1 + 0x778,&DAT_01b34e14);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x730),*(undefined8 *)(param_1 + 0x778));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),L"( ) / \' \" + * A B C");
  FUN_0064de00(*(undefined8 *)(DAT_02110d00 + 0x710),0);
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6f8),0);
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6b0),0);
  FUN_00414480(&local_10);
  return;
}

