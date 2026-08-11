/* Ghidra address: 00df00f0 */
/* Ghidra symbol: FUN_00df00f0 */


void FUN_00df00f0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  longlong local_60 [8];
  
  uVar3 = FUN_00b92140(0);
  cVar1 = FUN_016eacf0(param_1,6,4);
  if (cVar1 != '\0') {
    if (cVar1 != '\x03') goto LAB_00df02f2;
    param_3 = param_3 & 0xff;
    if (param_3 < 7) {
      if (param_3 == 6) {
        FUN_016ed220(param_1,1,0,0);
        goto LAB_00df02f2;
      }
      if ((param_3 != 1) && (param_3 != 5)) goto LAB_00df02f2;
    }
    else if (param_3 != 7) {
      if (param_3 == 8) {
        FUN_016ed460(param_1,1,0,0,0,0);
      }
      goto LAB_00df02f2;
    }
    FUN_016ed220(param_1,1,0,0);
    goto LAB_00df02f2;
  }
  FUN_016ee260(param_1,local_60,0x18,0);
  dVar4 = 0.0;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 7) {
    if (uVar2 == 6) {
      dVar4 = (double)FUN_016eb0a0(param_1,1);
      uVar6 = FUN_016ed780(param_2,param_3);
      dVar7 = (double)FUN_016eb200(param_1,param_2,param_3,2,uVar6);
      dVar4 = dVar4 + dVar7;
      FUN_016ed220(param_1,1,dVar4,0);
    }
    else if ((uVar2 == 1) || (uVar2 == 5)) goto LAB_00df019a;
  }
  else if (uVar2 == 7) {
LAB_00df019a:
    dVar4 = (double)FUN_016eb0a0(param_1,1);
    FUN_016ed220(param_1,1,dVar4,0);
  }
  else if (uVar2 == 8) {
    uVar6 = FUN_016eb510(param_1,2);
    uVar5 = FUN_016eb690(param_1,2);
    FUN_016ed460(param_1,1,0,uVar6,uVar5,0);
  }
  *(double *)(local_60[0] + 8) = dVar4;
LAB_00df02f2:
  dVar4 = (double)FUN_00b92140(uVar3);
  *(double *)PTR_DAT_02003c50 = dVar4 + *(double *)PTR_DAT_02003c50;
  return;
}

