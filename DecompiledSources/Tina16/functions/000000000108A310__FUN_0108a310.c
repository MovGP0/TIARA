/* Ghidra address: 0108a310 */
/* Ghidra symbol: FUN_0108a310 */


char FUN_0108a310(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [7];
  char local_19 [9];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00415dd0(&local_30,local_res10[0],0);
  if (*(int *)(param_1 + 0xad8) == 2) {
    FUN_0043e130(&local_58,local_res10[0]);
    uVar3 = FUN_00442620(param_1 + 0xc08,local_58);
    cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0xb20),uVar3);
    if (cVar1 != '\0') {
      FUN_0108a230(param_1,&local_60,local_res10[0],local_19,8);
      FUN_00414ad0(param_3,local_60);
    }
  }
  else {
    uVar2 = FUN_0108bb30(param_1);
    uVar3 = FUN_004425e0(param_1 + 0x2c10,local_30);
    local_19[0] = _Debug_GetSymbolValue
                            (*(undefined8 *)(param_1 + 0xb28),uVar2,uVar3,&local_28,
                             *(undefined4 *)(param_1 + 0xaa4),local_20);
    if (local_19[0] == '\0') {
      FUN_0043e130(&local_48,local_res10[0]);
      uVar3 = FUN_00442620(param_1 + 0xc08,local_48);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0xb20),uVar3);
      if (cVar1 != '\0') {
        FUN_0108a230(param_1,&local_50,local_res10[0],local_19,8);
        FUN_00414ad0(param_3,local_50);
      }
    }
    else {
      FUN_00415430(local_40,local_28,0);
      FUN_00416880(param_3,local_40[0]);
    }
  }
  cVar1 = local_19[0];
  FUN_00414560(&local_60,4);
  FUN_004144d0(local_40);
  FUN_004144d0(&local_30);
  FUN_00414480(local_res10);
  return cVar1;
}

