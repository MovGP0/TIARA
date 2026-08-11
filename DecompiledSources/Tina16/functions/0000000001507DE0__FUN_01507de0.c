/* Ghidra address: 01507de0 */
/* Ghidra symbol: FUN_01507de0 */


void FUN_01507de0(longlong param_1,undefined8 param_2,short *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  short *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  undefined8 local_20;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  local_68 = param_3;
  if (*param_3 == 0xd) {
    plVar1 = *(longlong **)(param_1 + 0xbb0);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0xbc0),local_30);
    if (local_30[0] == 0) {
      if (*(longlong *)(param_1 + 0xc18) != 0) {
        iVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xc0))
                          ((longlong *)plVar1[0x9e],*(longlong *)(param_1 + 0xc18));
        if (iVar3 != -1) {
          (**(code **)(*(longlong *)plVar1[0x9e] + 0x98))((longlong *)plVar1[0x9e],iVar3);
          FUN_01107af0(*(undefined8 *)(param_1 + 0xc18));
          FUN_00410f20(*(undefined8 *)(param_1 + 0xc18));
          *(undefined8 *)(param_1 + 0xc18) = 0;
          (**(code **)(*plVar1 + 0x268))(plVar1,0xffffffff);
        }
      }
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0xbc0),&local_38);
      iVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xb0))((longlong *)plVar1[0x9e],local_38);
      if (*(longlong *)(param_1 + 0xc18) == 0) {
        if (iVar3 == -1) {
          uVar5 = FUN_011079b0(&PTR_FUN_01106460,1);
          *(undefined8 *)(param_1 + 0xc18) = uVar5;
          FUN_0064dd90(*(undefined8 *)(param_1 + 0xbc0),&local_50);
          (**(code **)(*(longlong *)plVar1[0x9e] + 0x80))
                    ((longlong *)plVar1[0x9e],local_50,*(undefined8 *)(param_1 + 0xc18));
          lVar2 = *(longlong *)(param_1 + 0xc18);
          FUN_0064dd90(*(undefined8 *)(param_1 + 0xbc0),&local_58);
          FUN_00414ad0(lVar2 + 8,local_58);
          *(undefined1 *)(lVar2 + 0x11) = *(undefined1 *)(*(longlong *)(param_1 + 2000) + 0x328);
          *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(param_1 + 0xc0c);
          *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(param_1 + 0xc10);
          (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x10))
                    (*(longlong **)(lVar2 + 0x50),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x7d8) + 0x4f0));
          FUN_01507c10(auStack_88);
          FUN_004169a0(&local_20,param_1 + 0xc20);
          if (*(int *)(lVar2 + 0x3c) <= *(int *)(lVar2 + 0x40)) {
            iVar3 = (*(int *)(lVar2 + 0x40) - *(int *)(lVar2 + 0x3c)) + 1;
            do {
              FUN_00416780(&local_60,*(undefined2 *)(param_1 + 0xc42));
              uVar4 = FUN_004170c0(&LAB_01508240,local_20,1);
              FUN_00416ea0(local_60,&local_20,uVar4);
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x78))(*(longlong **)(lVar2 + 0x48),local_20)
          ;
          if (*(char *)(param_1 + 0xc44) != '\0') {
            FUN_004169a0(&local_20,param_1 + 0xc44);
            (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x78))
                      (*(longlong **)(lVar2 + 0x48),local_20);
          }
        }
        else {
          FUN_0064de00(*(undefined8 *)(param_1 + 0xbc0),0);
        }
      }
      else if (iVar3 == -1) {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0xbc0),&local_40);
        FUN_00414ad0(*(longlong *)(param_1 + 0xc18) + 8,local_40);
        FUN_01507c10(auStack_88);
        uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
        FUN_0064dd90(*(undefined8 *)(param_1 + 0xbc0),&local_48);
        (**(code **)(*(longlong *)plVar1[0x9e] + 0x40))((longlong *)plVar1[0x9e],uVar4,local_48);
      }
      else {
        FUN_0064de00(*(undefined8 *)(param_1 + 0xbc0),
                     *(undefined8 *)(*(longlong *)(param_1 + 0xc18) + 8));
      }
    }
    *local_68 = 0;
  }
  FUN_00414480(&local_60);
  FUN_00414560(&local_58,6);
  FUN_00414480(&local_20);
  return;
}

