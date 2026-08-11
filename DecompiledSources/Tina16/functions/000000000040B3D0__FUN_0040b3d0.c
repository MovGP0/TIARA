/* Ghidra address: 0040b3d0 */
/* Ghidra symbol: FUN_0040b3d0 */


void FUN_0040b3d0(longlong param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  FUN_0040a1a0(param_1 + 0x48,(longlong)(param_2 + 0x3ff));
  FUN_0040a1a0(param_1 + 0x40,(longlong)(param_2 + 0x3c9));
  FUN_0040a1a0(param_1 + 0x38,(longlong)(param_2 + 0x396));
  dVar1 = *(double *)(param_1 + 0x30);
  dVar3 = dVar1 + -*(double *)(param_1 + 0x38);
  dVar1 = (dVar1 - (dVar3 - (dVar3 - dVar1))) + (-*(double *)(param_1 + 0x38) - (dVar3 - dVar1)) +
          0.0;
  dVar5 = dVar3 + dVar1;
  dVar2 = -*(double *)(param_1 + 0x40);
  dVar4 = dVar2 + dVar5;
  dVar2 = (dVar2 - (dVar4 - (dVar4 - dVar2))) + (dVar5 - (dVar4 - dVar2)) +
          (dVar1 - (dVar5 - dVar3));
  dVar5 = dVar4 + dVar2;
  dVar1 = **(double **)(param_1 + 0x90);
  dVar3 = dVar1 + dVar5;
  dVar2 = (dVar1 - (dVar3 - (dVar3 - dVar1))) + (dVar5 - (dVar3 - dVar1)) +
          (dVar2 - (dVar5 - dVar4));
  dVar4 = dVar3 + dVar2;
  dVar2 = dVar2 - (dVar4 - dVar3);
  dVar1 = -*(double *)(param_1 + 0x48);
  dVar5 = dVar1 + dVar4;
  dVar3 = (dVar1 - (dVar5 - (dVar5 - dVar1))) + (dVar4 - (dVar5 - dVar1)) + dVar2;
  dVar7 = dVar5 + dVar3;
  dVar1 = **(double **)(param_1 + 0x88);
  dVar6 = dVar1 + dVar7;
  dVar3 = (dVar1 - (dVar6 - (dVar6 - dVar1))) + (dVar7 - (dVar6 - dVar1)) +
          (dVar3 - (dVar7 - dVar5));
  dVar7 = dVar6 + dVar3;
  dVar3 = dVar3 - (dVar7 - dVar6);
  dVar1 = **(double **)(param_1 + 0x88);
  **(double **)(param_1 + 0x88) = dVar7;
  **(double **)(param_1 + 0x90) = dVar3;
  dVar5 = dVar1 + -dVar7;
  dVar1 = (dVar1 - (dVar5 - (dVar5 - dVar1))) + (-dVar7 - (dVar5 - dVar1)) + -dVar3;
  dVar7 = dVar5 + dVar1;
  dVar3 = -*(double *)(param_1 + 0x48);
  dVar6 = dVar3 + dVar7;
  dVar1 = (dVar3 - (dVar6 - (dVar6 - dVar3))) + (dVar7 - (dVar6 - dVar3)) +
          (dVar1 - (dVar7 - dVar5));
  dVar5 = dVar6 + dVar1;
  dVar3 = dVar4 + dVar5;
  *(double *)(param_1 + 0x30) =
       dVar3 + (dVar4 - (dVar3 - (dVar3 - dVar4))) + (dVar5 - (dVar3 - dVar4)) + dVar2 +
               (dVar1 - (dVar5 - dVar6));
  return;
}

