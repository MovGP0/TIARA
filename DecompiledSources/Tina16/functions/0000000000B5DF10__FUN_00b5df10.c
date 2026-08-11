/* Ghidra address: 00b5df10 */
/* Ghidra symbol: FUN_00b5df10 */


void FUN_00b5df10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 local_34;
  undefined2 local_2e;
  short local_2c;
  undefined2 local_2a [9];
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_2a);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_2c);
  while( true ) {
    iVar1 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
    if (iVar1 < 7) break;
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_2e);
    FUN_00b25770(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_34,4);
    uVar4 = FUN_00b5bc40(local_34);
    lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    uVar3 = FUN_00b4fb40(*(undefined8 *)(lVar2 + 0x10),local_2a[0],local_2c);
    FUN_00468860(&local_50,uVar4);
    FUN_00b4f030(uVar3,&local_50);
    FUN_00b5d680(param_1,uVar3,local_2e);
    local_2c = local_2c + 1;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_00460ba0(&local_50);
  return;
}

