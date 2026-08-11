/* Ghidra address: 01837460 */
/* Ghidra symbol: FUN_01837460 */


char FUN_01837460(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar4 = FUN_0181e580(*(undefined8 *)(param_1 + 0x40),L"types");
  iVar2 = FUN_0181e510(uVar4,local_res10[0]);
  if (iVar2 == -1) {
    uVar4 = FUN_0181e580(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),L"types");
    iVar2 = FUN_0181e510(uVar4,local_res10[0]);
    if (iVar2 != -1) {
      uVar3 = FUN_0181e510(uVar4,local_res10[0]);
      uVar4 = FUN_0181e3c0(uVar4,uVar3);
      FUN_0181e5f0(uVar4,&local_28,L"type");
      FUN_00414b50(local_res10,local_28);
    }
  }
  else {
    uVar3 = FUN_0181e510(uVar4,local_res10[0]);
    uVar4 = FUN_0181e3c0(uVar4,uVar3);
    FUN_0181e5f0(uVar4,local_20,L"type");
    FUN_00414b50(local_res10,local_20[0]);
  }
  cVar1 = FUN_018228f0(local_res10[0],*(undefined8 *)(param_1 + 0x38));
  if (cVar1 == '\x05') {
    FUN_01837140(param_1,local_res10[0]);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return cVar1;
}

