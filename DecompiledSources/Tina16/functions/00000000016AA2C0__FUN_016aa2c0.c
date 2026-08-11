/* Ghidra address: 016aa2c0 */
/* Ghidra symbol: FUN_016aa2c0 */


undefined8 FUN_016aa2c0(undefined8 *param_1)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  undefined4 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 local_68;
  undefined8 local_60 [10];
  undefined8 uVar4;
  
  dVar6 = (double)param_1[1];
  dVar1 = (double)param_1[2];
  uVar2 = param_1[4];
  dVar3 = dVar1;
  uVar4 = param_1[5];
  uVar7 = uVar2;
  if (dVar1 < dVar6) {
    dVar3 = dVar6;
    uVar4 = uVar2;
    dVar6 = dVar1;
    uVar7 = param_1[5];
    local_68 = uVar2;
  }
  uVar5 = FUN_0040c840(param_1[6]);
  FUN_016a9fe0(*param_1,dVar6,dVar3,param_1[3],uVar7,uVar4,uVar5,&local_68,local_60);
  return local_60[0];
}

