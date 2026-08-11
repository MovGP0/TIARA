/* Ghidra address: 00557210 */
/* Ghidra symbol: FUN_00557210 */


undefined8
FUN_00557210(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4,char *param_5,
            byte param_6,undefined1 param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  int local_48;
  int local_40 [2];
  undefined1 local_38 [12];
  undefined4 local_2c;
  
  local_80 = 0;
  local_98 = param_1;
  local_90 = param_2;
  FUN_0040d200(local_70,0x40,0);
  iVar2 = FUN_00557000(auStack_b8);
  FUN_00419260(&local_80,&DAT_00406578,1,(longlong)iVar2);
  local_78 = local_80;
  local_2c = 0xf;
  if (((param_6 & param_4 != '\x04') != 0) &&
     (cVar1 = FUN_00535150(param_5,param_7,param_4), cVar1 != '\0')) {
    uVar3 = FUN_00417740(local_98,&DAT_00527bf8);
    FUN_00538080(0,param_5,uVar3);
    uVar3 = FUN_00538390(local_98);
    FUN_005571a0(auStack_b8,uVar3);
  }
  lVar6 = 0;
  if (param_3 != 0) {
    lVar6 = *(longlong *)(param_3 + -8);
  }
  if (0 < lVar6) {
    uVar3 = FUN_00536180(param_3);
    cVar1 = FUN_00535260(uVar3,param_4,0);
    if (cVar1 == '\0') {
      FUN_005570c0(auStack_b8,param_3);
    }
    else {
      uVar3 = FUN_00538390(param_3);
      FUN_005571a0(auStack_b8,uVar3);
    }
  }
  if (((param_4 != '\x04') && (param_6 == 0)) &&
     (cVar1 = FUN_00535150(param_5,param_7,param_4), cVar1 != '\0')) {
    uVar3 = FUN_00417740(local_98,&DAT_00527bf8);
    FUN_00538080(0,param_5,uVar3);
    uVar3 = FUN_00538390(local_98);
    FUN_005571a0(auStack_b8,uVar3);
  }
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = (int)*(undefined8 *)(param_3 + -8);
  }
  iVar2 = iVar2 + -1;
  iVar5 = 1;
  if (0 < iVar2) {
    do {
      lVar6 = (longlong)iVar5;
      uVar3 = FUN_00536180(param_3 + lVar6 * 0x20);
      cVar1 = FUN_00535260(uVar3,param_4,0);
      if (cVar1 == '\0') {
        FUN_005570c0(auStack_b8,param_3 + lVar6 * 0x20);
      }
      else {
        uVar3 = FUN_00538390(param_3 + lVar6 * 0x20);
        FUN_005571a0(auStack_b8,uVar3);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((param_4 == '\x04') && (param_5 != (char *)0x0)) {
    uVar3 = FUN_00417740(local_98,&DAT_00527bf8);
    FUN_00538080(0,param_5,uVar3);
    uVar3 = FUN_00538390(local_98);
    FUN_005571a0(auStack_b8,uVar3);
  }
  local_50 = local_80;
  local_48 = (int)local_78 - (int)local_80;
  FUN_00556f70(local_90,local_70);
  if ((param_4 == '\x04') && (local_40[0] < 0)) {
    FUN_00555370(local_40[0]);
  }
  if (param_5 == (char *)0x0) {
    FUN_00536400(local_98);
  }
  else if ((param_4 != '\x04') && (cVar1 = FUN_00535150(param_5,param_7,param_4), cVar1 == '\0')) {
    if (*param_5 == '\x04') {
      pbVar4 = (byte *)FUN_00587f10(param_5);
      if (*pbVar4 < 8) {
        bVar7 = ((int)CONCAT71((int7)((ulonglong)pbVar4 >> 8),1) << (*pbVar4 & 0x1f) & 7U) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        uVar3 = FUN_00417740(local_98,&DAT_00527bf8);
        FUN_00538200(local_38,param_5,uVar3,0);
        goto code_r0x0055759d;
      }
    }
    uVar3 = FUN_00417740(local_98,&DAT_00527bf8);
    FUN_00538080(local_40,param_5,uVar3);
  }
code_r0x0055759d:
  FUN_00419430(&local_80,&DAT_00406578);
  return local_98;
}

