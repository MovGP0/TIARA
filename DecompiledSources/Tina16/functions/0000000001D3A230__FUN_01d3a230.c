/* Ghidra address: 01d3a230 */
/* Ghidra symbol: FUN_01d3a230 */


void FUN_01d3a230(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  uVar1 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  lVar4 = (longlong)param_3;
  *(undefined8 *)(param_1 + lVar4 * 8) = param_4;
  FUN_00b8fd60(local_30,param_4,6,0,1);
  FUN_00415dd0(&local_20,local_30[0],0);
  FUN_004095f0(*(undefined8 *)(param_2 + lVar4 * 8));
  iVar2 = 0;
  if (local_20 != 0) {
    iVar2 = *(int *)(local_20 + -4);
  }
  uVar3 = FUN_00409570((longlong)(iVar2 + 1));
  *(undefined8 *)(param_2 + lVar4 * 8) = uVar3;
  FUN_004425e0(*(undefined8 *)(param_2 + lVar4 * 8),local_20);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = uVar1;
  FUN_00414480(local_30);
  FUN_004144d0(&local_20);
  return;
}

