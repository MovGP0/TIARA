/* Ghidra address: 00c87440 */
/* Ghidra symbol: FUN_00c87440 */


void FUN_00c87440(longlong param_1,undefined8 param_2,undefined1 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0x6e0);
  if ((longlong *)*param_4 == plVar1) {
    iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    if (iVar2 < 1) {
      *param_3 = 0;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x6e0);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_30,uVar3);
      FUN_00c40520(*(undefined8 *)PTR_DAT_02004440,local_20,local_30[0]);
      FUN_00414ad0(param_4 + 8,local_20[0]);
      *param_3 = 1;
      *(undefined4 *)(param_4 + 7) = 100;
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

