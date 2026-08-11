/* Ghidra address: 0107db00 */
/* Ghidra symbol: FUN_0107db00 */


void FUN_0107db00(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_58 = 0;
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_015ff3d0(param_1 + 0xb08);
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_010b2ee0(*(undefined8 *)(param_1 + 0xac8),iVar3);
      cVar1 = FUN_010af9d0(lVar2);
      if (cVar1 == '\0') {
        FUN_0107d520(param_1,*(undefined8 *)(lVar2 + 0x30),0,0);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_010b2240(*(undefined8 *)(param_1 + 0xac8),local_30,&DAT_0107dc9c,L"Debug\\");
  FUN_00416ba0(local_50,*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10),L".elf");
  FUN_0107d520(param_1,local_50[0],1,local_30[0]);
  FUN_00416ba0(&local_58,*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10),L".elf");
  FUN_0107d520(param_1,local_58,2,local_30[0]);
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_40,3);
  return;
}

