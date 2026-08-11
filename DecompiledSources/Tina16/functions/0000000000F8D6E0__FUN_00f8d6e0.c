/* Ghidra address: 00f8d6e0 */
/* Ghidra symbol: FUN_00f8d6e0 */


void FUN_00f8d6e0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar1 = FUN_00f90b40(param_1,*(undefined8 *)(param_1 + 0x3468));
  *(undefined4 *)(param_1 + 0x3404) = uVar1;
  iVar2 = FUN_00f8b5a0(param_1,uVar1);
  if (iVar2 == -1) {
    *(undefined4 *)(param_1 + 0x3400) = *(undefined4 *)(param_1 + 0x348c);
  }
  else {
    *(int *)(param_1 + 0x34a0) = iVar2;
    *(int *)(param_1 + 0x3400) = iVar2;
  }
  if (*(longlong *)(param_1 + 0x3468) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00f81cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x3468) + 0x1370));
  }
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,&local_28,0x898);
  FUN_00b8fd60(&local_30,uVar4,*PTR_DAT_02005310,0,1);
  FUN_00416cd0(local_20,3,local_28,&LAB_00f8d838,local_30);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x30),local_20[0]);
  FUN_00414560(&local_30,3);
  return;
}

