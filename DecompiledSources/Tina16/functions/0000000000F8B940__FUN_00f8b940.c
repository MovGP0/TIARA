/* Ghidra address: 00f8b940 */
/* Ghidra symbol: FUN_00f8b940 */


undefined8 FUN_00f8b940(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_60[0] = 0;
  local_68 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(param_2);
  FUN_00414480(param_4);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x3478) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x3478) + 0x18))
                (*(longlong **)(param_1 + 0x3478),local_30,iVar3);
      iVar2 = FUN_004170c0(&LAB_00f8bb98,local_30[0],1);
      FUN_00416dc0(&local_40,local_30[0],1,iVar2 + -1);
      FUN_00416dc0(&local_38,local_30[0],iVar2 + 1,0xff);
      iVar2 = FUN_004170c0(&LAB_00f8bb98,local_38,1);
      FUN_00416dc0(&local_48,local_38,1,iVar2 + -1);
      FUN_0043e130(local_60,local_48);
      FUN_0043e130(&local_68,local_res18[0]);
      iVar2 = FUN_00416db0(local_60[0],local_68);
      if (iVar2 == 0) {
        iVar1 = 0;
        if (local_48 != 0) {
          iVar1 = *(int *)(local_48 + -4);
        }
        for (; (*(short *)(local_48 + -2 + (longlong)iVar1 * 2) != 0x5f && (0 < iVar1));
            iVar1 = iVar1 + -1) {
        }
        FUN_00416dc0(&local_50,local_48,iVar1 + 1,0xff);
        FUN_00414ad0(param_4,local_50);
        FUN_00414ad0(param_2,local_40);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_50,5);
  FUN_00414480(local_res18);
  return param_2;
}

