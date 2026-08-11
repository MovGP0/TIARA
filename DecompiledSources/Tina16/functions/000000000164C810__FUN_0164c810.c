/* Ghidra address: 0164c810 */
/* Ghidra symbol: FUN_0164c810 */


void FUN_0164c810(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  uint local_e8 [6];
  longlong local_d0;
  undefined8 local_58;
  undefined2 local_4e;
  undefined1 local_48;
  undefined1 local_47;
  
  uVar1 = (undefined1)((ushort)param_3 >> 8);
  local_e8[0] = FUN_016e9e80(param_1,1);
  local_e8[0] = local_e8[0] & 0xff;
  local_58 = FUN_016eb0a0(param_1,1);
  FUN_016ec2d0(param_1,1,CONCAT11(uVar1,1),2,3,4,1);
  FUN_016ed320(param_1,1,0,local_58,0);
  local_48 = 3;
  local_47 = 4;
  local_d0 = FUN_00409570(0xc);
  *(undefined1 *)(local_d0 + 1) = 1;
  *(undefined1 *)(local_d0 + 2) = 2;
  local_4e = FUN_016ea1b0(param_1,2);
  FUN_016ea050(param_1,local_e8,0xd0);
  FUN_016e9f40(param_1,FUN_0164c6c0);
  FUN_016e9ff0(param_1,FUN_0164c3d0);
  FUN_016ea040(param_1,FUN_0164c5a0);
  FUN_016e9f50(param_1,FUN_0164c7f0);
  return;
}

