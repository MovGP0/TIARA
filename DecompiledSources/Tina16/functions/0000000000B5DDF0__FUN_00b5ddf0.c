/* Ghidra address: 00b5ddf0 */
/* Ghidra symbol: FUN_00b5ddf0 */


void FUN_00b5ddf0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 local_34;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a [9];
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_2a);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_2c);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_2e);
  FUN_00b25770(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_34,4);
  uVar3 = FUN_00b5bc40(local_34);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  uVar2 = FUN_00b4fb40(*(undefined8 *)(lVar1 + 0x10),local_2a[0],local_2c);
  FUN_00468860(&local_50,uVar3);
  FUN_00b4f030(uVar2,&local_50);
  FUN_00b5d680(param_1,uVar2,local_2e);
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_00460ba0(&local_50);
  return;
}

