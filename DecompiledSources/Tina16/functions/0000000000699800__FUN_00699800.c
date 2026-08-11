/* Ghidra address: 00699800 */
/* Ghidra symbol: FUN_00699800 */


undefined8 FUN_00699800(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_006682e8);
  if (cVar2 == '\0') {
    FUN_00785f90(param_1,local_20);
  }
  else {
    FUN_0064dd90(uVar1,local_20);
  }
  iVar3 = FUN_005fdfd0(param_3,local_20[0]);
  FUN_004238d0(param_2,0,iVar3 / 2 + 1,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98),
               *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c));
  FUN_00414480(local_20);
  return param_2;
}

