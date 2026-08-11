/* Ghidra address: 01243a40 */
/* Ghidra symbol: FUN_01243a40 */


undefined8
FUN_01243a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_10 = 0;
  FUN_0043f750(local_20,param_4);
  FUN_0043f750(&local_28,param_5);
  FUN_0043f750(&local_30,param_6);
  FUN_0043f750(&local_38,param_7);
  uVar1 = 0;
  uVar2 = 0;
  FUN_00416cd0(&local_10,7,local_20[0],&DAT_01243bcc,local_28,&DAT_01243bcc,local_30,&DAT_01243bcc,
               local_38);
  FUN_01243600(param_1,param_2,param_3,L"rectangle",local_10,CONCAT44(uVar1,param_8),param_9,
               CONCAT44(uVar2,param_10));
  FUN_00414560(&local_38,4);
  FUN_00414480(&local_10);
  return param_1;
}

