/* Ghidra address: 004c3380 */
/* Ghidra symbol: FUN_004c3380 */


undefined8 FUN_004c3380(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_48 = param_2;
  FUN_00460b80(param_2);
  uVar4 = FUN_004bea50(param_1);
  uVar4 = uVar4 & 0xff;
  if (uVar4 < 0xd) {
    if (uVar4 == 0xc) {
LAB_004c35c8:
      FUN_004c1ed0(param_1,local_20);
      FUN_00468a10(local_48,local_20[0]);
      goto code_r0x004c3652;
    }
    if (uVar4 < 6) {
      if (uVar4 == 5) {
        uVar5 = FUN_004c02a0(param_1);
        FUN_00468860(local_48,uVar5);
        goto code_r0x004c3652;
      }
      if (uVar4 == 0) goto LAB_004c34c0;
      if (uVar4 == 2) {
        cVar1 = FUN_004c06c0(param_1);
        FUN_00468530(local_48,(longlong)cVar1,0xffffffffffffffff);
        goto code_r0x004c3652;
      }
      if (uVar4 == 3) {
        sVar2 = FUN_004c06c0(param_1);
        FUN_00468530(local_48,(longlong)sVar2,0xfffffffffffffffe);
        goto code_r0x004c3652;
      }
      if (uVar4 == 4) {
        uVar3 = FUN_004c06c0(param_1);
        FUN_00468530(local_48,uVar3,0xfffffffffffffffc);
        goto code_r0x004c3652;
      }
    }
    else {
      if (uVar4 == 6) goto LAB_004c35c8;
      if (uVar4 - 8 < 2) {
        cVar1 = FUN_004c23c0(param_1);
        FUN_00468820(local_48,cVar1 == '\t');
        goto code_r0x004c3652;
      }
      if (uVar4 - 8 == 2) {
        FUN_004c3140(auStack_68,&local_40);
        FUN_00461840(local_48,&local_40);
        goto code_r0x004c3652;
      }
    }
  }
  else if (uVar4 < 0x13) {
    if (uVar4 == 0x12) {
LAB_004c35e4:
      FUN_004c1ed0(param_1,&local_28);
      FUN_00468a10(local_48,local_28);
      goto code_r0x004c3652;
    }
    if (uVar4 == 0xd) {
LAB_004c34c0:
      cVar1 = FUN_004c23c0(param_1);
      if (cVar1 != '\r') {
        FUN_0046f180(local_48);
      }
      goto code_r0x004c3652;
    }
    if (uVar4 == 0xf) {
      fVar6 = (float)FUN_004c0350(param_1);
      FUN_00468860(local_48,(double)fVar6);
      goto code_r0x004c3652;
    }
    if (uVar4 == 0x10) {
      uVar5 = FUN_004c03b0(param_1);
      FUN_004688e0(local_48,uVar5);
      goto code_r0x004c3652;
    }
    if (uVar4 == 0x11) {
      uVar5 = FUN_004c0400(param_1);
      FUN_004688a0(local_48,uVar5);
      goto code_r0x004c3652;
    }
  }
  else {
    if (uVar4 == 0x13) {
      uVar5 = FUN_004c0750(param_1);
      FUN_00468700(local_48,uVar5);
      goto code_r0x004c3652;
    }
    if (uVar4 == 0x14) goto LAB_004c35e4;
    if (uVar4 == 0x15) {
      uVar5 = FUN_004c02f0(param_1);
      FUN_00468860(local_48,uVar5);
      goto code_r0x004c3652;
    }
  }
  FUN_004b6d70();
code_r0x004c3652:
  FUN_00460ba0(&local_40);
  FUN_00414560(&local_28,2);
  return local_48;
}

