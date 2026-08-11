/* Ghidra address: 01153f90 */
/* Ghidra symbol: FUN_01153f90 */


void FUN_01153f90(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  local_38 = *param_5;
  uStack_30 = param_5[1];
  lVar1 = *(longlong *)(param_1 + 0x6b8);
  local_50 = param_1;
  local_48 = param_3;
  local_44 = param_4;
  if (param_3 == 0) {
    FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),0);
  }
  else {
    uVar2 = FUN_01153d70(auStack_78,(byte)(&DAT_0203031e)[param_4 + 1] - 1);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),uVar2);
  }
  FUN_0084e320(lVar1,&local_40,local_48,local_44);
  (**(code **)(**(longlong **)(lVar1 + 0x490) + 0x120))
            (*(longlong **)(lVar1 + 0x490),(int)local_38 + 1,local_38._4_4_ + 1,local_40);
  FUN_00414480(&local_40);
  return;
}

