/* Ghidra address: 017b48a0 */
/* Ghidra symbol: FUN_017b48a0 */


undefined8
FUN_017b48a0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  double dVar8;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar5 = *param_4;
  uVar6 = param_4[1];
  dVar8 = (double)FUN_017b16f0(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  if ((dVar8 < 2.0) && (cVar7 = FUN_017b17a0(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6), cVar7 != '\0')) {
    return 1;
  }
  return 0;
}

