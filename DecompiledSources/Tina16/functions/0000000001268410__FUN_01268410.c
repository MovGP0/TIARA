/* Ghidra address: 01268410 */
/* Ghidra symbol: FUN_01268410 */


void FUN_01268410(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_res18 [2];
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 *local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_0041b910(param_1);
  FUN_0041b910(local_res10);
  FUN_00414610(local_res18[0]);
  if (local_res18[0] != 0) {
    local_28 = FUN_004ba3c0(&PTR_FUN_0047d288,1,local_res18[0]);
    FUN_004b6dc0(local_28,1);
    local_48 = FUN_0045ae90();
    local_40 = 0;
    local_20 = FUN_00bad320(&PTR_FUN_00b9f300,1,local_28,0);
    plVar1 = (longlong *)FUN_00411420(local_res8,&PTR_FUN_012681a0);
    uVar2 = FUN_00411420(local_res10,&PTR_FUN_00ba04f0);
    if (local_20 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = local_20 + 0x60;
    }
    (**(code **)(*plVar1 + 0x28))(plVar1,uVar2,lVar3);
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
  }
  FUN_0041b800(&local_res8);
  FUN_0041b800(&local_res10);
  FUN_00414480(local_res18);
  return;
}

