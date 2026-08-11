/* Ghidra address: 010e8460 */
/* Ghidra symbol: FUN_010e8460 */


undefined8 * FUN_010e8460(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  iVar7 = *(int *)(param_1 + 0x48) + -1;
  iVar2 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x4c) + -1;
  iVar6 = FUN_0040c770((double)(iVar8 - iVar2) / 2.0);
  uVar3 = uVar1;
  iVar4 = iVar2;
  iVar5 = iVar7;
  if (((param_3 != '\0') && (iVar4 = iVar6, iVar6 = iVar8, param_3 != '\x01')) &&
     (uVar3 = local_48, iVar4 = local_44, iVar5 = local_40, iVar6 = local_3c, param_3 == '\x02')) {
    uVar3 = uVar1;
    iVar4 = iVar2;
    iVar5 = iVar7;
    iVar6 = iVar8;
  }
  local_3c = iVar6;
  local_40 = iVar5;
  local_44 = iVar4;
  local_48 = uVar3;
  *param_2 = CONCAT44(local_44,local_48);
  param_2[1] = CONCAT44(local_3c,local_40);
  return param_2;
}

