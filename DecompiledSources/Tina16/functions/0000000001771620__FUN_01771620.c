/* Ghidra address: 01771620 */
/* Ghidra symbol: FUN_01771620 */


void FUN_01771620(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  if (*(char *)(param_1 + 0x62) == '\0') {
    cVar1 = FUN_015f2cb0(*(undefined8 *)(param_1 + 0xb0));
    if (cVar1 == '\0') {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x28))(*(longlong **)(param_1 + 0xc0));
      if (iVar2 == 0) {
        if (local_res18 == 0) {
          FUN_00414b50(local_30,*(undefined8 *)(param_1 + 0x48));
        }
        else {
          FUN_00414b50(local_30,local_res18);
        }
        uVar3 = FUN_015eda40(*(undefined8 *)(param_1 + 0xb0),local_30[0],local_res10);
        (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x10))(*(longlong **)(param_1 + 0xc0),uVar3);
        FUN_00410f20(uVar3);
      }
    }
  }
  else {
    FUN_01768520(local_40,*(undefined8 *)(param_1 + 0x48),0);
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xd8))
              (*(longlong **)(param_1 + 0xb0),local_40[0]);
    cVar1 = FUN_015f2cb0(*(undefined8 *)(param_1 + 0xb0));
    if (cVar1 == '\0') {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x28))(*(longlong **)(param_1 + 0xc0));
      if (iVar2 == 0) {
        uVar3 = FUN_015eda40(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x48),
                             local_res10);
        (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x10))(*(longlong **)(param_1 + 0xc0),uVar3);
        FUN_00410f20(uVar3);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x90))(*(longlong **)(param_1 + 0xb8));
    if (cVar1 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x88))
                (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0));
    }
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x88))
              (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xb0));
  }
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  FUN_00414560(&local_res10,2);
  return;
}

