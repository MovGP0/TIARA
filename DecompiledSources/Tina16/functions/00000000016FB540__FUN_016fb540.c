/* Ghidra address: 016fb540 */
/* Ghidra symbol: FUN_016fb540 */


void FUN_016fb540(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong local_res10;
  longlong local_res18;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  if ((local_res10 != 0) && (local_res18 != 0)) {
    FUN_005d1840(&local_20,local_res10);
    uVar3 = 0;
    if (local_20 != 0) {
      uVar3 = *(undefined8 *)(local_20 + -8);
    }
    FUN_00419260(&local_28,&DAT_00406578,1,uVar3);
    plVar2 = (longlong *)FUN_00b864e0(&PTR_FUN_00b84328,1,0);
    FUN_00414c70(&local_30,"K2xw{DAbh]5Aeul}<(xxO6R{jpe[CJlX");
    iVar1 = FUN_00b6cb20(plVar2);
    FUN_016f9b20(&local_38,"Sq0vMIfc",(longlong)iVar1 / 8 & 0xffffffff);
    uVar3 = FUN_00414df0(&local_30);
    uVar4 = FUN_00414df0(&local_38);
    (**(code **)(*plVar2 + 0xa8))(plVar2,uVar3,0x100,uVar4);
    uVar5 = 0;
    if (local_20 != 0) {
      uVar5 = *(ulonglong *)(local_20 + -8);
    }
    (**(code **)(*plVar2 + 0x128))(plVar2,local_20,local_28,uVar5 & 0xffffffff);
    FUN_00410f20(plVar2);
    uVar3 = FUN_00414df0(&local_30);
    iVar1 = 0;
    if (local_30 != 0) {
      iVar1 = *(int *)(local_30 + -4);
    }
    FUN_0040d200(uVar3,(longlong)iVar1,0);
    FUN_005d1870(local_res18,local_28);
    FUN_00419430(&local_20,&DAT_00406578);
    FUN_00419430(&local_28,&DAT_00406578);
  }
  FUN_00414590(&local_38,2);
  FUN_00417840(&local_28,&DAT_00406578,2);
  FUN_00414560(&local_res10,2);
  return;
}

