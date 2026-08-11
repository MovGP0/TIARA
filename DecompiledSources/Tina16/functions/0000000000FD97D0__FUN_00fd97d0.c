/* Ghidra address: 00fd97d0 */
/* Ghidra symbol: FUN_00fd97d0 */


void FUN_00fd97d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_0043ea00(local_20,local_res20);
  FUN_00414b50(&local_res20,local_20[0]);
  bVar1 = true;
  iVar2 = FUN_00416db0(local_res20,L"STATUS");
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_res20,L"INTCON");
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_res20,&DAT_00fd99d8);
      if (iVar2 != 0) {
        iVar2 = FUN_00416db0(local_res20,L"PCLATCH");
        if (iVar2 != 0) {
          iVar2 = FUN_00416db0(local_res20,&DAT_00fd9a08);
          if (iVar2 != 0) goto LAB_00fd98cc;
        }
      }
    }
  }
  bVar1 = false;
LAB_00fd98cc:
  if (bVar1) {
    uVar3 = FUN_00ff1970(param_1,local_res20);
    FUN_00fd9a10(param_1,param_2,uVar3);
  }
  FUN_00416cd0(&local_28,3,local_res18,local_res20,param_5);
  FUN_00f787d0(param_1,param_2,local_28);
  FUN_00414560(&local_28,2);
  FUN_00414560(&local_res18,3);
  return;
}

