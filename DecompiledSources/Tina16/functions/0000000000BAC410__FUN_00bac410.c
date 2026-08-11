/* Ghidra address: 00bac410 */
/* Ghidra symbol: FUN_00bac410 */


undefined1 FUN_00bac410(longlong *param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  *param_2 = 0;
  local_69 = 0;
  (**(code **)(*param_1 + 0x100))(param_1,&local_40);
  iVar2 = FUN_0043e420(local_40,&DAT_00bac5f8);
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0xf8))(param_1,&local_48);
    iVar2 = FUN_004170c0(L"encoding=",local_48,1);
    if (9 < iVar2 + 9) {
      (**(code **)(*param_1 + 0xf8))(param_1,&local_50);
      sVar1 = *(short *)(local_50 + -2 + (longlong)(iVar2 + 9) * 2);
      if ((sVar1 == 0x27) || (sVar1 == 0x22)) {
        iVar2 = iVar2 + 10;
        (**(code **)(*param_1 + 0xf8))(param_1,&local_58);
        FUN_00416dc0(local_30,local_58,iVar2,0x7fffffff);
        FUN_00416780(&local_60,sVar1);
        iVar3 = FUN_004170c0(local_60,local_30[0],1);
        if (0 < iVar3 + iVar2) {
          (**(code **)(*param_1 + 0xf8))(param_1,&local_68);
          FUN_00416dc0(&local_38,local_68,iVar2,((iVar3 + iVar2) - iVar2) + -1);
          local_69 = FUN_00b97b80(&PTR_FUN_0043a338,local_38,param_2);
        }
      }
    }
  }
  FUN_00414560(&local_68,8);
  return local_69;
}

