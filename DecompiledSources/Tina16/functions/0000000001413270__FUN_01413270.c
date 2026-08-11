/* Ghidra address: 01413270 */
/* Ghidra symbol: FUN_01413270 */


void FUN_01413270(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_01d43440(&local_18,param_4);
  FUN_00416cd0(&local_10,8,L"Error: \"",local_res18,&DAT_01413420,&DAT_01413430,&DAT_01413440,
               local_res10,L", line: ",local_18);
  (**(code **)(**(longlong **)(param_1[0xdf] + 0x4a0) + 0x78))
            (*(longlong **)(param_1[0xdf] + 0x4a0),local_10);
  FUN_01413250(param_1,param_1[0xde]);
  FUN_010a6f60(1,param_4,param_1[0xde],*(undefined4 *)((longlong)param_1 + 0x714));
  FUN_01412f00(param_1);
  (**(code **)(*param_1 + 0x2d0))(param_1);
  FUN_00414560(&local_18,2);
  FUN_00414560(&local_res10,2);
  return;
}

