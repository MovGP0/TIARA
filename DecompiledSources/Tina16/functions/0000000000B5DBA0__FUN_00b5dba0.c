/* Ghidra address: 00b5dba0 */
/* Ghidra symbol: FUN_00b5dba0 */


void FUN_00b5dba0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40 [2];
  byte local_2b;
  ushort local_2a;
  undefined8 local_28;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_40[0] = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_28 = 0;
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1a);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1c);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1e);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_2a);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  uVar2 = FUN_00b4fb40(*(undefined8 *)(lVar1 + 0x10),local_1a,local_1c);
  if (local_2a == 0) {
    FUN_00468a10(&local_88,0);
    FUN_00b4f030(uVar2,&local_88);
  }
  else {
    FUN_00b256b0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_2b);
    if ((local_2b & 1) == 1) {
      FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_28,(uint)local_2a * 2);
      FUN_00b15310(local_40,local_28);
      FUN_004689d0(&local_58,local_40[0]);
      FUN_00b4f030(uVar2,&local_58);
    }
    else {
      FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_28,local_2a);
      FUN_00468910(&local_70,local_28);
      FUN_00b4f030(uVar2,&local_70);
    }
  }
  FUN_00b5d680(param_1,uVar2,local_1e);
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_00417840(&local_88,&DAT_004013d8,3);
  FUN_00414520(local_40);
  FUN_004144d0(&local_28);
  return;
}

