/* Ghidra address: 00b5e060 */
/* Ghidra symbol: FUN_00b5e060 */


void FUN_00b5e060(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1a);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1c);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1e);
  FUN_00b25770(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_28,8);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  uVar2 = FUN_00b4fb40(*(undefined8 *)(lVar1 + 0x10),local_1a,local_1c);
  FUN_00468860(&local_40,local_28);
  FUN_00b4f030(uVar2,&local_40);
  FUN_00b5d680(param_1,uVar2,local_1e);
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_00460ba0(&local_40);
  return;
}

