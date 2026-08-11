/* Ghidra address: 0186ccc0 */
/* Ghidra symbol: FUN_0186ccc0 */


void FUN_0186ccc0(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                 char param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_20 = 0;
  local_50 = param_2;
  local_48 = param_4;
  FUN_00414520(&local_20);
  plVar1 = local_50;
  if ((local_50 != (longlong *)0x0) && (param_5 == '\x01')) {
    FUN_0186cbf0(auStack_78,local_30,local_50[0x61]);
    FUN_00414be0(&local_20,local_30[0]);
    if (local_48 == (longlong *)0x0) {
      uVar3 = FUN_006a6030();
      (**(code **)(*plVar1 + 0x348))(plVar1,&local_38);
      FUN_004168b0(&local_40,local_38);
      FUN_006a58e0(uVar3,local_40);
    }
    else {
      uVar3 = FUN_00415f70(local_20);
      iVar2 = FUN_00414cc0(local_20);
      (**(code **)(*local_48 + 0x20))(local_48,uVar3,iVar2 * 2);
    }
  }
  FUN_00414480(&local_40);
  FUN_004145c0(&local_38,2);
  FUN_00414520(&local_20);
  return;
}

