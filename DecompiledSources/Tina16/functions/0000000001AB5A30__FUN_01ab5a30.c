/* Ghidra address: 01ab5a30 */
/* Ghidra symbol: FUN_01ab5a30 */


void FUN_01ab5a30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_2d;
  int local_2c [3];
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 0x40,4);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      local_2c[0] = -1;
    }
    else {
      local_2c[0] = *(int *)(*(longlong *)(param_1 + 0x70) + 0x40);
    }
    FUN_01d311c0(param_2,local_2c,4);
    if (*(longlong *)(param_1 + 0x78) == 0) {
      local_2c[0] = -1;
    }
    else {
      local_2c[0] = *(int *)(*(longlong *)(param_1 + 0x78) + 0x40);
    }
    FUN_01d311c0(param_2,local_2c,4);
    FUN_01d311c0(param_2,param_1 + 0x5c,1);
    FUN_01d31ea0(param_2,*(undefined8 *)(param_1 + 0x60));
    FUN_01d311c0(param_2,param_1 + 0xa8,1);
    FUN_01d311c0(param_2,param_1 + 0xb8,4);
    FUN_01d311c0(param_2,param_1 + 0xbc,4);
    FUN_01d311c0(param_2,param_1 + 0xc0,4);
    local_2c[0] = (int)*(short *)(*(longlong *)(param_1 + 0xd0) + 0x18);
    FUN_01d311c0(param_2,local_2c,4);
    local_2c[0] = (int)*(short *)(*(longlong *)(param_1 + 0xe0) + 0x30);
    FUN_01d311c0(param_2,local_2c,4);
    local_2d = FUN_01abd060(*(undefined8 *)(param_1 + 200));
    FUN_01d311c0(param_2,&local_2d,1);
    local_2c[0] = *(int *)(*(longlong *)(param_1 + 0xf8) + 0x40);
    FUN_01d311c0(param_2,local_2c,4);
    local_2c[0] = *(int *)(*(longlong *)(param_1 + 0x100) + 0x40);
    FUN_01d311c0(param_2,local_2c,4);
    uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_005dcf20(*(undefined8 *)(param_1 + 0xa0),uVar2);
    FUN_01d320f0(param_2,uVar2);
    FUN_00410f20(uVar2);
  }
  return;
}

