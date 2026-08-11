/* Ghidra address: 0133dee0 */
/* Ghidra symbol: FUN_0133dee0 */


double FUN_0133dee0(longlong param_1,double *param_2,double *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  
  puVar4 = *(undefined8 **)(param_1 + 0x14d5);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  dVar3 = (double)puVar4[2];
  uVar6 = FUN_0040c840(puVar4[6]);
  uVar5 = FUN_0040c840(puVar4[7]);
  uVar7 = FUN_0040c840(puVar4[9]);
  *(undefined4 *)(param_1 + 0x1538) = uVar7;
  *param_3 = *(double *)(param_1 + 0x1530) + dVar3;
  if (*(char *)(param_1 + 0x1548) != '\0') {
    dVar8 = (double)FUN_017c58f0(uVar1,uVar2,0,uVar6,*(undefined4 *)(param_1 + 0x14d0),uVar5,0);
    *param_2 = dVar8;
    *(undefined1 *)(param_1 + 0x1548) = 0;
  }
  return *(double *)(param_1 + 0x1530) + (double)*(int *)(param_1 + 0x1538) / *param_2 + dVar3;
}

