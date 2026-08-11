/* Ghidra address: 01848a20 */
/* Ghidra symbol: FUN_01848a20 */


undefined8 FUN_01848a20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  FUN_0046f180(param_2);
  puVar3 = (undefined8 *)FUN_004634b0(param_1 + 0x90);
  if ((*(char *)(param_1 + 0xb8) == '\0') || (puVar3 == (undefined8 *)0x0)) {
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        (**(code **)(param_1 + 0xe0))
                  (*(undefined8 *)(param_1 + 0xe8),param_2,puVar3,*(undefined8 *)(param_1 + 0xb0),
                   *(undefined8 *)(param_1 + 0x58),param_1);
      }
    }
    else {
      (**(code **)(param_1 + 0xc0))
                (*(undefined8 *)(param_1 + 200),param_2,puVar3,*(undefined8 *)(param_1 + 0xb0),
                 *(undefined8 *)(param_1 + 0x58));
    }
    goto LAB_01848cc3;
  }
  uVar4 = FUN_004115a0(*puVar3);
  puVar5 = (undefined8 *)FUN_00589ef0(uVar4,*(undefined8 *)(param_1 + 0x20));
  if (puVar5 == (undefined8 *)0x0) goto LAB_01848cc3;
  uVar6 = (ulonglong)**(byte **)*puVar5;
  if (9 < uVar6) {
    if (uVar6 < 0xd) {
      if (uVar6 == 0xc) {
        FUN_0058d710(param_2,puVar3,puVar5);
        goto LAB_01848cc3;
      }
      if (uVar6 == 10) goto LAB_01848bfa;
      if (uVar6 != 0xb) goto LAB_01848cc3;
    }
    else {
      if (uVar6 == 0x10) {
        uVar4 = FUN_0058f3f0(puVar3,puVar5);
        FUN_00468700(param_2,uVar4);
        goto LAB_01848cc3;
      }
      if (uVar6 != 0x12) goto LAB_01848cc3;
    }
    FUN_0058d330(&local_40,puVar3,puVar5);
    FUN_00468a10(param_2,local_40);
    goto LAB_01848cc3;
  }
  if (uVar6 == 9) {
LAB_01848bbe:
    uVar2 = FUN_0058ada0(puVar3,puVar5);
    FUN_00416780(local_30,uVar2);
    FUN_00468a10(param_2,local_30[0]);
  }
  else {
    if (uVar6 < 5) {
      if (uVar6 == 4) {
        uVar4 = FUN_0058d490(puVar3,puVar5);
        FUN_00468860(param_2,uVar4);
        goto LAB_01848cc3;
      }
      if (uVar6 != 1) {
        if (uVar6 == 2) goto LAB_01848bbe;
        if (uVar6 != 3) goto LAB_01848cc3;
      }
    }
    else {
      if (uVar6 == 5) {
LAB_01848bfa:
        FUN_0058d0b0(&local_38,puVar3,puVar5);
        FUN_00468910(param_2,local_38);
        goto LAB_01848cc3;
      }
      if (1 < uVar6 - 6) goto LAB_01848cc3;
    }
    uVar4 = FUN_0058ada0(puVar3,puVar5);
    FUN_00468700(param_2,uVar4);
  }
LAB_01848cc3:
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_00468530(&local_58,0,1);
    cVar1 = FUN_0046f320(param_2,&local_58);
    if (cVar1 == '\0') {
      FUN_00468820(param_2,1);
    }
    else {
      FUN_00468820(param_2,0);
    }
  }
  FUN_00460ba0(&local_58);
  FUN_00414480(&local_40);
  FUN_004144d0(&local_38);
  FUN_00414480(local_30);
  return param_2;
}

