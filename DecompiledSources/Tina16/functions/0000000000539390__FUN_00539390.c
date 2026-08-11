/* Ghidra address: 00539390 */
/* Ghidra symbol: FUN_00539390 */


undefined1 FUN_00539390(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  ulonglong uVar5;
  undefined8 in_XMM1_Qa;
  undefined4 uVar6;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar6 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00417580(param_3,&DAT_00527bf8);
  pcVar3 = (char *)FUN_00589390(*param_1);
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    uVar5 = (ulonglong)*(char *)(param_1 + 2);
  }
  else if (cVar1 == '\x02') {
    uVar5 = (ulonglong)*(short *)(param_1 + 2);
  }
  else if (cVar1 == '\x04') {
    uVar5 = (ulonglong)*(int *)(param_1 + 2);
  }
  else {
    uVar5 = (ulonglong)*(uint *)(param_1 + 2);
  }
  pbVar4 = (byte *)FUN_00589390(param_2);
  bVar2 = *pbVar4;
  if (bVar2 < 3) {
    if (bVar2 == 2) {
      FUN_005606e0(&local_78,(double)(longlong)uVar5);
      FUN_00417c40(param_3,&local_78,&DAT_00527bf8);
    }
    else if (bVar2 == 0) {
      FUN_00560660(&local_38,CONCAT44(uVar6,(float)(longlong)uVar5));
      FUN_00417c40(param_3,&local_38,&DAT_00527bf8);
    }
    else if (bVar2 == 1) {
      FUN_005606a0(&local_58,(double)(longlong)uVar5);
      FUN_00417c40(param_3,&local_58,&DAT_00527bf8);
    }
  }
  else if (bVar2 == 3) {
    FUN_00560760(&local_b8,uVar5);
    FUN_00417c40(param_3,&local_b8,&DAT_00527bf8);
  }
  else if (bVar2 == 4) {
    FUN_00560720(&local_98,uVar5 * 10000);
    FUN_00417c40(param_3,&local_98,&DAT_00527bf8);
  }
  FUN_00417840(&local_b8,&DAT_00527bf8,5);
  return 1;
}

