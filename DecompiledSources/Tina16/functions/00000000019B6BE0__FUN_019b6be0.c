/* Ghidra address: 019b6be0 */
/* Ghidra symbol: FUN_019b6be0 */


void FUN_019b6be0(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_30;
  short *local_28;
  longlong local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = (short *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414480(local_20);
  FUN_00414b50(&local_28,*param_1);
  iVar2 = FUN_004170c0(local_res10,local_28,1);
  do {
    if (iVar2 < 1) {
      FUN_00416ba0(param_1,local_20[0],local_28);
      FUN_00414560(&local_30,3);
      FUN_00414560(&local_res10,2);
      return;
    }
    FUN_00416dc0(&local_30,local_28,1,iVar2 + -1);
    FUN_00416ad0(local_20,local_30);
    iVar3 = 0;
    if (local_res10 != 0) {
      iVar3 = *(int *)(local_res10 + -4);
    }
    iVar4 = 0;
    if (local_28 != (short *)0x0) {
      iVar4 = *(int *)(local_28 + -2);
    }
    iVar5 = 0;
    if (local_res10 != 0) {
      iVar5 = *(int *)(local_res10 + -4);
    }
    FUN_00416dc0(&local_28,local_28,iVar2 + iVar3,(iVar4 - (iVar2 + iVar5)) + 1);
    if (param_4 == '\0') {
      FUN_00416ad0(local_20,local_res18);
    }
    else {
      iVar2 = 0;
      if (local_20[0] != 0) {
        iVar2 = *(int *)(local_20[0] + -4);
      }
      if (iVar2 < 1) {
        bVar6 = false;
      }
      else {
        iVar2 = 0;
        if (local_20[0] != 0) {
          iVar2 = *(int *)(local_20[0] + -4);
        }
        uVar1 = *(short *)(local_20[0] + -2 + (longlong)iVar2 * 2) - 0x30;
        if (uVar1 < 0x50) {
          bVar6 = ((byte)(&DAT_019b6e40)[(longlong)(short)(uVar1 & 0x7f) >> 3] >> (uVar1 & 7) & 1)
                  != 0;
        }
        else {
          bVar6 = false;
        }
      }
      if (bVar6) {
        bVar6 = true;
      }
      else {
        iVar2 = 0;
        if (local_28 != (short *)0x0) {
          iVar2 = *(int *)(local_28 + -2);
        }
        if (0 < iVar2) {
          uVar1 = *local_28 - 0x30;
          if (uVar1 < 0x50) {
            bVar6 = ((byte)(&DAT_019b6e40)[(longlong)(short)(uVar1 & 0x7f) >> 3] >> (uVar1 & 7) & 1)
                    != 0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            bVar6 = true;
            goto LAB_019b6d85;
          }
        }
        bVar6 = false;
      }
LAB_019b6d85:
      if (bVar6) {
        FUN_00416ad0(local_20,local_res10);
      }
      else {
        FUN_00416ad0(local_20,local_res18);
      }
    }
    iVar2 = FUN_004170c0(local_res10,local_28,1);
  } while( true );
}

