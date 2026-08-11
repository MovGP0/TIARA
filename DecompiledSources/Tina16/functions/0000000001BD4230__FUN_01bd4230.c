/* Ghidra address: 01bd4230 */
/* Ghidra symbol: FUN_01bd4230 */


void FUN_01bd4230(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_01bd39c0(param_1);
  uVar1 = FUN_01c07120(param_1);
  lVar2 = FUN_01c03e40(uVar1);
  FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar2 + 0x9c));
  (**(code **)(*param_1 + 0x278))(param_1);
  return;
}

