/* Ghidra address: 01950f30 */
/* Ghidra symbol: FUN_01950f30 */


char FUN_01950f30(longlong param_1,double param_2,double param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double extraout_XMM0_Qa;
  double dVar8;
  double dVar9;
  undefined1 local_98 [112];
  
  dVar7 = 0.0;
  dVar8 = 0.0;
  dVar9 = 0.0;
  if (*(double *)(param_1 + 0xa8) == 0.0) {
    dVar7 = 4.0;
    dVar8 = 4.0;
  }
  else if (*(double *)(param_1 + 0xb0) == 0.0) {
    dVar9 = 4.0;
  }
  dVar6 = (double)FUN_019508b0(param_1);
  if ((((param_2 < dVar6 - dVar7) ||
       (dVar7 = (double)FUN_019508b0(param_1), dVar7 + *(double *)(param_1 + 0xa8) + dVar8 < param_2
       )) || (dVar7 = (double)FUN_01950860(param_1), param_3 < dVar7 - dVar9)) ||
     (FUN_01950860(param_1), extraout_XMM0_Qa + *(double *)(param_1 + 0xb0) + dVar9 < param_3)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    if (cVar1 == '\0') {
      FUN_019508b0(param_1);
      uVar2 = FUN_0040c770();
      FUN_01950860(param_1);
      uVar3 = FUN_0040c770();
      dVar7 = (double)FUN_019508b0(param_1);
      uVar4 = FUN_0040c770(dVar7 + *(double *)(param_1 + 0xa8));
      dVar7 = (double)FUN_01950860(param_1);
      uVar5 = FUN_0040c770(dVar7 + *(double *)(param_1 + 0xb0));
      FUN_00498350(local_98,uVar2,uVar3,uVar4,uVar5);
      cVar1 = FUN_0197e1d0(*(undefined8 *)(param_1 + 0x140),local_98,param_2,param_3);
      if (cVar1 == '\0') {
        return '\0';
      }
    }
    cVar1 = '\x01';
  }
  return cVar1;
}

