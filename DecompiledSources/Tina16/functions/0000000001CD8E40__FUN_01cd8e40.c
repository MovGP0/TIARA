/* Ghidra address: 01cd8e40 */
/* Ghidra symbol: FUN_01cd8e40 */


void FUN_01cd8e40(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_2c [3];
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 0x40,4);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      local_2c[0] = 0xffffffff;
    }
    else {
      local_2c[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x40);
    }
    FUN_01d311c0(param_2,local_2c,4);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      local_2c[0] = 0xffffffff;
    }
    else {
      local_2c[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x40);
    }
    FUN_01d311c0(param_2,local_2c,4);
    FUN_01d311c0(param_2,param_1 + 0x70,1);
    FUN_01d311c0(param_2,param_1 + 0x74,4);
    FUN_01d311c0(param_2,param_1 + 0x80,1);
    FUN_01d311c0(param_2,param_1 + 0x88,8);
    FUN_01d311c0(param_2,param_1 + 0x90,4);
    FUN_01d31d60(param_2,*(undefined8 *)(param_1 + 0x98));
    FUN_01d31d60(param_2,*(undefined8 *)(param_1 + 0xa0));
    FUN_01d311c0(param_2,param_1 + 0xb8,8);
    FUN_01d311c0(param_2,param_1 + 0xc0,8);
    FUN_01d311c0(param_2,param_1 + 200,8);
    FUN_01d311c0(param_2,param_1 + 0xd0,8);
    FUN_01d31630(param_2,*(undefined8 *)(param_1 + 0xd8));
    FUN_01d313e0(param_2,*(undefined8 *)(param_1 + 0xe0));
    FUN_01d311c0(param_2,param_1 + 0xf0,1);
    FUN_01d311c0(param_2,param_1 + 0x120,1);
    FUN_01d311c0(param_2,param_1 + 0x12,1);
    uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_005dcf20(*(undefined8 *)(param_1 + 0x110),uVar2);
    FUN_01d320f0(param_2,uVar2);
    FUN_00410f20(uVar2);
  }
  return;
}

