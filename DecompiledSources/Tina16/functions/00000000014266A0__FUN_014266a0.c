/* Ghidra address: 014266a0 */
/* Ghidra symbol: FUN_014266a0 */


void FUN_014266a0(undefined8 param_1,undefined8 param_2)

{
  double *pdVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 *local_58;
  int *local_50 [8];
  
  local_58 = (undefined1 *)0x0;
  FUN_016ee260(param_1,local_50,0x18,0);
  piVar2 = local_50[0];
  *local_50[0] = 3;
  FUN_00419430(&local_58,&DAT_01425f80);
  FUN_00419260(&local_58,&DAT_01425f80,1,6);
  *local_58 = 1;
  local_58[1] = 0;
  local_58[2] = 2;
  local_58[3] = 0;
  local_58[4] = 3;
  local_58[5] = 0;
  FUN_01425fb0(param_1,param_2,local_50[0],local_58);
  uVar4 = FUN_00409570(0x90);
  *(undefined8 *)(piVar2 + 2) = uVar4;
  uVar4 = FUN_00409570(0x30);
  *(undefined8 *)(piVar2 + 4) = uVar4;
  FUN_016eb0a0(param_1,1);
  dVar6 = (double)FUN_0040c850();
  dVar6 = (double)FUN_00c42750(-dVar6 / 20.0);
  FUN_016eb0a0(param_1,2);
  dVar7 = (double)FUN_0040c850();
  dVar7 = (double)FUN_00c42750(-dVar7 / 20.0);
  dVar8 = (double)FUN_016eb0a0(param_1,3);
  uVar4 = FUN_016eb0a0(param_1,4);
  dVar8 = (dVar8 - 1.0) / (dVar8 + 1.0);
  pdVar1 = *(double **)(piVar2 + 2);
  *pdVar1 = dVar8;
  pdVar1[8] = dVar8;
  pdVar1[0x10] = dVar8;
  pdVar1[4] = dVar6;
  pdVar1[6] = dVar6;
  pdVar1[0xe] = dVar6;
  pdVar1[2] = dVar7;
  pdVar1[10] = dVar7;
  pdVar1[0xc] = dVar7;
  iVar5 = *piVar2;
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      *(undefined8 *)(*(longlong *)(piVar2 + 4) + (longlong)iVar3 * 0x10) = uVar4;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_016e9f40(param_1,FUN_01425f30);
  FUN_016e9f50(param_1,FUN_014262a0);
  FUN_00419430(&local_58,&DAT_01425f80);
  return;
}

