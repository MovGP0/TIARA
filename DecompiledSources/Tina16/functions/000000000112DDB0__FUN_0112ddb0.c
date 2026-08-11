/* Ghidra address: 0112ddb0 */
/* Ghidra symbol: FUN_0112ddb0 */


void FUN_0112ddb0(byte *param_1,longlong param_2,byte *param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_30 [2];
  uint local_1c;
  
  local_30[0] = 0;
  uVar5 = (uint)*param_1;
  local_1c = 0;
  if (*param_1 != 0) {
    do {
      iVar6 = (int)(uVar5 + 1) / 2;
      iVar7 = iVar6 + -1;
      if (iVar7 == 0) {
        uVar2 = (uint)param_1[2];
        uVar4 = (uint)*(byte *)(param_2 + 2);
      }
      else if (iVar7 == 1) {
        uVar2 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
        uVar4 = (uint)*(byte *)(param_2 + 2) * 0x100 + (uint)*(byte *)(param_2 + 3);
      }
      else {
        uVar2 = (uint)param_1[(longlong)(iVar6 + -3) + 2] * 0x10000 +
                (uint)param_1[(longlong)(iVar6 + -2) + 2] * 0x100 +
                (uint)param_1[(longlong)iVar7 + 2];
        uVar4 = (uint)*(byte *)(param_2 + 2 + (longlong)(iVar6 + -3)) * 0x10000 +
                (uint)*(byte *)(param_2 + 2 + (longlong)(iVar6 + -2)) * 0x100 +
                (uint)*(byte *)(param_2 + 2 + (longlong)iVar7);
      }
      uVar2 = FUN_0112dd70(uVar2,uVar4,&local_1c);
      bVar3 = (byte)uVar2;
      if (iVar7 == 0) {
        local_1c = uVar2 / 0x100;
        param_3[2] = bVar3;
      }
      else if (iVar7 == 1) {
        local_1c = uVar2 / 0x10000;
        param_3[2] = (byte)((ulonglong)(uVar2 & 0xff00) / 0x100);
        param_3[3] = bVar3;
      }
      else {
        param_3[(longlong)(iVar6 + -3) + 2] = (byte)((ulonglong)(uVar2 & 0xff0000) / 0x10000);
        param_3[(longlong)(iVar6 + -2) + 2] = (byte)((ulonglong)(uVar2 & 0xff00) / 0x100);
        param_3[(longlong)iVar7 + 2] = bVar3;
      }
      uVar5 = uVar5 - 6;
    } while (0 < (int)uVar5);
  }
  param_3[1] = param_1[1];
  *param_3 = *param_1;
  if ((param_4 == '\0') && (local_1c == 1)) {
    if (((*param_3 == 0x40) && ((param_3[1] & 0x3f) != 0)) &&
       ((DAT_0203017c == '\0' || ((param_3[0x21] & 0xf) == 0)))) {
      *param_3 = *param_3 - 1;
      param_3[1] = param_3[1] & 0x80 | (param_3[1] & 0x3f) - 1;
    }
    cVar1 = FUN_0112ebb0(param_3,param_3,*param_3 + 1,param_3[1] & 0x3f);
    if (cVar1 == '\0') {
      FUN_0041ddd0(local_30,PTR_PTR_02003350);
      FUN_0112d910(local_30[0]);
    }
    param_3[2] = param_3[2] | 0x10;
  }
  FUN_00414480(local_30);
  return;
}

