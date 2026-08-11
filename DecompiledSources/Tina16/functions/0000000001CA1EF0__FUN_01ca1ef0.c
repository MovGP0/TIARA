/* Ghidra address: 01ca1ef0 */
/* Ghidra symbol: FUN_01ca1ef0 */


void FUN_01ca1ef0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_007d94d0);
  if (cVar1 != '\0') {
    iVar2 = FUN_004170c0(L"mnEBooks",*(undefined8 *)(param_2 + 0x10),1);
    if (iVar2 == 1) {
      uVar3 = FUN_007e2fe0(param_2);
      (**(code **)(**(longlong **)(param_1 + 0x17d0) + 0x18))
                (*(longlong **)(param_1 + 0x17d0),local_30,uVar3);
      (**(code **)(**(longlong **)(param_1 + 0x17d8) + 0x10))
                (*(longlong **)(param_1 + 0x17d8),local_20,local_30[0],L"Path",0);
      FUN_00da90f0(local_20[0]);
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

