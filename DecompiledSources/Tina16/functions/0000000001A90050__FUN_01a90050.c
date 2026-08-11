/* Ghidra address: 01a90050 */
/* Ghidra symbol: FUN_01a90050 */


undefined8
FUN_01a90050(double param_1,double param_2,double param_3,double param_4,double param_5,
            double param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  uVar3 = 0;
  uVar2 = 0;
  uVar4 = FUN_00b90650(param_1,param_3);
  uVar5 = FUN_00b90650(param_2,param_4);
  uVar6 = FUN_00b90620(param_1,param_3);
  uVar7 = FUN_00b90620(param_2,param_4);
  cVar1 = FUN_01a8e5c0(uVar4,uVar5,uVar6,uVar7,param_5,param_6);
  if (cVar1 != '\0') {
    dVar8 = (double)FUN_0040c760((param_3 - param_1) * (param_3 - param_1) +
                                 (param_4 - param_2) * (param_4 - param_2));
    dVar9 = (double)FUN_00b90650(param_1,param_3);
    if ((((dVar9 - 0.001 <= param_5) &&
         (dVar9 = (double)FUN_00b90620(param_1,param_3), param_5 <= dVar9 + 0.001)) &&
        (dVar9 = (double)FUN_00b90650(param_2,param_4), uVar3 = uVar2, dVar9 - 0.001 <= param_6)) &&
       ((dVar9 = (double)FUN_00b90620(param_2,param_4), param_6 <= dVar9 + 0.001 &&
        (((dVar8 != 0.0 &&
          (dVar9 = (double)FUN_0040c850((param_3 - param_1) * (param_6 - param_2) -
                                        (param_4 - param_2) * (param_5 - param_1)),
          dVar9 <= dVar8 * 0.001)) ||
         ((dVar8 == 0.0 &&
          (dVar8 = (double)FUN_0040c760((param_5 - param_1) * (param_5 - param_1) +
                                        (param_6 - param_2) * (param_6 - param_2)), dVar8 < 0.001)))
         ))))) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

