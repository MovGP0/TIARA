/* Ghidra address: 01546070 */
/* Ghidra symbol: FUN_01546070 */


void FUN_01546070(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x6c0);
  iVar1 = FUN_006e65a0(uVar3);
  uVar2 = FUN_0040c770(((double)*(int *)(param_1 + 0x708) / (double)*(int *)(param_1 + 0x70c)) *
                       (double)iVar1);
  FUN_006e6920(uVar3,uVar2);
  FUN_01d43440(&local_28,*(undefined4 *)(param_1 + 0x708));
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,&local_30,0x8ff);
  FUN_00416cd0(local_20,3,local_28,&LAB_015461a8,local_30);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_20[0]);
  FUN_01d43440(&local_38,*(undefined4 *)(param_1 + 0x70c));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_38);
  FUN_00414560(&local_38,4);
  return;
}

