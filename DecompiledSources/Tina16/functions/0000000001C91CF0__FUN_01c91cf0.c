/* Ghidra address: 01c91cf0 */
/* Ghidra symbol: FUN_01c91cf0 */


void FUN_01c91cf0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_007d94d0);
  if (cVar1 != '\0') {
    iVar2 = FUN_004170c0(L"mnTutorial",*(undefined8 *)(param_2 + 0x10),1);
    if (iVar2 == 1) {
      uVar3 = FUN_007e2fe0(param_2);
      (**(code **)(**(longlong **)(param_1 + 0x17c8) + 0x18))
                (*(longlong **)(param_1 + 0x17c8),&local_38,uVar3);
      FUN_00648780(&local_30,local_38);
      uVar4 = local_30;
      FUN_00416cd0(&local_28,5,L"/SCHV10,10 \"",*(undefined8 *)PTR_DAT_020049a0,L"\\TUTORIAL\\",
                   local_30,&DAT_01c91ed8);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_020049a0,L"\\TUTORIAL\\scplayer.exe");
      uVar4 = FUN_00416740(local_20[0]);
      uVar5 = FUN_00416740(local_28);
      thunk_FUN_0419adcc(0,L"open",uVar4,uVar5,0,CONCAT44(uVar3,1));
    }
  }
  FUN_00414560(&local_38,4);
  return;
}

