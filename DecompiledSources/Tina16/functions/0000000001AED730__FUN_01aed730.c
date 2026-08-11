/* Ghidra address: 01aed730 */
/* Ghidra symbol: FUN_01aed730 */


void FUN_01aed730(longlong param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  double dVar3;
  code *local_48;
  longlong local_40;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = *param_2;
  local_28 = *param_3;
  FUN_00448ea0();
  dVar3 = (double)FUN_0040af40();
  uVar2 = FUN_0040c770(dVar3 * 86400000.0);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  FUN_00448ea0();
  dVar3 = (double)FUN_0040af40();
  uVar2 = FUN_0040c770(dVar3 * 86400000.0 + (double)param_4);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x1c) = local_20;
  *(undefined8 *)(param_1 + 0x24) = local_28;
  uVar1 = *(undefined8 *)(*(longlong *)PTR_DAT_02001538 + 0x6c0);
  FUN_00742ed0(uVar1,0x3c);
  local_48 = FUN_01aed7f0;
  local_40 = param_1;
  FUN_00742ef0(uVar1,&local_48);
  FUN_00742eb0(uVar1,1);
  return;
}

