/* Ghidra address: 009db1e0 */
/* Ghidra symbol: FUN_009db1e0 */


undefined4 FUN_009db1e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  *param_3 = 0;
  uVar1 = FUN_009dab20(param_1);
  FUN_004168e0(&local_28,param_2);
  uVar1 = FUN_00953c10(&PTR_FUN_0090d088,1,uVar1,local_28);
  lVar2 = FUN_009d4b10(&PTR_FUN_009cf880,1,uVar1,param_1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0x68;
  }
  FUN_0041b840(param_3,lVar2);
  local_20 = 0;
  FUN_00414520(&local_28);
  return local_20;
}

