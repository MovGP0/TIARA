/* Ghidra address: 014b61e0 */
/* Ghidra symbol: FUN_014b61e0 */


void FUN_014b61e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  lVar2 = FUN_004113f0(param_2,&PTR_FUN_0071b8e8);
  uVar4 = 0;
  if ((*(ushort *)(lVar2 + 0xd0) & 1) == 0) {
    uVar4 = 4;
  }
  if ((*(ushort *)(lVar2 + 0xd0) & 0x20) != 0) {
    uVar4 = uVar4 | 1;
  }
  if ((*(ushort *)(lVar2 + 0xd0) & 0x800) != 0) {
    uVar4 = uVar4 | 2;
  }
  FUN_007267a0(lVar2,&local_20);
  iVar1 = FUN_00c09100(*(undefined8 *)(param_1 + 0x860),local_20,0,uVar4);
  if (iVar1 == 0) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_30,0x3ea);
    FUN_007267a0(lVar2,&local_38);
    FUN_00416cd0(&local_28,4,local_30,&DAT_014b633c,local_38,&LAB_014b6350);
    FUN_016fd940(local_28);
  }
  FUN_00414560(&local_38,4);
  return;
}

