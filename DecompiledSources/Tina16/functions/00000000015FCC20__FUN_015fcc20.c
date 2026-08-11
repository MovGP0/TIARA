/* Ghidra address: 015fcc20 */
/* Ghidra symbol: FUN_015fcc20 */


void FUN_015fcc20(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res20;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined1 local_408 [1024];
  
  local_428 = 0;
  local_420 = 0;
  local_418 = 0;
  local_410 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00e06190();
  FUN_004167d0(&local_410,param_1);
  cVar1 = FUN_00b96de0(local_410);
  if (cVar1 == '\0') {
    FUN_004167d0(&local_418,param_1);
    FUN_00b96df0(local_418);
  }
  FUN_004167d0(&local_420,param_1);
  FUN_00e06220(param_3,local_420,local_res20);
  _NewVHDLSession(param_1,param_2,local_408);
  if (*param_2 == 0) {
    FUN_00416830(&local_428,local_408,0x200);
    FUN_015fcf20(local_428,0,0,0);
  }
  FUN_00414560(&local_428,4);
  FUN_00414480(&local_res20);
  return;
}

