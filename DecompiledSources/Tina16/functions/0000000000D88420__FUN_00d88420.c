/* Ghidra address: 00d88420 */
/* Ghidra symbol: FUN_00d88420 */


void FUN_00d88420(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
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
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x50);
  }
  plVar3 = (longlong *)0x0;
  if ((byte)local_2c < 4) {
    if ((byte)local_2c == 3) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"BarHorz");
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)FUN_00d77610(lVar2,&DAT_00d88718);
      }
    }
    else if ((byte)local_2c == 0) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"FrameVert");
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"Frame");
      }
    }
    else if ((byte)local_2c == 1) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"FrameHorz");
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"Frame");
      }
    }
    else {
      plVar3 = (longlong *)0x0;
      if ((byte)local_2c == 2) {
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"BarVert");
        if (plVar3 == (longlong *)0x0) {
          plVar3 = (longlong *)FUN_00d77610(lVar2,&DAT_00d88718);
        }
      }
    }
  }
  else if ((byte)local_2c == 4) {
    plVar3 = (longlong *)FUN_00d77610(lVar2,L"SolidVert");
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"Solid");
    }
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"BarVert");
    }
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,&DAT_00d88718);
    }
  }
  else if ((byte)local_2c == 5) {
    plVar3 = (longlong *)FUN_00d77610(lVar2,L"SolidHorz");
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"Solid");
    }
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"BarHorz");
    }
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,&DAT_00d88718);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d77b90(plVar3,&local_3c);
    (**(code **)(*plVar3 + 0xb0))(plVar3,param_3,&DAT_01ecf394);
  }
  return;
}

