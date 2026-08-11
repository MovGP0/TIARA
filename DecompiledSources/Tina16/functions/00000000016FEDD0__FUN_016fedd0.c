/* Ghidra address: 016fedd0 */
/* Ghidra symbol: FUN_016fedd0 */


undefined8
FUN_016fedd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined1 local_140 [256];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  undefined1 local_28 [8];
  undefined1 local_20 [16];
  
  local_40 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_016feb60(&local_40,local_res10[0]);
  FUN_00414b50(local_res10,local_40);
  uVar1 = FUN_0171af00(&DAT_0170d528,1,param_1);
  FUN_00416910(local_140,local_res10[0],0xff);
  uVar2 = FUN_0171afa0(uVar1,local_140,param_3,1,0,param_4,&local_38,local_20,local_28,param_5,
                       param_6,param_7,&local_29);
  FUN_00410f20(uVar1);
  FUN_00414560(&local_40,2);
  FUN_00414480(local_res10);
  return uVar2;
}

