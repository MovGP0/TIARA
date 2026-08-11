/* Ghidra address: 0132f4b0 */
/* Ghidra symbol: FUN_0132f4b0 */


longlong FUN_0132f4b0(longlong *param_1,undefined8 param_2,double param_3,double param_4,
                     double param_5)

{
  short sVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  double dVar8;
  
  dVar8 = param_3;
  if (param_4 <= -1e+29) {
    dVar8 = 1.0;
    param_4 = param_3;
  }
  sVar1 = FUN_0040c770(dVar8 / param_5);
  uVar3 = FUN_0040c770(param_4 / param_5);
  uVar2 = ((short)uVar3 - sVar1) + 1;
  uVar6 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),uVar2) & 0xffffffff;
  if (*param_1 == 0) {
    lVar4 = FUN_0132c700(uVar6);
    *param_1 = lVar4;
  }
  else if (*(short *)*param_1 != (short)uVar6) {
    lVar4 = FUN_0132c9c0(param_1,uVar6);
    *param_1 = lVar4;
  }
  uVar7 = (uint)uVar2;
  iVar5 = 0;
  if (-1 < (int)(uVar7 - 1)) {
    do {
      FUN_0132dbe0(*param_1,iVar5,param_2);
      iVar5 = iVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return *param_1;
}

