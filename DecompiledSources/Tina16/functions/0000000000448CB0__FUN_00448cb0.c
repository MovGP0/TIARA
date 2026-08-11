/* Ghidra address: 00448cb0 */
/* Ghidra symbol: FUN_00448cb0 */


ulonglong FUN_00448cb0(undefined8 param_1,short *param_2,short *param_3,short *param_4,
                      short *param_5)

{
  short sVar1;
  short sVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  short sVar6;
  undefined8 unaff_R13;
  short local_2c;
  ushort local_2a;
  
  uVar3 = FUN_00448820();
  iVar4 = (int)(uVar3 >> 0x20);
  if (iVar4 < 1) {
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = (longlong)((ulonglong)(uint)(iVar4 >> 0x1f) << 0x20 | uVar3 >> 0x20) % 7 & 0xffffffff;
    *param_5 = (short)uVar3 + 1;
    sVar6 = 1;
    for (iVar4 = iVar4 + -1; 0x23ab0 < iVar4; iVar4 = iVar4 + -0x23ab1) {
      sVar6 = sVar6 + 400;
    }
    FUN_0043d300(iVar4,CONCAT62((int6)(uVar3 >> 0x10),0x8eac),&local_2c,&local_2a);
    if (local_2c == 4) {
      local_2c = 3;
      local_2a = local_2a + 0x8eac;
    }
    sVar2 = local_2c * 100;
    FUN_0043d300(local_2a,0x5b5,&local_2c,&local_2a);
    sVar1 = local_2c * 4;
    FUN_0043d300(local_2a,0x16d,&local_2c,&local_2a);
    if (local_2c == 4) {
      local_2c = 3;
      local_2a = local_2a + 0x16d;
    }
    sVar6 = sVar6 + sVar2 + sVar1 + local_2c;
    uVar3 = FUN_00448b30(CONCAT62((int6)((ulonglong)unaff_R13 >> 0x10),sVar6) & 0xffffffff);
    uVar5 = 1;
    while( true ) {
      if (local_2a < *(ushort *)(&DAT_01dbe786 + uVar5 * 2 + (uVar3 & 0xff) * 0x18)) break;
      local_2a = local_2a - *(ushort *)(&DAT_01dbe786 + uVar5 * 2 + (uVar3 & 0xff) * 0x18);
      uVar5 = (ulonglong)(ushort)((short)uVar5 + 1);
    }
    *param_2 = sVar6;
    *param_3 = (short)uVar5;
    *param_4 = local_2a + 1;
  }
  return uVar3;
}

