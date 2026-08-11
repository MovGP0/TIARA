/* Ghidra address: 016fec20 */
/* Ghidra symbol: FUN_016fec20 */


undefined8
FUN_016fec20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined1 local_130 [256];
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_016feb60(local_30,local_res10[0]);
  FUN_00414b50(local_res10,local_30[0]);
  uVar1 = FUN_0171af00(&DAT_0170d528,1,param_1);
  FUN_00416910(local_130,local_res10[0],0xff);
  uVar2 = FUN_0171afa0(uVar1,local_130,param_3,0,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,local_20,param_11);
  FUN_00410f20(uVar1);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return uVar2;
}

