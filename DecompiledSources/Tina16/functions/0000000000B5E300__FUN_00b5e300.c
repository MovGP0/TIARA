/* Ghidra address: 00b5e300 */
/* Ghidra symbol: FUN_00b5e300 */


void FUN_00b5e300(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  short local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  ushort local_1a;
  
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1a);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1c);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1e);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_20);
  if ((local_20 == 0) || (local_20 == 1)) {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    uVar2 = FUN_00b4fb40(*(undefined8 *)(lVar1 + 0x10),local_1a,local_1c);
    if (local_20 == 1) {
      FUN_00468820(&local_40,1);
      FUN_00b4f030(uVar2,&local_40);
    }
    else {
      FUN_00468820(&local_58,0);
      FUN_00b4f030(uVar2,&local_58);
    }
    FUN_00b5d680(param_1,uVar2,local_1e);
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_00417840(&local_58,&DAT_004013d8,2);
  return;
}

