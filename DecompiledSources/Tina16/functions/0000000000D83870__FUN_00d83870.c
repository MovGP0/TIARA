/* Ghidra address: 00d83870 */
/* Ghidra symbol: FUN_00d83870 */


void FUN_00d83870(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d6de10);
  if (cVar1 == '\0') {
    FUN_00d7f3b0(param_1,param_2);
  }
  else {
    FUN_00d7f3b0(param_1,param_2);
    FUN_00d84660(param_1);
    (**(code **)(*(longlong *)param_1[10] + 0x10))
              ((longlong *)param_1[10],*(undefined8 *)(param_2 + 0x50));
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  return;
}

