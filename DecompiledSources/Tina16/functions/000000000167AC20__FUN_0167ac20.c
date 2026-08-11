/* Ghidra address: 0167ac20 */
/* Ghidra symbol: FUN_0167ac20 */


void FUN_0167ac20(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  ushort uVar4;
  bool bVar5;
  double dVar6;
  undefined8 local_140;
  undefined1 local_138 [136];
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
  byte local_30;
  
  if (*(char *)(param_2 + 0x339) == '\0') {
    local_30 = 0;
  }
  else {
    local_30 = FUN_016eacf0(param_1,DAT_01f7e491,4);
  }
  cVar1 = FUN_016eacf0(param_1,DAT_01f7e480,2);
  local_b0 = (double)FUN_016eb0a0(param_1,DAT_01f7e481);
  local_b0 = local_b0 + 273.15;
  if (cVar1 == '\0') {
    dVar6 = (double)FUN_016ed770(param_2);
    local_b0 = local_b0 + dVar6;
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
  FUN_016ebb00(param_1,1,local_138,0x88);
  FUN_016ee260(param_1,&local_140,0x198,0);
  if (local_30 < 3) {
    cVar1 = FUN_01d44bc0(*(undefined1 *)(param_2 + 0xed6));
    if (cVar1 == '\0') {
      cVar1 = FUN_016e9de0(param_1,4);
      if (cVar1 == '\0') {
        uVar2 = 3;
      }
      else {
        uVar2 = 4;
      }
      FUN_016798b0(param_1,param_2,param_3,1,2,3,uVar2,&local_b0,local_138,local_140);
    }
    else {
      cVar1 = FUN_016e9de0(param_1,4);
      if (cVar1 == '\0') {
        uVar2 = 3;
      }
      else {
        uVar2 = 4;
      }
      FUN_01678e40(param_1,param_2,param_3,1,2,3,uVar2,&local_b0,local_138,local_140);
    }
    FUN_016e9f40(param_1,FUN_0167ab80);
    if (*(char *)(param_2 + 0xed6) == '\0') {
      FUN_016e9f60(param_1,FUN_016728f0);
      FUN_016e9f70(param_1,FUN_01672b90);
    }
    FUN_016e9ff0(param_1,FUN_01672150);
    FUN_016ea040(param_1,FUN_01672670);
  }
  else if (local_30 == 3) {
    sVar3 = FUN_016ebd90(param_1);
    uVar4 = sVar3 - 0x18;
    if (uVar4 < 0x60) {
      bVar5 = ((byte)(&DAT_0167b088)[(longlong)(int)(uVar4 & 0x7f) >> 3] >> (uVar4 & 7) & 1) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      FUN_0167a480(param_1,param_3,1,2,3,&local_b0,local_138,local_140);
      FUN_016e9f40(param_1,FUN_0167ab80);
    }
    else {
      FUN_0167a890(param_1,param_3,1,2,3,&local_b0,local_138);
    }
  }
  return;
}

