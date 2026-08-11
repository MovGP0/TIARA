/* Ghidra address: 01848d80 */
/* Ghidra symbol: FUN_01848d80 */


void FUN_01848d80(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  if (*(char *)(param_1 + 0x19) != '\0') goto LAB_0184906c;
  puVar2 = (undefined8 *)FUN_004634b0(param_1 + 0x90);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    if (*(longlong *)(param_1 + 0xd0) == 0) {
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        (**(code **)(param_1 + 0xf0))
                  (*(undefined8 *)(param_1 + 0xf8),puVar2,*(undefined8 *)(param_1 + 0xb0),
                   *(undefined8 *)(param_1 + 0x58),param_2,param_1);
      }
    }
    else {
      (**(code **)(param_1 + 0xd0))
                (*(undefined8 *)(param_1 + 0xd8),puVar2,*(undefined8 *)(param_1 + 0xb0),
                 *(undefined8 *)(param_1 + 0x58),param_2);
    }
    goto LAB_0184906c;
  }
  uVar3 = FUN_004115a0(*puVar2);
  puVar4 = (undefined8 *)FUN_00589ef0(uVar3,*(undefined8 *)(param_1 + 0x20));
  if (puVar4 == (undefined8 *)0x0) goto LAB_0184906c;
  uVar5 = (ulonglong)**(byte **)*puVar4;
  if (9 < uVar5) {
    if (uVar5 < 0xd) {
      if (uVar5 == 0xc) {
        FUN_0058d740(puVar2,puVar4,param_2);
        goto LAB_0184906c;
      }
      if (uVar5 == 10) goto LAB_01848f92;
      if (uVar5 != 0xb) goto LAB_0184906c;
    }
    else {
      if (uVar5 == 0x10) {
        uVar3 = FUN_004634b0(param_2);
        FUN_0058f420(puVar2,puVar4,uVar3);
        goto LAB_0184906c;
      }
      if (uVar5 != 0x12) goto LAB_0184906c;
    }
    FUN_00467310(&local_58,param_2);
    FUN_004168b0(&local_60,local_58);
    FUN_0058d350(puVar2,puVar4,local_60);
    goto LAB_0184906c;
  }
  if (uVar5 == 9) {
LAB_01848f59:
    FUN_00467e90(&local_48,param_2);
    FUN_0058af20(puVar2,puVar4,*local_48);
  }
  else {
    if (uVar5 < 5) {
      if (uVar5 == 4) {
        uVar3 = FUN_00464c60(param_2);
        FUN_0058d5d0(puVar2,puVar4,uVar3);
        goto LAB_0184906c;
      }
      if (uVar5 != 1) {
        if (uVar5 == 2) goto LAB_01848f59;
        if (uVar5 != 3) goto LAB_0184906c;
      }
    }
    else {
      if (uVar5 == 5) {
LAB_01848f92:
        FUN_00466730(&local_50,param_2,0);
        FUN_0058d140(puVar2,puVar4,local_50);
        goto LAB_0184906c;
      }
      if (1 < uVar5 - 6) goto LAB_0184906c;
    }
    if (*(char *)(param_1 + 0x48) == '\x01') {
      FUN_00468820(&local_40,1);
      cVar1 = FUN_0046f320(param_2,&local_40);
      if (cVar1 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = FUN_004634b0(param_2);
    }
    FUN_0058af20(puVar2,puVar4,uVar3);
  }
LAB_0184906c:
  FUN_00414480(&local_60);
  FUN_00414520(&local_58);
  FUN_004144d0(&local_50);
  FUN_00414480(&local_48);
  FUN_00460ba0(&local_40);
  return;
}

