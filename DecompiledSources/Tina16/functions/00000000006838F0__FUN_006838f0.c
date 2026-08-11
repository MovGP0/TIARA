/* Ghidra address: 006838f0 */
/* Ghidra symbol: FUN_006838f0 */


void FUN_006838f0(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [16];
  
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar1,0x14f,param_2,0);
  (**(code **)(*param_1 + 0xe0))(param_1,local_28);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03a2fc9d(uVar1,local_28,0xffffffff);
  return;
}

