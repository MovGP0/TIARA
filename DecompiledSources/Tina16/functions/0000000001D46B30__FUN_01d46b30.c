/* Ghidra address: 01d46b30 */
/* Ghidra symbol: FUN_01d46b30 */


undefined8
FUN_01d46b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
            )

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01d461d0(param_1);
  local_10 = 0;
  if (param_4 == 0xe) {
    FUN_01d47000(param_1,param_2,param_5);
  }
  else if (param_4 == 0xf) {
    FUN_01d46890(param_1,(undefined4)param_5,local_res18[0]);
  }
  else if (param_4 == 0x12) {
    FUN_01d46550(param_1);
  }
  else if (param_4 == 0x13) {
    FUN_01d46fa0(param_1,param_2,local_res18[0],param_5);
  }
  else {
    FUN_01d46f70(param_1,param_2,local_res18[0]);
    uVar1 = FUN_00416740(local_res18[0]);
    local_10 = FUN_0042a560(param_2,uVar1,param_4,param_5);
  }
  FUN_00414480(local_res18);
  return local_10;
}

