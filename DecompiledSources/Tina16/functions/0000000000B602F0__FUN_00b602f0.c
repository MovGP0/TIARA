/* Ghidra address: 00b602f0 */
/* Ghidra symbol: FUN_00b602f0 */


void FUN_00b602f0(longlong param_1)

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
  if (local_1a[0] != 1) {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,
                         L"Error: data is protected, and this encryption type not supported.");
    FUN_004134c0(uVar2);
  }
  FUN_00b257f0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),2);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1c);
  if (local_1c != 1) {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Error: strong encryption not supported.");
    FUN_004134c0(uVar2);
  }
  FUN_0040d200(local_6c,0x40,0);
  FUN_00b25770(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_2c,0x10);
  FUN_00b25770(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_6c,0x10);
  FUN_00b25770(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_7c,0x10);
  cVar1 = FUN_00b3f580(*(undefined8 *)(param_1 + 0x58),local_2c,local_6c,local_7c,local_8c);
  if (cVar1 == '\0') {
    cVar1 = FUN_00b3f580(L"VelvetSweatshop",local_2c,local_6c,local_7c,local_8c);
    if (cVar1 == '\0') {
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Error: file is protected, and password is invalid!"
                          );
      FUN_004134c0(uVar2);
    }
  }
  FUN_00b5ad60(*(undefined8 *)(param_1 + 0x70),local_8c);
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}

