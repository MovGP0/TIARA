/* Ghidra address: 00b42460 */
/* Ghidra symbol: FUN_00b42460 */


void FUN_00b42460(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ushort local_4a;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar1 = FUN_00b258c0(param_2);
  if (iVar1 < 0x12) {
    uVar2 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
    FUN_004134c0(uVar2);
  }
  FUN_00b257f0(param_2,2);
  FUN_00b256e0(param_2,&local_4a);
  local_48 = (uint)local_4a;
  FUN_00b256e0(param_2,&local_4a);
  local_44 = (uint)local_4a;
  FUN_00b256e0(param_2,&local_4a);
  local_40 = (uint)local_4a;
  FUN_00b256e0(param_2,&local_4a);
  local_3c = (uint)local_4a;
  FUN_00b256e0(param_2,&local_4a);
  local_38 = (uint)local_4a;
  FUN_00b256e0(param_2,&local_4a);
  local_34 = (uint)local_4a;
  FUN_00b256e0(param_2,&local_4a);
  local_30 = (uint)local_4a;
  FUN_00b256e0(param_2,&local_4a);
  local_2c = (uint)local_4a;
  if (*(char *)(param_1 + 0x34) != '\0') {
    iVar1 = FUN_00b41f80(param_1);
    if (iVar1 < 1) {
      uVar2 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
      FUN_004134c0(uVar2);
    }
    iVar1 = FUN_00b41f80(param_1);
    lVar3 = FUN_00b41f60(param_1,iVar1 + -1);
    *(ulonglong *)(lVar3 + 0xc) = CONCAT44(local_44,local_48);
    *(ulonglong *)(lVar3 + 0x14) = CONCAT44(local_3c,local_40);
    *(ulonglong *)(lVar3 + 0x1c) = CONCAT44(local_34,local_38);
    *(ulonglong *)(lVar3 + 0x24) = CONCAT44(local_2c,local_30);
  }
  return;
}

