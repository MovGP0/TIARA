/* Ghidra address: 004465c0 */
/* Ghidra symbol: FUN_004465c0 */


undefined8 FUN_004465c0(longlong param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_20;
  
  local_20 = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x7fff;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  iVar6 = param_3;
  do {
    while( true ) {
      while( true ) {
        iVar5 = iVar6;
        if ((*(int *)(param_1 + 0xa0) <= iVar5) ||
           (sVar2 = FUN_004463c0(param_1,*(undefined8 *)(param_1 + 0xd8),iVar5), sVar2 == 0x3b)) {
          if (*(int *)(param_1 + 0x9c) == -1) {
            *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x90);
          }
          *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x8c);
          if (0 < *(int *)(param_1 + 0x8c)) {
            *(undefined4 *)(param_1 + 0x8c) = 0;
          }
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x94);
          if (*(int *)(param_1 + 0x94) < 0) {
            *(undefined4 *)(param_1 + 0x94) = 0;
          }
          FUN_00414480(param_2);
          if (param_3 <= iVar5 + -1) {
            iVar6 = ((iVar5 + -1) - param_3) + 1;
            do {
              uVar3 = FUN_004463c0(param_1,*(undefined8 *)(param_1 + 0xd8),param_3);
              FUN_00416780(&local_20,uVar3);
              FUN_00416ad0(param_2,local_20);
              param_3 = param_3 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          FUN_00414480(&local_20);
          return param_2;
        }
        uVar1 = FUN_004463c0(param_1,*(undefined8 *)(param_1 + 0xd8),iVar5);
        if (uVar1 < 0x2f) break;
        if (uVar1 == 0x30) {
          if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x94)) {
            *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x90);
          }
          *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
          *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
          iVar6 = iVar5 + 1;
        }
        else {
          if ((uVar1 != 0x45) && (uVar1 != 0x65)) goto LAB_00446843;
          iVar6 = iVar5 + 1;
          if ((iVar6 < *(int *)(param_1 + 0xa0)) &&
             ((sVar2 = FUN_004463c0(param_1,*(undefined8 *)(param_1 + 0xd8),iVar6), sVar2 == 0x2d ||
              (sVar2 == 0x2b)))) {
            *(undefined1 *)(param_1 + 0x9b) = 1;
            iVar6 = iVar5 + 2;
            while ((iVar6 < *(int *)(param_1 + 0xa0) &&
                   (sVar2 = FUN_004463c0(param_1,*(undefined8 *)(param_1 + 0xd8),iVar6),
                   sVar2 == 0x30))) {
              iVar6 = iVar6 + 1;
            }
          }
        }
      }
      if (uVar1 != 0x2e) break;
      if (*(int *)(param_1 + 0x9c) == -1) {
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x90);
      }
      iVar6 = iVar5 + 1;
    }
    if (uVar1 == 0x22) {
      do {
        iVar4 = iVar5;
        iVar5 = iVar4 + 1;
        if (*(int *)(param_1 + 0xa0) <= iVar5) break;
        sVar2 = FUN_004463c0(param_1,*(undefined8 *)(param_1 + 0xd8),iVar5);
      } while (sVar2 != 0x22);
      iVar6 = iVar5;
      if (iVar5 < *(int *)(param_1 + 0xa0)) {
        iVar6 = iVar4 + 2;
      }
    }
    else if (uVar1 == 0x23) {
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
      iVar6 = iVar5 + 1;
    }
    else if (uVar1 == 0x27) {
      do {
        iVar4 = iVar5;
        iVar5 = iVar4 + 1;
        if (*(int *)(param_1 + 0xa0) <= iVar5) break;
        sVar2 = FUN_004463c0(param_1,*(undefined8 *)(param_1 + 0xd8),iVar5);
      } while (sVar2 != 0x27);
      iVar6 = iVar5;
      if (iVar5 < *(int *)(param_1 + 0xa0)) {
        iVar6 = iVar4 + 2;
      }
    }
    else if (uVar1 == 0x2c) {
      *(undefined1 *)(param_1 + 0x9a) = 1;
      iVar6 = iVar5 + 1;
    }
    else {
LAB_00446843:
      iVar6 = iVar5 + 1;
    }
  } while( true );
}

