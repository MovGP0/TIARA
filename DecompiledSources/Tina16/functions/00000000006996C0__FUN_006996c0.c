/* Ghidra address: 006996c0 */
/* Ghidra symbol: FUN_006996c0 */


undefined8 FUN_006996c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 local_20;
  
  local_20 = 0;
  (**(code **)(**(longlong **)(param_3 + 0x70) + 0x10))
            (*(longlong **)(param_3 + 0x70),*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  cVar3 = FUN_004113d0(uVar1,&PTR_FUN_006682e8);
  if (cVar3 == '\0') {
    FUN_00785f90(param_1,&local_20);
  }
  else {
    FUN_0064dd90(uVar1,&local_20);
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar2 + 0xb1) == '\x01') {
    iVar4 = FUN_005fdff0(param_3,local_20);
    uVar5 = FUN_005fdfd0(param_3,local_20);
    FUN_004238d0(param_2,(*(int *)(lVar2 + 0x98) - iVar4) + -0xc,0,
                 *(int *)(*(longlong *)(param_1 + 0x10) + 0x98) + -0xc,uVar5);
  }
  else {
    iVar4 = FUN_005fdff0(param_3,local_20);
    uVar5 = FUN_005fdfd0(param_3,local_20);
    FUN_004238d0(param_2,0xc,0,iVar4 + 0xc,uVar5);
  }
  FUN_00414480(&local_20);
  return param_2;
}

