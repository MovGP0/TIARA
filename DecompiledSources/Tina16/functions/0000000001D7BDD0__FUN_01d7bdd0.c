/* Ghidra address: 01d7bdd0 */
/* Ghidra symbol: FUN_01d7bdd0 */


undefined8 *
FUN_01d7bdd0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *local_res10 [3];
  undefined1 local_118 [272];
  
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_00414480(param_1);
  if (local_res10[0] == (longlong *)0x0) {
    FUN_00414ad0(param_1,L"parentfolder = nil");
  }
  else {
    FUN_0040d200(local_118,0x110,0);
    (**(code **)(*local_res10[0] + 0x58))(local_res10[0],param_3,param_4,local_118);
    FUN_01d7bc20(param_1,param_3,local_118,0);
    iVar1 = FUN_004170c0(&DAT_01d7bf1c,*param_1,1);
    if (iVar1 == 1) {
      FUN_01d7bdd0(param_1,local_res10[0],param_3,0);
    }
  }
  FUN_0041b800(local_res10);
  return param_1;
}

