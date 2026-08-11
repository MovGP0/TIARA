/* Ghidra address: 01ba1c20 */
/* Ghidra symbol: FUN_01ba1c20 */


void FUN_01ba1c20(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar3 = FUN_01ba0ef0(param_2,param_3);
  lVar4 = (longlong)(param_2 * 8 + param_3);
  puVar5 = &local_30;
  FUN_01ba1850(param_1,uVar3,*(undefined4 *)(param_1 + 0x63c + lVar4 * 4),
               *(undefined4 *)(param_1 + 0x53c + lVar4 * 4),puVar5);
  local_38 = param_2;
  local_34 = param_3;
  FUN_01ba15c0(param_1,local_48,local_30,local_2c,(ulonglong)puVar5 & 0xffffffff00000000);
  FUN_01ba15c0(param_1,local_58,local_38,param_3,1);
  uVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_00609e10(*(undefined8 *)(param_1 + 0x10));
  FUN_005fead0(uVar1,local_58,uVar2,local_48);
  return;
}

