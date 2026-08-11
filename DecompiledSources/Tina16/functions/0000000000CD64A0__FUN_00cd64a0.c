/* Ghidra address: 00cd64a0 */
/* Ghidra symbol: FUN_00cd64a0 */


undefined8 * FUN_00cd64a0(longlong param_1,undefined8 *param_2,char *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte bVar7;
  
  FUN_004144d0(param_2);
  if (param_3 != (char *)0x0) {
    if (param_4 < 0) {
      param_4 = FUN_00414ce0(param_3);
    }
    if (param_4 != 0) {
      FUN_00415d10(param_2,param_4 / 2 + 1,0);
      uVar4 = (**(code **)(param_1 + 0x28))(param_1);
      pbVar6 = (byte *)*param_2;
      bVar7 = 0;
      bVar1 = false;
      for (; 0 < param_4; param_4 = param_4 + -1) {
        cVar2 = *param_3;
        if ((byte)(cVar2 + 0xa0U) < 0x20 && (1 << (cVar2 + 0xa0U & 0x1f) & 0x7fffffeU) != 0) {
          cVar2 = cVar2 + -0x20;
        }
        iVar3 = FUN_00cd63a0(cVar2,uVar4,0x12);
        param_3 = param_3 + 1;
        if (-1 < iVar3) {
          if (iVar3 < 0x11) {
            if ((bool)(bVar7 & 1)) {
              *pbVar6 = *pbVar6 | (byte)iVar3;
              pbVar6 = pbVar6 + 1;
            }
            else {
              *pbVar6 = (byte)(iVar3 << 4);
            }
            bVar7 = bVar7 + 1;
          }
          else if (!bVar1) {
            bVar1 = true;
            bVar7 = 0;
            pbVar6 = (byte *)*param_2;
          }
        }
      }
      lVar5 = FUN_00415ab0(*param_2);
      FUN_00415d10(param_2,(longlong)pbVar6 - lVar5,0);
    }
  }
  return param_2;
}

