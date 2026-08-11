/* Ghidra address: 0097f3d0 */
/* Ghidra symbol: FUN_0097f3d0 */


void FUN_0097f3d0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_88;
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
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_88 = 0;
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
  local_30[0] = 0;
  local_20 = 0;
  while ((char)param_2[0x15] != '\x06') {
    (**(code **)(*param_2 + 0x70))(param_2);
    lVar2 = param_2[3];
    if ((char)lVar2 != '\0') {
      (**(code **)*param_2)(param_2,local_30);
      if (param_2 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = param_2 + 0x14;
      }
      (**(code **)(*param_1 + 0x90))(param_1,(char)lVar2,plVar4,local_30[0],param_2[2]);
    }
    bVar1 = *(byte *)(param_2 + 0x15);
    if (bVar1 < 6) {
      if (bVar1 == 5) {
        (**(code **)*param_2)(param_2,&local_58);
        if (param_2 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = param_2 + 0x14;
        }
        (**(code **)(*param_1 + 0x118))(param_1,plVar4,local_58);
      }
      else if (bVar1 < 3) {
        if (bVar1 == 2) {
          (**(code **)*param_2)(param_2,&local_60);
          if (param_2 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            plVar4 = param_2 + 0x14;
          }
          (**(code **)(*param_1 + 0xd0))(param_1,plVar4,local_60);
        }
        else if (bVar1 == 0) {
          (**(code **)*param_2)(param_2,&local_80);
          if (param_2 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            plVar4 = param_2 + 0x14;
          }
          (**(code **)(*param_1 + 0xc0))(param_1,plVar4,local_80);
        }
        else if (bVar1 == 1) {
          (**(code **)*param_2)(param_2,&local_68);
          if (param_2 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            plVar4 = param_2 + 0x14;
          }
          (**(code **)(*param_1 + 200))(param_1,plVar4,local_68);
        }
      }
      else if (bVar1 == 3) {
        (**(code **)*param_2)(param_2,&local_70);
        if (param_2 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = param_2 + 0x14;
        }
        (**(code **)(*param_1 + 0xd8))(param_1,plVar4,local_70);
      }
      else if (bVar1 == 4) {
        (**(code **)*param_2)(param_2,&local_88);
        if (param_2 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = param_2 + 0x14;
        }
        (**(code **)(*param_1 + 0x128))(param_1,plVar4,local_88);
      }
    }
    else if (bVar1 < 10) {
      if (bVar1 == 9) {
        (**(code **)*param_2)(param_2,&local_38);
        if (param_2 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = param_2 + 0x14;
        }
        (**(code **)(*param_1 + 0xe0))(param_1,plVar4,local_38);
      }
      else if (bVar1 == 7) {
        (**(code **)*param_2)(param_2,&local_48);
        if (param_2 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = param_2 + 0x14;
        }
        (**(code **)(*param_1 + 0x110))(param_1,plVar4,local_48);
      }
      else if (bVar1 == 8) {
        (**(code **)*param_2)(param_2,&local_50);
        if (param_2 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = param_2 + 0x14;
        }
        (**(code **)(*param_1 + 0x120))(param_1,plVar4,local_50);
      }
    }
    else if (bVar1 == 10) {
      (**(code **)*param_2)(param_2,&local_78);
      if (param_2 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = param_2 + 0x14;
      }
      (**(code **)(*param_1 + 0xe8))(param_1,plVar4,local_78);
    }
    else if (bVar1 == 0xc) {
      (**(code **)*param_2)(param_2,&local_40);
      uVar3 = FUN_00414520(&local_20);
      if (param_2 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = param_2 + 0x14;
      }
      (**(code **)(*param_1 + 0x108))(param_1,plVar4,local_40,uVar3);
    }
  }
  FUN_004145c0(&local_88,0xc);
  FUN_00414520(&local_20);
  return;
}

