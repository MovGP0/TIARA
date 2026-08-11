/* Ghidra address: 0167c680 */
/* Ghidra symbol: FUN_0167c680 */


void FUN_0167c680(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double dVar7;
  undefined8 local_248;
  undefined8 local_240 [50];
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
    dVar7 = (double)FUN_016ed770(param_2);
    local_b0 = local_b0 + dVar7;
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
  puVar5 = (undefined8 *)PTR_DAT_020049e8;
  puVar6 = local_240;
  for (lVar4 = 0x32; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_016ebb00(param_1,1,local_240,400);
  uVar3 = FUN_01b05c20(param_1,1);
  FUN_016ee260(param_1,&local_248,0x470,0);
  if (local_30 == '\0') {
    cVar1 = FUN_01d44bc0(*(undefined1 *)(param_2 + 0xed6));
    if (cVar1 == '\0') {
      cVar1 = FUN_016e9de0(param_1,4);
      if (cVar1 == '\0') {
        uVar2 = 3;
      }
      else {
        uVar2 = 4;
      }
      FUN_00e43fd0(param_1,param_2,param_3,1,2,3,uVar2,&local_b0,local_240,uVar3,local_248);
    }
    else {
      cVar1 = FUN_016e9de0(param_1,4);
      if (cVar1 == '\0') {
        uVar2 = 3;
      }
      else {
        uVar2 = 4;
      }
      FUN_00e41b90(param_1,param_2,param_3,1,2,3,uVar2,&local_b0,local_240,uVar3,local_248);
    }
    FUN_016e9f40(param_1,FUN_0167c5c0);
    if (*(char *)(param_2 + 0xed6) == '\0') {
      FUN_016e9f60(param_1,FUN_01673290);
      FUN_016e9f70(param_1,FUN_016735b0);
      FUN_016e9fa0(param_1,FUN_01674090);
    }
    FUN_016e9fb0(param_1,FUN_00e3b100);
    FUN_016e9ff0(param_1,FUN_01672150);
    FUN_016ea040(param_1,FUN_01672670);
    FUN_016e9fd0(param_1,FUN_00e3b230);
  }
  return;
}

