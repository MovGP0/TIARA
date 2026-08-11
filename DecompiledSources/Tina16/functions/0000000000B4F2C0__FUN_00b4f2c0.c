/* Ghidra address: 00b4f2c0 */
/* Ghidra symbol: FUN_00b4f2c0 */


void FUN_00b4f2c0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  FUN_00b15100(&local_28,local_res10[0]);
  FUN_00b4f530(param_1,&local_30);
  FUN_00b15100(&local_20,local_30);
  iVar2 = FUN_00415a60(local_20,local_28);
  if (iVar2 != 0) {
    FUN_00b156f0(&local_38,param_1[8],&LAB_00b4f474,local_28);
    FUN_00414bf0(param_1 + 8,local_38);
    (**(code **)(*param_1 + 0xb8))(param_1,5);
    (**(code **)(*param_1 + 0x90))(param_1,1);
    cVar1 = FUN_0046c3b0(param_1 + 5);
    if (cVar1 != '\0') {
      FUN_004689d0(&local_50,local_res10[0]);
      FUN_00b4f030(param_1,&local_50);
    }
    (*(code *)**(undefined8 **)param_1[2])((undefined8 *)param_1[2],param_1);
  }
  FUN_00460ba0(&local_50);
  FUN_004144d0(&local_38);
  FUN_00414520(&local_30);
  FUN_00414590(&local_28,2);
  FUN_00414520(local_res10);
  return;
}

