/* Ghidra address: 01c945b0 */
/* Ghidra symbol: FUN_01c945b0 */


void FUN_01c945b0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_48;
  longlong local_40;
  longlong local_30;
  int local_24;
  undefined8 local_20;
  
  local_60 = auStack_88;
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_30 = FUN_01c8a3c0(param_1,*(undefined8 *)(param_1 + 0x2788));
  cVar2 = FUN_01d0fb00(local_30 + 0x40,PTR_DAT_02004010);
  if (cVar2 == '\0') {
    FUN_0199e310(*(undefined8 *)(local_30 + 0x10),0,1,1);
  }
  FUN_00417c40(local_30 + 0x40,PTR_DAT_02004010,&DAT_01d0d0b8);
  FUN_00417c40(param_1 + 0x1b80,PTR_DAT_02004010,&DAT_01d0d0b8);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
  local_24 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_40 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),local_24);
      iVar3 = FUN_004aeba0(local_20,*(undefined8 *)(local_40 + 0x10));
      if (iVar3 == -1) {
        FUN_004ae7e0(local_20,*(undefined8 *)(local_40 + 0x10));
        cVar2 = FUN_01c8cf20(param_1,*(undefined8 *)(local_40 + 0x10));
        if (cVar2 != '\0') {
          local_48 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),local_24);
          FUN_00417c40(PTR_DAT_02004010,local_48 + 0x40,&DAT_01d0d0b8);
          uVar1 = *(undefined8 *)(local_40 + 0x10);
          puVar4 = (undefined8 *)FUN_01c8a3c0(param_1,uVar1);
          FUN_014a1f90(0,uVar1,*puVar4,0);
        }
      }
      local_24 = local_24 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_01c8a3c0(param_1,*(undefined8 *)(param_1 + 0x2788));
  FUN_00417c40(PTR_DAT_02004010,param_1 + 0x1b80,&DAT_01d0d0b8);
  FUN_00410f20(local_20);
  return;
}

