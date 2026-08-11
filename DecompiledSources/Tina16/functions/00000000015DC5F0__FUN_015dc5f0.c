/* Ghidra address: 015dc5f0 */
/* Ghidra symbol: FUN_015dc5f0 */


void FUN_015dc5f0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_015bf370(local_20,*param_2,&DAT_015dc6b4,&DAT_015dc6c4,1);
  FUN_00414ad0(param_2,local_20[0]);
  if (*(longlong *)(param_1 + 0x220) != 0) {
    (**(code **)(param_1 + 0x220))(*(undefined8 *)(param_1 + 0x228),param_1,param_2,param_3,param_4)
    ;
  }
  FUN_00414480(local_20);
  return;
}

