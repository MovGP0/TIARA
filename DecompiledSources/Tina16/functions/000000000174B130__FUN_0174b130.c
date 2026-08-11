/* Ghidra address: 0174b130 */
/* Ghidra symbol: FUN_0174b130 */


void FUN_0174b130(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_0041b910(param_2);
  FUN_0041b910(local_res18[0]);
  FUN_01d43440(local_20,param_4);
  FUN_00416ba0(&local_10,local_20[0],&DAT_0174b2dc);
  FUN_0173b9d0(&local_28,*(undefined8 *)(param_1 + 0x28),local_res10,local_res18[0],param_5,param_6,
               param_7,param_8,local_10,0xff0000,2,1,0,L"Arial");
  FUN_0041b800(&local_28);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  FUN_0041b800(&local_res10);
  FUN_0041b800(local_res18);
  return;
}

