/* Ghidra address: 0180ee70 */
/* Ghidra symbol: FUN_0180ee70 */


void FUN_0180ee70(longlong param_1)

{
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_0058d710(&local_30,*(undefined8 *)(param_1 + 0x70),
               *(undefined8 *)
                (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x44) * 8));
  if ((((short)local_30 == 0x100) || ((short)local_30 == 8)) || ((short)local_30 == 0x102)) {
    FUN_00467e90(&local_48,&local_30);
    FUN_0180ec20(param_1,local_40,local_48);
    FUN_00468a10(&local_30,local_40[0]);
    FUN_0058d740(*(undefined8 *)(param_1 + 0x70),
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x44) * 8),&local_30
                );
  }
  FUN_00414560(&local_48,2);
  FUN_00460ba0(&local_30);
  return;
}

