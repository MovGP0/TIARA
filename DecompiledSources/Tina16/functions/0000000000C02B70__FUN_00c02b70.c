/* Ghidra address: 00c02b70 */
/* Ghidra symbol: FUN_00c02b70 */


void FUN_00c02b70(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5,undefined1 *param_6)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  FUN_0064eb60(param_1,param_2,param_3,param_4,param_5,param_6);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00bea338);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
    if (cVar1 == '\0') {
      *param_6 = 1;
      sVar2 = thunk_FUN_040bd713(0x11);
      if (sVar2 < 0) {
        *(undefined2 *)((longlong)param_1 + 0xe2) = 0xfff0;
      }
      else {
        *(undefined2 *)((longlong)param_1 + 0xe2) = 0xfff4;
      }
      cVar1 = FUN_0064eb50(param_1);
      if (cVar1 == '\0') {
        FUN_00bf1a50(param_1,param_3,param_4);
      }
      else if (param_5 == '\x01') {
        FUN_00bf1a50(param_1,(int)param_1[0xb6],*(undefined4 *)((longlong)param_1 + 0x5b4));
      }
      else {
        local_30 = FUN_00bf1910(param_1,param_3,param_4);
        uVar3 = FUN_00bcbe50(local_30 & 0xffffffff,*(int *)((longlong)param_1 + 0x50c),
                             *(int *)((longlong)param_1 + 0x50c) + (int)param_1[0x9a] + -1);
        local_30 = CONCAT44(local_30._4_4_,uVar3);
        uVar3 = FUN_00bcbe50(local_30._4_4_,*(int *)((longlong)param_1 + 0x534),
                             *(int *)((longlong)param_1 + 0x534) + (int)param_1[0xa1] + -1);
        local_30 = CONCAT44(uVar3,(undefined4)local_30);
        local_40[0] = FUN_00c0ee50(param_1,&local_30);
        (**(code **)(*param_1 + 0x2a8))(param_1,local_40);
        FUN_00bf1aa0(param_1,param_3,param_4);
      }
    }
  }
  return;
}

