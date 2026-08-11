/* Ghidra address: 01c70430 */
/* Ghidra symbol: FUN_01c70430 */


void FUN_01c70430(longlong param_1,undefined8 param_2,short *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  if (*param_3 == 0xd) {
    plVar1 = *(longlong **)(param_1 + 0x6d8);
    FUN_0064dd90(plVar1,local_30);
    iVar2 = FUN_01b1cd80(local_30[0],plVar1[0x9e],0);
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_38,iVar2);
    FUN_0064de00(plVar1,local_38);
    (**(code **)(*plVar1 + 0x268))(plVar1,iVar2);
    FUN_01c703e0(param_1,param_2);
    *param_3 = 0;
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  return;
}

