/* Ghidra address: 006fbb60 */
/* Ghidra symbol: FUN_006fbb60 */


void FUN_006fbb60(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_006cb0d0);
  if (cVar1 != '\0') {
    *(longlong *)(param_2 + 0x340) = param_1;
  }
  if ((*(ushort *)(param_2 + 0x34) & 1) == 0) {
    iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x4b0),param_2);
    if (iVar2 < 0) {
      uVar3 = FUN_006fd9a0(param_1,iVar2,*(undefined4 *)(param_2 + 0x90),
                           *(undefined4 *)(param_2 + 0x94));
      FUN_004aec30(*(undefined8 *)(param_1 + 0x4b0),uVar3,param_2);
      FUN_006fbd10(param_1,0x443,uVar3,uVar3);
    }
    else {
      uVar3 = FUN_006fdb70(param_1,iVar2,*(undefined4 *)(param_2 + 0x90),
                           *(undefined4 *)(param_2 + 0x94));
    }
  }
  else {
    uVar3 = FUN_004ae7e0(*(undefined8 *)(param_1 + 0x4b0),param_2);
    FUN_006fc590(param_1,uVar3);
  }
  if (*(char *)(param_1 + 0x4e6) == '\0') {
    FUN_006fb920(param_1,uVar3);
  }
  else {
    FUN_006fb920(param_1,0);
  }
  FUN_006fd640(param_1);
  return;
}

