/* Ghidra address: 00cafa40 */
/* Ghidra symbol: FUN_00cafa40 */


void FUN_00cafa40(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4,char param_5,
                 undefined8 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_20[0] = 0;
  FUN_0041b910(param_6);
  *param_3 = 0;
  FUN_00875240(&local_48,param_6,param_1[0x2a],3);
  FUN_0041b840(&param_6,local_48);
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  cVar3 = FUN_004113d0(param_2,&PTR_FUN_00476820);
  plVar1 = param_2;
  plVar2 = local_28;
  if ((cVar3 == '\0') &&
     (cVar3 = FUN_004113d0(param_2,&PTR_FUN_00478eb0), plVar1 = local_30, plVar2 = param_2,
     cVar3 == '\0')) {
    FUN_0041ddd0(&local_50,PTR_PTR_02001570);
    uVar5 = FUN_0086dfd0(&PTR_FUN_00ca6508,1,local_50);
    FUN_004134c0(uVar5);
    plVar1 = local_30;
    plVar2 = local_28;
  }
  local_28 = plVar2;
  local_30 = plVar1;
  (**(code **)(*param_1 + 0x90))(param_1,0,0);
  while( true ) {
    FUN_00cad9f0(param_1,local_20,param_6);
    iVar4 = FUN_00416db0(local_20[0],param_4);
    if (iVar4 == 0) break;
    if ((0 < (int)param_1[0x23]) && ((int)param_1[0x23] < *param_3)) {
      FUN_0041ddd0(&local_58,PTR_DAT_020034f8);
      uVar5 = FUN_0086dfd0(&PTR_FUN_00ca8600,1,local_58);
      FUN_004134c0(uVar5);
    }
    if ((param_5 != '\0') && (cVar3 = FUN_00879090(local_20[0],&DAT_00cafd7c), cVar3 != '\0')) {
      FUN_00416e20(local_20,1,1);
    }
    *param_3 = *param_3 + 1;
    if (local_30 == (longlong *)0x0) {
      if (local_28 != (longlong *)0x0) {
        FUN_00416ba0(&local_60,local_20[0],&LAB_00cafd90);
        FUN_00878900(local_28,local_60,param_6);
      }
    }
    else {
      (**(code **)(*local_30 + 0x78))(local_30,local_20[0]);
    }
  }
  FUN_00cafd00(0,local_40);
  FUN_00414560(&local_60,3);
  FUN_0041b800(&local_48);
  FUN_00414480(local_20);
  FUN_0041b800(&param_6);
  return;
}

