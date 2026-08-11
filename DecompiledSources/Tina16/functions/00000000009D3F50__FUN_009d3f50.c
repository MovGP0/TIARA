/* Ghidra address: 009d3f50 */
/* Ghidra symbol: FUN_009d3f50 */


undefined4
FUN_009d3f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  *param_5 = 0;
  FUN_004168e0(&local_18,param_2);
  FUN_004168e0(&local_20,param_3);
  FUN_004168e0(&local_28,param_4);
  uVar1 = FUN_00953980(&PTR_FUN_0090c850,1,0,local_18,local_20,local_28,0);
  lVar2 = FUN_009d9690(&PTR_FUN_009cf098,1,uVar1,0);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0xa0;
  }
  FUN_0041b840(param_5,lVar2);
  local_10 = 0;
  FUN_004145c0(&local_28,3);
  return local_10;
}

