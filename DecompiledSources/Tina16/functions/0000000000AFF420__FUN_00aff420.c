/* Ghidra address: 00aff420 */
/* Ghidra symbol: FUN_00aff420 */


void FUN_00aff420(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  code *local_28;
  undefined8 local_20;
  
  local_30 = 0;
  *param_4 = 0;
  if (*(longlong *)(param_1 + 0x7f0) == 0) {
    FUN_00aff200(auStack_58);
  }
  else {
    FUN_00afbed0(param_1,&local_28);
    if (local_28 == (code *)0x0) {
      FUN_00414480(param_4);
      (**(code **)(param_1 + 0x7f0))(*(undefined8 *)(param_1 + 0x7f8),param_1,*param_2,param_3);
      if (*param_3 == 0) {
        FUN_00aff200(auStack_58);
      }
    }
    else {
      FUN_00afbed0(param_1,&local_28);
      (*local_28)(local_20,param_1,*param_2,param_2);
      FUN_00a273c0(&local_30,*param_2);
      FUN_00414ad0(param_4,local_30);
      (**(code **)(param_1 + 0x7f0))(*(undefined8 *)(param_1 + 0x7f8),param_1,*param_2,param_3);
    }
  }
  FUN_00414480(&local_30);
  return;
}

