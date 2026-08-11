/* Ghidra address: 012f8340 */
/* Ghidra symbol: FUN_012f8340 */


void FUN_012f8340(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_012ddec0(*(undefined8 *)(param_1 + 0xac8));
  FUN_01303240(param_1,4,0,0);
  FUN_01303ee0(param_1);
  uVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  FUN_01304bb0(param_1,uVar1);
  uVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  FUN_013056e0(param_1,1,uVar1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7d8),0);
  return;
}

