/* Ghidra address: 0097f220 */
/* Ghidra symbol: FUN_0097f220 */


undefined1 FUN_0097f220(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_21;
  longlong local_20;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_40 = 0;
  local_20 = FUN_00961b30(&PTR_FUN_00916000,1,param_2);
  local_21 = 1;
  if (param_2 == (longlong *)0x0) {
    FUN_0097f380(0,local_30);
  }
  else {
    (**(code **)(*param_2 + 0x40))(param_2,&local_38);
    FUN_004168e0(&local_40,local_38);
    if (local_20 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = local_20 + 0xa0;
    }
    (**(code **)(*param_1 + 0xf8))(param_1,lVar1,local_40);
    (**(code **)(*param_1 + 0xa8))(param_1,local_20);
    if (local_20 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = local_20 + 0xa0;
    }
    (**(code **)(*param_1 + 0x130))(param_1,lVar1);
    FUN_00410f20(local_20);
  }
  FUN_00414520(&local_40);
  FUN_00414480(&local_38);
  return local_21;
}

