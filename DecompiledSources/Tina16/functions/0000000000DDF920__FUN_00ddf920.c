/* Ghidra address: 00ddf920 */
/* Ghidra symbol: FUN_00ddf920 */


void FUN_00ddf920(longlong param_1,undefined4 *param_2)

{
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00ddd3d0(param_1);
  local_34 = *param_2;
  FUN_006252d0(*(undefined8 *)(param_1 + 0x4c8),(longlong)param_2 + 5,&local_34,0,&local_30);
  FUN_00460ba0(&local_30);
  return;
}

