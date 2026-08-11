/* Ghidra address: 01c7cb00 */
/* Ghidra symbol: FUN_01c7cb00 */


void FUN_01c7cb00(longlong param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar3 = FUN_01c7d9d0(param_1);
  if (*(int *)(param_1 + 0x17f8) < *(int *)(*(longlong *)(lVar3 + 0x18) + 0x10) + -1) {
    lVar3 = FUN_01c7d9d0(param_1);
    lVar3 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0x18),*(int *)(param_1 + 0x17f8) + 1);
    sVar1 = *(short *)(lVar3 + 8);
    if ((*(int *)(param_1 + 0x17fc) < *(int *)(param_1 + 0x17f8) + 1) && (0 < sVar1)) {
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,local_20,0x40a);
      FUN_00b91700(local_20,1,(int)sVar1);
      uVar4 = FUN_01c7d9d0(param_1);
      iVar2 = FUN_012bec10(uVar4,*(int *)(param_1 + 0x17f8) + 1);
      FUN_00b91700(local_20,2,100 - iVar2);
      iVar2 = FUN_0072d440(local_20[0],0,0xc,0);
      if (iVar2 != 1) goto LAB_01c7cc0a;
    }
    *(int *)(param_1 + 0x17f8) = *(int *)(param_1 + 0x17f8) + 1;
    FUN_01c7c9a0(param_1);
  }
LAB_01c7cc0a:
  FUN_00414480(local_20);
  return;
}

