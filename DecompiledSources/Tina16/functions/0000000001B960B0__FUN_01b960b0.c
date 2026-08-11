/* Ghidra address: 01b960b0 */
/* Ghidra symbol: FUN_01b960b0 */


void FUN_01b960b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  short *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  short *local_20;
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = (short *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = (short *)0x0;
  local_28 = 0;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x18) != 0)) {
    *(undefined1 *)(param_1 + 0x8a9) = 1;
    FUN_00414b50(&local_20,**(undefined8 **)(param_2 + 0x18));
    FUN_00416dc0(&local_30,local_20,1,2);
    iVar2 = FUN_00416db0(local_30,&DAT_01b969f8);
    if (iVar2 == 0) {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x768),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x840),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x728),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x718),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x720),1);
      FUN_01b950d0(&local_38,local_20);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_38);
      iVar2 = FUN_004170c0(&DAT_01b96a0c,local_20,1);
      iVar3 = FUN_004170c0(&DAT_01b96a1c,local_20,1);
      iVar4 = FUN_004170c0(&DAT_01b96a0c,local_20,1);
      FUN_00416dc0(&local_40,local_20,iVar2 + 1,(iVar3 - iVar4) + -1);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_40);
    }
    else {
      FUN_00416dc0(&local_48,local_20,1,2);
      iVar2 = FUN_00416db0(local_48,&DAT_01b96a2c);
      if (iVar2 == 0) {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x768),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x840),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x728),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x718),1);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x720),1);
        iVar2 = FUN_004170c0(&LAB_01b96a40,local_20,1);
        FUN_00416dc0(&local_50,local_20,3,iVar2 + -3);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_50);
        iVar2 = FUN_004170c0(&DAT_01b96a0c,local_20,1);
        iVar3 = FUN_004170c0(&DAT_01b96a1c,local_20,1);
        iVar4 = FUN_004170c0(&DAT_01b96a0c,local_20,1);
        FUN_00416dc0(&local_58,local_20,iVar2 + 1,(iVar3 - iVar4) + -1);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_58);
        FUN_01b1cbc0(&local_60,local_20,2);
        FUN_01b988d0(param_1,local_60);
      }
      else if (*local_20 == 0x25) {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x768),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x840),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x728),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x718),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x720),0);
      }
      else {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x768),1);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x840),1);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x718),1);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x720),1);
        FUN_01b1cbc0(&local_68,local_20,1);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_68);
        FUN_01b1cbc0(&local_70,local_20,6);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_70);
        FUN_01b1cbc0(&local_78,local_20,5);
        FUN_01b988d0(param_1,local_78);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x740),0);
        (**(code **)(**(longlong **)(param_1 + 0x780) + 0x268))(*(longlong **)(param_1 + 0x780),0);
        FUN_01b1cbc0(&local_28,local_20,2);
        iVar2 = FUN_0043fc50(local_28,0);
        if (iVar2 == -0x39) {
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x840),0);
          FUN_006d78a0(*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x760));
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x728),1);
          FUN_01b1cbc0(&local_80,local_20,4);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x788) + 0x4f0);
          iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_80);
          if (iVar2 == -1) {
            (**(code **)(**(longlong **)(param_1 + 0x788) + 0x268))
                      (*(longlong **)(param_1 + 0x788),0);
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 0x788) + 0x268))
                      (*(longlong **)(param_1 + 0x788),iVar2);
          }
        }
        else if (iVar2 == 0x39) {
          FUN_01b1cbc0(&local_88,local_20,4);
          if (*local_88 == 0x23) {
            FUN_006d78a0(*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x750));
            FUN_0064dbe0(*(undefined8 *)(param_1 + 0x728),1);
            FUN_01b1cbc0(&local_28,local_20,4);
            FUN_00414b50(&local_20,local_28);
            FUN_00416e20(&local_20,1,1);
            FUN_00648720(&local_98,local_20);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x780) + 0x4f0);
            iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_98);
            if (iVar2 == -1) {
              (**(code **)(**(longlong **)(param_1 + 0x780) + 0x268))
                        (*(longlong **)(param_1 + 0x780),0);
            }
            else {
              (**(code **)(**(longlong **)(param_1 + 0x780) + 0x268))
                        (*(longlong **)(param_1 + 0x780),iVar2);
            }
          }
          else {
            FUN_006d78a0(*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730));
            FUN_0064dbe0(*(undefined8 *)(param_1 + 0x728),1);
            FUN_01b1cbc0(&local_28,local_20,4);
            FUN_00b928f0(&local_90,local_28,0);
            FUN_0064de00(*(undefined8 *)(param_1 + 0x740),local_90);
          }
        }
        else {
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x840),1 < iVar2);
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x728),0);
        }
        FUN_006ecd90(*(undefined8 *)(param_1 + 0x840),0);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x890) + 0x28))();
        iVar3 = 0;
        if (-1 < iVar2 + -1) {
          do {
            FUN_004b5390(*(undefined8 *)(param_1 + 0x890),&local_a0,iVar3);
            iVar4 = FUN_00416db0(local_a0,local_28);
            if (iVar4 == 0) {
              FUN_004b3cf0(*(undefined8 *)(param_1 + 0x890),&local_a8,iVar3);
              uVar5 = FUN_007dca30(local_a8);
              FUN_006ecd90(*(undefined8 *)(param_1 + 0x840),uVar5);
            }
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x850),
               *(undefined1 *)(*(longlong *)(param_1 + 0x768) + 0xa9));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x848),
               *(undefined1 *)(*(longlong *)(param_1 + 0x840) + 0xa9));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x708),
               *(undefined1 *)(*(longlong *)(param_1 + 0x718) + 0xa9));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x710),
               *(undefined1 *)(*(longlong *)(param_1 + 0x720) + 0xa9));
  *(undefined1 *)(param_1 + 0x8a9) = 0;
  FUN_00414560(&local_a8,0x12);
  return;
}

