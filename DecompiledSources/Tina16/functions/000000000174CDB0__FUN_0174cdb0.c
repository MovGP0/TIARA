/* Ghidra address: 0174cdb0 */
/* Ghidra symbol: FUN_0174cdb0 */


void FUN_0174cdb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_0041b910(param_2);
  FUN_0041b910(local_res18[0]);
  FUN_00416780(&local_10,param_4);
  FUN_0173b9d0(local_20,*(undefined8 *)(param_1 + 0x28),local_res10,local_res18[0],0xfffffffc,
               0xfffffffc,param_5,param_6,local_10,0xff0000,1,0,0,L"Arial");
  FUN_0041b800(local_20);
  FUN_00414480(&local_10);
  FUN_0041b800(&local_res10);
  FUN_0041b800(local_res18);
  return;
}

