/* Ghidra address: 01d644a0 */
/* Ghidra symbol: FUN_01d644a0 */


void FUN_01d644a0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_30 [2];
  
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_30[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x188),*(undefined4 *)(param_1 + 8));
  uVar2 = FUN_017dcdb0(param_1,local_30,param_3,0);
  *(undefined8 *)(lVar1 + 0x210) = uVar2;
  local_30[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x18c),*(undefined4 *)(param_1 + 8));
  uVar2 = FUN_017dcdb0(param_1,local_30,param_3,0);
  *(undefined8 *)(lVar1 + 0x218) = uVar2;
  return;
}

