/* Ghidra address: 009e2f40 */
/* Ghidra symbol: FUN_009e2f40 */


undefined8 FUN_009e2f40(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  if (param_4 + 1 < 1) {
    FUN_00419430(param_2,&DAT_00406578);
  }
  else {
    uVar1 = FUN_0045ae90();
    uVar2 = FUN_0045ae90();
    FUN_0045ad50(uVar2,&local_28,param_3,param_4);
    (**(code **)(*param_1 + 0x28))(param_1,&local_20,local_28);
    FUN_00459ca0(uVar1,param_2,local_20);
  }
  FUN_00414560(&local_28,2);
  return param_2;
}

