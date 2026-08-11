/* Ghidra address: 00864030 */
/* Ghidra symbol: FUN_00864030 */


undefined4 FUN_00864030(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  *param_2 = 0;
  FUN_00460ba0(&local_30);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                    (*(longlong **)(param_1 + 0x18),&local_30);
  FUN_0041d630(uVar2);
  cVar1 = FUN_0046c3d0(&local_30);
  if (cVar1 == '\0') {
    FUN_00467e90(param_2,&local_30);
  }
  else {
    FUN_00414480(param_2);
  }
  FUN_00460ba0(&local_30);
  return 0;
}

