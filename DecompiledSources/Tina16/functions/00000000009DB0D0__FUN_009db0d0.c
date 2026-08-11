/* Ghidra address: 009db0d0 */
/* Ghidra symbol: FUN_009db0d0 */


undefined4
FUN_009db0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  *param_4 = 0;
  uVar1 = FUN_009dab20(param_1);
  FUN_004168e0(&local_28,param_2);
  FUN_004168e0(&local_30,param_3);
  uVar1 = FUN_009511a0(&PTR_FUN_0090a420,1,uVar1,local_28,local_30);
  lVar2 = FUN_009d4b10(&PTR_FUN_009ce020,1,uVar1,param_1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0x68;
  }
  FUN_0041b840(param_4,lVar2);
  local_20 = 0;
  FUN_004145c0(&local_30,2);
  return local_20;
}

