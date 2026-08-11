/* Ghidra address: 01ba29e0 */
/* Ghidra symbol: FUN_01ba29e0 */


undefined8 FUN_01ba29e0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  uVar1 = *param_3;
  uVar2 = *param_4;
  local_18._0_4_ = (int)uVar2;
  local_18._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_10._0_4_ = (int)uVar1;
  local_10._4_4_ = (int)(uVar1 >> 0x20);
  iVar3 = local_10._4_4_;
  *(undefined4 *)(param_1 + 0x28 + (longlong)(int)local_18 * 0x20 + (longlong)local_18._4_4_ * 4) =
       *(undefined4 *)
        (param_1 + 0x28 + (longlong)(int)local_10 * 0x20 + (longlong)local_10._4_4_ * 4);
  local_18 = uVar2;
  local_10 = uVar1;
  FUN_01ba1640(param_1,uVar1 & 0xffffffff,iVar3);
  FUN_01ba1140(local_30,&local_10);
  FUN_01ba1140(&local_38,&local_18);
  FUN_00416ba0(&local_20,local_30[0],local_38);
  FUN_00414ad0(param_2,local_20);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return param_2;
}

