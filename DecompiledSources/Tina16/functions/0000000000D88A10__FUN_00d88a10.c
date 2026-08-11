/* Ghidra address: 00d88a10 */
/* Ghidra symbol: FUN_00d88a10 */


void FUN_00d88a10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_68 [28];
  undefined1 local_4c [16];
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  local_2c = *(undefined4 *)(param_4 + 2);
  lVar2 = 0;
  iVar1 = FUN_00416db0(param_5,L"default");
  if (iVar1 != 0) {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
  }
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x68);
  }
  if (lVar2 != 0) {
    plVar3 = (longlong *)0x0;
    if ((byte)local_2c < 4) {
      if ((byte)local_2c == 3) {
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"ThumbHorzBoth");
        if (plVar3 == (longlong *)0x0) {
          plVar3 = (longlong *)FUN_00d77610(lVar2,L"ThumbHorz");
        }
      }
      else if ((byte)local_2c == 0) {
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"ThumbVertBoth");
        if (plVar3 == (longlong *)0x0) {
          plVar3 = (longlong *)FUN_00d77610(lVar2,L"ThumbVert");
        }
      }
      else if ((byte)local_2c == 1) {
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"ThumbVertRight");
        if (plVar3 == (longlong *)0x0) {
          plVar3 = (longlong *)FUN_00d77610(lVar2,L"ThumbVert");
        }
      }
      else {
        plVar3 = (longlong *)0x0;
        if ((byte)local_2c == 2) {
          plVar3 = (longlong *)FUN_00d77610(lVar2,L"ThumbVertLeft");
          if (plVar3 == (longlong *)0x0) {
            plVar3 = (longlong *)FUN_00d77610(lVar2,L"ThumbVert");
          }
        }
      }
    }
    else if ((byte)local_2c == 4) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"ThumbHorzBottom");
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"ThumbHorz");
      }
    }
    else if ((byte)local_2c == 5) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"ThumbHorzTop");
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"ThumbHorz");
      }
    }
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"Thumb");
    }
    if (plVar3 != (longlong *)0x0) {
      if (local_2c._1_1_ < 3) {
        if (local_2c._1_1_ == 2) {
          (**(code **)(*plVar3 + 0x98))(plVar3,6);
        }
        else if (local_2c._1_1_ == 0) {
          (**(code **)(*plVar3 + 0x98))(plVar3,0);
        }
        else if (local_2c._1_1_ == 1) {
          (**(code **)(*plVar3 + 0x98))(plVar3,5);
        }
      }
      else if (local_2c._1_1_ == 3) {
        (**(code **)(*plVar3 + 0x98))(plVar3,7);
      }
      else if (local_2c._1_1_ == 4) {
        (**(code **)(*plVar3 + 0x98))(plVar3,8);
      }
      FUN_004238d0(local_4c,0,0,*(undefined4 *)((longlong)plVar3 + 0x84),(int)plVar3[0x11]);
      FUN_00d57690(local_68,local_4c,&local_3c);
      FUN_00d77b90(plVar3,local_4c);
      (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
    }
  }
  return;
}

