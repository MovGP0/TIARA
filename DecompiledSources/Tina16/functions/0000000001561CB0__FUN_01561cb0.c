/* Ghidra address: 01561cb0 */
/* Ghidra symbol: FUN_01561cb0 */


void FUN_01561cb0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30 = 0;
  if (*(char *)(param_1 + 0x94e) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x750);
    iVar8 = 0;
    while (iVar8 < *(int *)(lVar1 + 0x10)) {
      lVar7 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x750),iVar8);
      FUN_015714d0(lVar7,2);
      lVar2 = *(longlong *)(lVar7 + 0x40);
      if (lVar2 == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar4 = FUN_01d03160(lVar2);
        uVar5 = (uint)uVar4;
      }
      if (uVar5 != 0xffffffff) {
        iVar6 = FUN_015f2650(lVar2);
        if (-1 < iVar6) {
          FUN_015718e0(lVar7,iVar6);
          if (*(int *)(lVar7 + 0x34) == -1) {
            FUN_00414480(&local_30);
          }
          else {
            FUN_01d43440(local_40,*(int *)(lVar7 + 0x34) + -1);
            FUN_00416cd0(&local_30,3,&DAT_01561ea8,local_40[0],&DAT_01561ea8);
          }
          FUN_01550c40(param_1,&local_50,lVar7);
          FUN_00416cd0(&local_48,5,&DAT_01561eb8,local_50,L" <= ",local_30,&LAB_01561ee0);
          (**(code **)(**(longlong **)(param_1 + 0x50) + 0x78))
                    (*(longlong **)(param_1 + 0x50),local_48);
        }
      }
      if (*(int *)(lVar7 + 0x54) == 2) {
        cVar3 = FUN_01571cf0(*(undefined8 *)(param_1 + 0x988),*(undefined4 *)(lVar7 + 0x30));
        if (cVar3 == '\0') {
          *(undefined1 *)(lVar7 + 0x98) = 1;
          iVar8 = iVar8 + 1;
        }
        else {
          iVar8 = iVar8 + 1;
        }
      }
      else {
        iVar8 = iVar8 + 1;
      }
    }
  }
  FUN_00414560(&local_50,3);
  FUN_00414480(&local_30);
  return;
}

