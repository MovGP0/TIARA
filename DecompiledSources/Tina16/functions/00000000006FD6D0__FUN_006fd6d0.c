/* Ghidra address: 006fd6d0 */
/* Ghidra symbol: FUN_006fd6d0 */


void FUN_006fd6d0(longlong param_1,longlong param_2)

{
  short sVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  if (*(char *)(param_1 + 0x601) == '\0') goto LAB_006fd798;
  iVar4 = FUN_0064fca0(param_1,0x447,0,0);
  sVar1 = *(short *)(param_2 + 8);
  if (sVar1 != 0xd) {
    if (sVar1 == 0x1b) {
      pcVar3 = (code *)FUN_00411550(param_1,0xffac);
      (*pcVar3)(param_1);
      goto LAB_006fd798;
    }
    if (sVar1 != 0x28) goto LAB_006fd798;
  }
  if ((-1 < iVar4) && (iVar4 < *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x10))) {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),iVar4);
    local_38 = 1;
    local_34 = 1;
    local_30 = FUN_0064d1f0(uVar2,&local_38);
    pcVar3 = (code *)FUN_00411550(param_1,0xffaa);
    (*pcVar3)(param_1,uVar2);
  }
  if (*(short *)(param_2 + 8) == 0x28) {
    return;
  }
LAB_006fd798:
  FUN_00659830(param_1,param_2);
  return;
}

