/* Ghidra address: 015dc4b0 */
/* Ghidra symbol: FUN_015dc4b0 */


void FUN_015dc4b0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FUN_015bf370(local_20,*param_2,&DAT_015dc5d8,&DAT_015dc5e8,1);
    FUN_00414ad0(param_2,local_20[0]);
    (**(code **)(param_1 + 0x210))
              (*(undefined8 *)(param_1 + 0x218),param_1,param_2,param_3,param_4,param_5);
    FUN_015bf370(&local_28,*param_2,&DAT_015dc5e8,&DAT_015dc5d8,1);
    FUN_00414ad0(param_2,local_28);
  }
  FUN_00414560(&local_28,2);
  return;
}

