/* Ghidra address: 007806e0 */
/* Ghidra symbol: FUN_007806e0 */


undefined4
FUN_007806e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_20 [16];
  
  local_38 = 0;
  local_30[0] = 0;
  FUN_004167d0(local_30,param_3);
  cVar1 = FUN_00782c40(&DAT_0075cd78,*param_4,local_30[0],param_2,local_20);
  if (cVar1 == '\0') {
    FUN_004167d0(&local_38,param_3);
    (**(code **)(*(longlong *)param_4[2] + 0x78))((longlong *)param_4[2],local_38);
  }
  FUN_00414560(&local_38,2);
  return 0xffffffff;
}

