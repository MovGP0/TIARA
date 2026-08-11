/* Ghidra address: 0167d3a0 */
/* Ghidra symbol: FUN_0167d3a0 */


void FUN_0167d3a0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 local_d68;
  undefined1 local_d60 [3248];
  double local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  char local_30;
  
  if (*(char *)(param_2 + 0x339) == '\0') {
    local_30 = '\0';
  }
  else {
    local_30 = FUN_016eacf0(param_1,DAT_01f7e491,4);
  }
  cVar1 = FUN_016eacf0(param_1,DAT_01f7e480,2);
  local_b0 = (double)FUN_016eb0a0(param_1,DAT_01f7e481);
  local_b0 = local_b0 + 273.15;
  if (cVar1 == '\0') {
    dVar3 = (double)FUN_016ed770(param_2);
    local_b0 = local_b0 + dVar3;
  }
  cVar1 = FUN_016eacf0(param_1,DAT_01f7e48d,2);
  local_31 = cVar1 != '\0';
  local_a8 = FUN_016ea920(param_1,DAT_01f7e482,2,&local_38);
  local_a0 = FUN_016ea920(param_1,DAT_01f7e483,2,&local_37);
  local_98 = FUN_016ea920(param_1,DAT_01f7e484,2,&local_36);
  local_90 = FUN_016ea920(param_1,DAT_01f7e485,2,&local_35);
  local_88 = FUN_016eb0a0(param_1,DAT_01f7e486);
  local_80 = FUN_016eb0a0(param_1,DAT_01f7e487);
  local_78 = FUN_016eb0a0(param_1,DAT_01f7e488);
  local_70 = FUN_016eb0a0(param_1,DAT_01f7e489);
  local_68 = FUN_016eb0a0(param_1,DAT_01f7e48a);
  local_60 = FUN_016eb0a0(param_1,DAT_01f7e48b);
  local_58 = FUN_016eb0a0(param_1,DAT_01f7e48c);
  local_50 = FUN_016ea920(param_1,DAT_01f7e48e,2,&local_34);
  local_48 = FUN_016ea920(param_1,DAT_01f7e48f,2,&local_33);
  local_40 = FUN_016ea920(param_1,DAT_01f7e490,2,&local_32);
  FUN_016ebb00(param_1,1,local_d60,0xcb0);
  uVar2 = FUN_01b05c20(param_1,1);
  FUN_016ee260(param_1,&local_d68,0x1270,0);
  if (local_30 == '\0') {
    cVar1 = FUN_016e9de0(param_1,4);
    if (cVar1 == '\0') {
      FUN_00e6b6f0(param_1,param_3,1,2,3,3,&local_b0,local_d60,uVar2,local_d68);
    }
    else {
      FUN_00e6b6f0(param_1,param_3,1,2,3,4,&local_b0,local_d60,uVar2,local_d68);
    }
    FUN_016e9f40(param_1,FUN_0167d340);
    FUN_016e9f60(param_1,FUN_016728f0);
    FUN_016e9f70(param_1,FUN_01672b90);
    FUN_016e9fa0(param_1,FUN_00e46150);
    FUN_016e9ff0(param_1,FUN_01672150);
    FUN_016ea040(param_1,FUN_01672670);
    FUN_016e9fd0(param_1,FUN_00e4c380);
    FUN_016ea010(param_1,FUN_00e4cb20);
    FUN_016ea020(param_1,FUN_00e4ce10);
    FUN_016ea030(param_1,FUN_00e4dcd0);
    FUN_016e9fc0(param_1,FUN_00e46b80);
  }
  return;
}

