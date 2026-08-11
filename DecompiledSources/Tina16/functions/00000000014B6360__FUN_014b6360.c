/* Ghidra address: 014b6360 */
/* Ghidra symbol: FUN_014b6360 */


void FUN_014b6360(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  lVar2 = FUN_004113f0(param_2,&PTR_FUN_0071be60);
  bVar4 = (*(ushort *)(lVar2 + 0xd0) & 0x20) != 0;
  if ((*(ushort *)(lVar2 + 0xd0) & 0x800) != 0) {
    bVar4 = bVar4 | 2;
  }
  if ((*(ushort *)(lVar2 + 0xd0) & 0x400) == 0) {
    bVar4 = bVar4 | 0x20;
  }
  else {
    bVar4 = bVar4 | 0x40;
  }
  FUN_007267a0(lVar2,&local_20);
  FUN_00726820(lVar2,&local_28);
  iVar1 = FUN_00c09100(*(undefined8 *)(param_1 + 0x860),local_20,local_28,bVar4);
  if (iVar1 == 0) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_38,0x3ea);
    FUN_007267a0(lVar2,&local_40);
    FUN_00416cd0(&local_30,4,local_38,&DAT_014b64cc,local_40,&LAB_014b64e0);
    FUN_016fd940(local_30);
  }
  FUN_00414560(&local_40,5);
  return;
}

