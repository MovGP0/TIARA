/* Ghidra address: 01748af0 */
/* Ghidra symbol: FUN_01748af0 */


undefined8
FUN_01748af0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
            undefined4 param_9)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_70 [96];
  undefined8 local_10;
  
  local_10 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  FUN_01aa0d10(local_70,param_5,1,1);
  FUN_004169a0(&local_10,local_70);
  FUN_0173b9d0(param_2,*(undefined8 *)(param_1 + 0x28),local_res18,local_res20,param_6,param_7,
               param_8,param_9,local_10,0xff0000,1,1,0,L"Arial");
  FUN_00414480(&local_10);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return param_2;
}

