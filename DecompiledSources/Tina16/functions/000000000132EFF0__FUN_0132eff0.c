/* Ghidra address: 0132eff0 */
/* Ghidra symbol: FUN_0132eff0 */


undefined4 FUN_0132eff0(short *param_1,short *param_2,longlong *param_3)

{
  undefined8 uVar1;
  short sVar2;
  undefined4 unaff_EBX;
  ulonglong uVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  double dVar7;
  double extraout_XMM0_Qa;
  double dVar8;
  double dVar9;
  short local_4a;
  
  if (((param_1[1] == *param_2) && (*param_1 == *(short *)*param_3)) &&
     (param_2[1] == *(short *)(*param_3 + 2))) {
    sVar4 = *(short *)*param_3;
    local_4a = 0;
    do {
      sVar5 = *(short *)(*param_3 + 2);
      sVar2 = 0;
      do {
        dVar7 = (double)FUN_0132ec30(param_1,local_4a,0);
        uVar1 = FUN_0132ec30(param_2,0,sVar2);
        dVar7 = dVar7 * extraout_XMM0_Qa;
        uVar6 = param_1[1] - 1;
        uVar3 = CONCAT62((int6)((ulonglong)uVar1 >> 0x10),1) & 0xffffffff;
        if ((ushort)uVar3 <= uVar6) {
          do {
            dVar8 = (double)FUN_0132ec30(param_1,local_4a,uVar3);
            dVar9 = (double)FUN_0132ec30(param_2,uVar3,sVar2);
            dVar7 = dVar7 + dVar8 * dVar9;
            uVar3 = CONCAT62((int6)(uVar3 >> 0x10),(short)uVar3 + 1);
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        FUN_0132ee00(*param_3,local_4a,sVar2,dVar7);
        sVar2 = sVar2 + 1;
        sVar5 = sVar5 + -1;
      } while (sVar5 != 0);
      local_4a = local_4a + 1;
      sVar4 = sVar4 + -1;
    } while (sVar4 != 0);
    unaff_EBX = 0;
  }
  else {
    FUN_0132c080(L"matrix sizes are not conformant",0x13);
  }
  return unaff_EBX;
}

