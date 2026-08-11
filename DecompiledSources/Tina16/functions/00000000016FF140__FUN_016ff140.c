/* Ghidra address: 016ff140 */
/* Ghidra symbol: FUN_016ff140 */


undefined8
FUN_016ff140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined1 local_160 [256];
  undefined8 local_60 [2];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [16];
  
  local_60[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_016feb60(local_60,local_res10[0]);
  FUN_00414b50(local_res10,local_60[0]);
  uVar1 = FUN_0171af00(&DAT_0170d528,1,param_1);
  FUN_00416910(local_160,local_res10[0],0xff);
  uVar2 = FUN_0171afa0(uVar1,local_160,param_3,4,param_4,&local_30,&local_38,local_20,local_28,
                       param_5,&local_40,&local_48,&local_49);
  FUN_00410f20(uVar1);
  FUN_00414480(local_60);
  FUN_00414560(&local_48,4);
  FUN_00414480(local_res10);
  return uVar2;
}

