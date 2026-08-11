/* Ghidra address: 00cec710 */
/* Ghidra symbol: FUN_00cec710 */


undefined8 FUN_00cec710(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  FUN_00414480(&local_30);
  bVar3 = false;
  iVar7 = 0;
  if (param_4 != 0) {
    iVar7 = (int)*(undefined8 *)(param_4 + -8);
  }
  iVar5 = 0;
  if (0 < iVar7) {
    do {
      bVar1 = *(byte *)(param_4 + iVar5);
      if (bVar1 == 0x1b) {
        iVar6 = iVar5 + 1;
        if (iVar5 + 2 < iVar7) {
          if ((*(char *)(param_4 + iVar6) == '$') && (*(char *)(param_4 + (iVar5 + 2)) == 'B')) {
            bVar3 = true;
          }
          else if ((*(char *)(param_4 + iVar6) == '(') && (*(char *)(param_4 + (iVar5 + 2)) == 'B'))
          {
            bVar3 = false;
          }
          iVar6 = iVar5 + 3;
        }
      }
      else if (bVar3) {
        if (iVar5 + 1 < iVar7) {
          bVar2 = *(byte *)(param_4 + (iVar5 + 1));
          cVar4 = (char)(bVar1 - 1 >> 1);
          if (bVar1 < 0x5f) {
            cVar4 = cVar4 + 'q';
          }
          else {
            cVar4 = cVar4 + -0x4f;
          }
          if ((uint)bVar1 % 2 == 1) {
            if (bVar2 < 0x60) {
              cVar8 = bVar2 + 0x1f;
            }
            else {
              cVar8 = bVar2 + 0x20;
            }
          }
          else {
            cVar8 = bVar2 + 0x7e;
          }
          FUN_00416780(local_40,cVar4);
          FUN_00416780(&local_48,cVar8);
          FUN_00416cd0(&local_30,3,local_30,local_40[0],local_48);
          iVar6 = iVar5 + 2;
        }
        else {
          iVar6 = iVar5 + 1;
        }
      }
      else {
        FUN_00416780(&local_50,bVar1);
        FUN_00416ad0(&local_30,local_50);
        iVar6 = iVar5 + 1;
      }
      iVar5 = iVar6;
    } while (iVar5 < iVar7);
  }
  FUN_00414ad0(param_2,local_30);
  FUN_00414560(&local_50,3);
  FUN_00414480(&local_30);
  return param_2;
}

