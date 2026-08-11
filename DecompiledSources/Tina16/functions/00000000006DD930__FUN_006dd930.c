/* Ghidra address: 006dd930 */
/* Ghidra symbol: FUN_006dd930 */


void FUN_006dd930(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 char param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_a8;
  undefined1 local_a0 [56];
  undefined4 *local_68;
  undefined4 local_60 [2];
  longlong local_58;
  undefined8 local_30;
  
  local_a8 = 0;
  FUN_006dfe80(param_1[1]);
  if ((param_5 == '\x02') && (param_3 != 0)) {
    uVar7 = *(undefined8 *)(param_3 + 0x20);
  }
  else {
    uVar7 = 0;
  }
  uVar2 = FUN_006dd2b0(param_1);
  uVar3 = FUN_006dd100(param_1);
  lVar5 = FUN_006dd390(param_1);
  if (lVar5 != 0) {
    uVar6 = FUN_006dd390(param_1);
    cVar1 = FUN_006dcde0(uVar6,1);
    if (cVar1 != '\0') {
      uVar6 = FUN_006dd390(param_1);
      FUN_006dd0c0(uVar6,0);
      uVar6 = FUN_006dd390(param_1);
      FUN_006dd340(uVar6,0);
    }
  }
  local_60[0] = 4;
  local_58 = param_1[4];
  local_30 = 0;
  uVar6 = FUN_006dc7a0(param_1);
  local_68 = local_60;
  thunk_FUN_041b2403(uVar6,0x113f,0,local_68);
  lVar5 = param_1[1];
  FUN_006df3d0(lVar5,local_a0,param_1);
  lVar5 = FUN_006df400(lVar5,param_4,uVar7,local_a0,param_5);
  if (lVar5 == 0) {
    FUN_0041ddd0(&local_a8,PTR_PTR_02003ae0);
    uVar7 = FUN_0044d490(&PTR_FUN_00472738,1,local_a8);
    FUN_004134c0(uVar7);
  }
  iVar4 = FUN_006dd8c0(param_1);
  iVar4 = iVar4 + -1;
  if (-1 < iVar4) {
    do {
      uVar7 = FUN_006dd770(param_1,iVar4);
      FUN_006dd930(uVar7,param_1,0,lVar5,0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  uVar7 = FUN_006dc7a0(param_1);
  thunk_FUN_041b2403(uVar7,0x1101,0,param_1[4]);
  param_1[4] = lVar5;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  FUN_006dd340(param_1,uVar2);
  FUN_006dd110(param_1,uVar3);
  FUN_00414480(&local_a8);
  return;
}

