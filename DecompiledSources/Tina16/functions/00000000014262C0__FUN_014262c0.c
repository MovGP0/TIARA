/* Ghidra address: 014262c0 */
/* Ghidra symbol: FUN_014262c0 */


void FUN_014262c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *local_58;
  int *local_50 [7];
  
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
  uVar5 = FUN_00409570(0x90);
  *(undefined8 *)(piVar2 + 2) = uVar5;
  uVar5 = FUN_00409570(0x30);
  *(undefined8 *)(piVar2 + 4) = uVar5;
  cVar3 = FUN_016eacf0(param_1,1,2);
  FUN_016eb0a0(param_1,2);
  dVar7 = (double)FUN_0040c850();
  uVar5 = FUN_00c42750(-dVar7 / 20.0);
  FUN_016eb0a0(param_1,3);
  dVar7 = (double)FUN_0040c850();
  uVar8 = FUN_00c42750(-dVar7 / 20.0);
  uVar9 = FUN_016eb0a0(param_1,4);
  puVar1 = *(undefined8 **)(piVar2 + 2);
  *puVar1 = 0;
  puVar1[8] = 0;
  puVar1[0x10] = 0;
  uVar10 = uVar8;
  if (cVar3 == '\0') {
    uVar10 = uVar5;
  }
  puVar1[4] = uVar10;
  uVar10 = uVar8;
  if (cVar3 == '\0') {
    uVar10 = uVar5;
  }
  puVar1[6] = uVar10;
  uVar10 = uVar8;
  if (cVar3 == '\0') {
    uVar10 = uVar5;
  }
  puVar1[0xe] = uVar10;
  uVar10 = uVar5;
  if (cVar3 == '\0') {
    uVar10 = uVar8;
  }
  puVar1[2] = uVar10;
  uVar10 = uVar5;
  if (cVar3 == '\0') {
    uVar10 = uVar8;
  }
  puVar1[10] = uVar10;
  if (cVar3 == '\0') {
    uVar5 = uVar8;
  }
  puVar1[0xc] = uVar5;
  iVar6 = *piVar2;
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      *(undefined8 *)(*(longlong *)(piVar2 + 4) + (longlong)iVar4 * 0x10) = uVar9;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_016e9f40(param_1,FUN_01425f30);
  FUN_016e9f50(param_1,FUN_014262a0);
  FUN_00419430(&local_58,&DAT_01425f80);
  return;
}

