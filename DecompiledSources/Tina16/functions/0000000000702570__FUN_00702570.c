/* Ghidra address: 00702570 */
/* Ghidra symbol: FUN_00702570 */


void FUN_00702570(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined8 local_20 [2];
  
  *(undefined1 *)(param_1 + 0x600) = 0;
  local_2c = 0;
  local_28 = 0;
  local_20[0] = FUN_0064d1f0(param_2,&local_2c);
  uVar1 = FUN_0064d3a0(param_1,local_20);
  local_34 = (undefined2)uVar1;
  uStack_30 = (undefined2)((ulonglong)uVar1 >> 0x20);
  local_38 = CONCAT22(uStack_30,local_34);
  local_24 = local_38;
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_0413e052(uVar1,0x201,1,(int)(short)local_24 | local_24 & 0xffff0000);
  return;
}

