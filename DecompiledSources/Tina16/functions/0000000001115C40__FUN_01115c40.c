/* Ghidra address: 01115c40 */
/* Ghidra symbol: FUN_01115c40 */


void FUN_01115c40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined6 uVar4;
  ulonglong uVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  lVar1 = **(longlong **)(param_1 + 0x890);
  (**(code **)(lVar1 + 0x90))(*(longlong **)(param_1 + 0x890));
  if (param_1 == 0) {
    FUN_0041ddd0(&local_30,&PTR_PTR_01115a50);
    (**(code **)(*plRam0000000000000890 + 0x78))(plRam0000000000000890,local_30);
  }
  else {
    FUN_00f08d50(&local_38,1);
    (**(code **)(**(longlong **)(param_1 + 0x890) + 0x78))(*(longlong **)(param_1 + 0x890),local_38)
    ;
    uVar4 = (undefined6)((ulonglong)lVar1 >> 0x10);
    if (*(char *)(param_1 + 0x62b) == '\0') {
      uVar3 = CONCAT62(uVar4,0x69);
    }
    else {
      uVar3 = CONCAT62(uVar4,0x6a);
    }
    FUN_00414b50(local_20,L"  pi, ");
    FUN_00416780(&local_48,uVar3 & 0xffffffff);
    FUN_00416ba0(&local_40,local_20[0],local_48);
    (**(code **)(**(longlong **)(param_1 + 0x890) + 0x78))(*(longlong **)(param_1 + 0x890),local_40)
    ;
    cVar2 = FUN_013b4ab0(*(undefined8 *)(param_1 + 0x4e8),0);
    if (cVar2 != '\0') {
      FUN_00f08d50(&local_50,2);
      (**(code **)(**(longlong **)(param_1 + 0x890) + 0x78))
                (*(longlong **)(param_1 + 0x890),local_50);
      FUN_01115a60(param_1,0);
    }
    cVar2 = FUN_013b4ab0(*(undefined8 *)(param_1 + 0x4e8),3);
    if (cVar2 != '\0') {
      FUN_00f08d50(&local_58,4);
      (**(code **)(**(longlong **)(param_1 + 0x890) + 0x78))
                (*(longlong **)(param_1 + 0x890),local_58);
      FUN_01115a60(param_1,3);
    }
    if (0 < *(int *)(*(longlong *)(param_1 + 0x550) + 0x10)) {
      cVar2 = FUN_013b4ab0(*(longlong *)(param_1 + 0x550),8);
      if (cVar2 != '\0') {
        FUN_00f08d50(&local_60,5);
        (**(code **)(**(longlong **)(param_1 + 0x890) + 0x78))
                  (*(longlong **)(param_1 + 0x890),local_60);
        FUN_01115a60(param_1,8);
      }
      cVar2 = FUN_013b4ab0(*(undefined8 *)(param_1 + 0x550),7);
      if (cVar2 != '\0') {
        FUN_00f08d50(&local_68,6);
        (**(code **)(**(longlong **)(param_1 + 0x890) + 0x78))
                  (*(longlong **)(param_1 + 0x890),local_68);
        FUN_01115a60(param_1,7);
      }
      cVar2 = FUN_013b4ab0(*(undefined8 *)(param_1 + 0x550),9);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x890) + 0x78))
                  (*(longlong **)(param_1 + 0x890),L"Global parameters:");
        FUN_01115a60(param_1,9);
      }
      cVar2 = FUN_013b4ab0(*(undefined8 *)(param_1 + 0x550),0xc);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x890) + 0x78))
                  (*(longlong **)(param_1 + 0x890),L"Macro parameters:");
        FUN_01115a60(param_1,0xc);
      }
      cVar2 = FUN_013b4ab0(*(undefined8 *)(param_1 + 0x550),10);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x890) + 0x78))
                  (*(longlong **)(param_1 + 0x890),L"Circuit config parameters:");
        FUN_01115a60(param_1,10);
      }
    }
    if (*(longlong *)PTR_DAT_020025d8 != 0) {
      FUN_01115940(*(undefined8 *)PTR_DAT_020025d8);
    }
  }
  FUN_00414560(&local_68,10);
  return;
}

