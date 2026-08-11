/* Ghidra address: 01992680 */
/* Ghidra symbol: FUN_01992680 */


longlong *
FUN_01992680(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined1 param_6,longlong param_7,int param_8,int param_9,
            undefined1 param_10)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414610(param_7);
  plVar1 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,param_2);
  *(undefined1 *)((longlong)plVar1 + 0xd1) = param_5;
  *(undefined1 *)((longlong)plVar1 + 0xd3) = param_6;
  if (param_7 == 0) {
    (**(code **)(*plVar1 + 0x128))(plVar1,&local_28);
    FUN_019a44e0(param_1,local_20,local_28,plVar1);
    FUN_00414ad0(plVar1 + 0x13,local_20[0]);
  }
  else {
    FUN_00414ad0(plVar1 + 0x13,param_7);
    if (param_8 != 0x7fffffff) {
      *(int *)(plVar1 + 0x14) = param_8;
    }
    if (param_9 != 0x7fffffff) {
      *(int *)((longlong)plVar1 + 0xa4) = param_9;
    }
    *(undefined1 *)(plVar1 + 0x15) = param_10;
  }
  FUN_01d38290(plVar1,1);
  FUN_01d04aa0(plVar1,0);
  FUN_01d07850(plVar1);
  (**(code **)(*param_1 + 0x20))(param_1,plVar1);
  uVar2 = FUN_0198d430(param_1);
  (**(code **)(*plVar1 + 0xe8))(plVar1,uVar2,param_3,param_4);
  FUN_01991990(param_1,plVar1);
  FUN_00414560(&local_28,2);
  FUN_00414480(&param_7);
  return plVar1;
}

