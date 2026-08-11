/* Ghidra address: 00b61a00 */
/* Ghidra symbol: FUN_00b61a00 */


undefined8 FUN_00b61a00(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [64];
  undefined1 local_2c [16];
  short local_1c;
  short local_1a [5];
  
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
  if (local_1a[0] == 1) {
    FUN_00b257f0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),2);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1c);
    if (local_1c == 1) {
      FUN_0040d200(local_6c,0x40,0);
      FUN_00b25770(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_2c,0x10);
      FUN_00b25770(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_6c,0x10);
      FUN_00b25770(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_7c,0x10);
      uVar2 = 10;
      cVar1 = FUN_00b3f580(L"VelvetSweatshop",local_2c,local_6c,local_7c,local_8c);
      if (cVar1 != '\0') {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

