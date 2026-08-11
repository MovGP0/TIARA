/* Ghidra address: 00b123f0 */
/* Ghidra symbol: FUN_00b123f0 */


void FUN_00b123f0(longlong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  if ((param_1[0xca] != 0) && (param_1[0xa2] != 0)) {
    cVar2 = FUN_006805f0(param_1[0xa2]);
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x4ac);
      (**(code **)(*param_1 + 0x2d8))(param_1,&local_20,0,uVar1);
      (**(code **)(*param_1 + 0x2d8))
                (param_1,&local_28,1,*(undefined4 *)((longlong)param_1 + 0x4ac));
      (*(code *)param_1[0xca])(param_1[0xcb],param_1,(int)param_1[0x95],uVar1,local_20,local_28);
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

