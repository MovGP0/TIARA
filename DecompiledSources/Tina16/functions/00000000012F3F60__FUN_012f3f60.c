/* Ghidra address: 012f3f60 */
/* Ghidra symbol: FUN_012f3f60 */


void FUN_012f3f60(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_012fa2c0(param_1);
  FUN_013022b0(param_1,L"RunTestbench: Init done");
  FUN_00416ba0(&local_10,L"RunTestbench: file name: ",local_res10[0]);
  FUN_013022b0(param_1,local_10);
  FUN_012fb520(param_1,local_res10[0]);
  FUN_013022b0(param_1,L"RunTestbench: Testbench load done");
  FUN_01302300(param_1);
  FUN_00805990(param_1);
  FUN_013022b0(param_1,L"RunTestbench: before start testbench");
  FUN_012f3470(local_res10[0],param_3);
  FUN_013022b0(param_1,L"RunTestbench: after start testbench");
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

