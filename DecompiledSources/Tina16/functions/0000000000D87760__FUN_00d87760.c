/* Ghidra address: 00d87760 */
/* Ghidra symbol: FUN_00d87760 */


void FUN_00d87760(longlong param_1,char param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_68 [28];
  undefined1 local_4c [16];
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  local_2c = *(undefined4 *)(param_4 + 2);
  plVar2 = (longlong *)0x0;
  uVar3 = 0;
  uVar4 = uVar3;
  if (param_2 == '\0') {
    iVar1 = FUN_00416db0(param_5,L"default");
    if (iVar1 != 0) {
      plVar2 = (longlong *)FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
    }
    if (plVar2 == (longlong *)0x0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x30);
    }
    if ((byte)local_2c < 8) {
      if ((byte)local_2c == 7) {
        plVar2 = (longlong *)FUN_00d77610(plVar2,L"Unchecked");
        uVar4 = 6;
      }
      else if ((byte)local_2c < 4) {
        if ((byte)local_2c == 3) {
          plVar2 = (longlong *)FUN_00d77610(plVar2,L"Checked");
          uVar4 = 8;
        }
        else if ((byte)local_2c == 0) {
          plVar2 = (longlong *)FUN_00d77610(plVar2,L"Checked");
          uVar4 = 0;
        }
        else if ((byte)local_2c == 1) {
          plVar2 = (longlong *)FUN_00d77610(plVar2,L"Checked");
          uVar4 = 5;
        }
        else if ((byte)local_2c == 2) {
          plVar2 = (longlong *)FUN_00d77610(plVar2,L"Checked");
          uVar4 = 6;
        }
      }
      else if ((byte)local_2c == 5) {
        plVar2 = (longlong *)FUN_00d77610(plVar2,L"Unchecked");
        uVar4 = 0;
      }
      else if ((byte)local_2c == 6) {
        plVar2 = (longlong *)FUN_00d77610(plVar2,L"Unchecked");
        uVar4 = 5;
      }
    }
    else if ((byte)local_2c < 0xc) {
      if ((byte)local_2c == 0xb) {
        plVar2 = (longlong *)FUN_00d77610(plVar2,L"Mixed");
        uVar4 = 5;
      }
      else if ((byte)local_2c == 8) {
        plVar2 = (longlong *)FUN_00d77610(plVar2,L"Unchecked");
        uVar4 = 8;
      }
      else if ((byte)local_2c == 10) {
        plVar2 = (longlong *)FUN_00d77610(plVar2,L"Mixed");
        uVar4 = 0;
      }
    }
    else if ((byte)local_2c == 0xc) {
      plVar2 = (longlong *)FUN_00d77610(plVar2,L"Mixed");
      uVar4 = 6;
    }
    else if ((byte)local_2c == 0xd) {
      plVar2 = (longlong *)FUN_00d77610(plVar2,L"Mixed");
      uVar4 = 8;
    }
  }
  else {
    uVar4 = 0;
    if (param_2 == '\x01') {
      iVar1 = FUN_00416db0(param_5,L"default");
      if (iVar1 != 0) {
        plVar2 = (longlong *)FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
      }
      if (plVar2 == (longlong *)0x0) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x38);
      }
      if ((byte)local_2c < 6) {
        if ((byte)local_2c == 5) {
          plVar2 = (longlong *)FUN_00d77610(plVar2,L"Unchecked");
          uVar4 = 0;
        }
        else if ((byte)local_2c == 0) {
          plVar2 = (longlong *)FUN_00d77610(plVar2,L"Checked");
          uVar4 = 0;
        }
        else if ((byte)local_2c == 1) {
          plVar2 = (longlong *)FUN_00d77610(plVar2,L"Checked");
          uVar4 = 5;
        }
        else if ((byte)local_2c == 2) {
          plVar2 = (longlong *)FUN_00d77610(plVar2,L"Checked");
          uVar4 = 6;
        }
        else if ((byte)local_2c == 3) {
          plVar2 = (longlong *)FUN_00d77610(plVar2,L"Checked");
          uVar4 = 8;
        }
      }
      else if ((byte)local_2c == 6) {
        plVar2 = (longlong *)FUN_00d77610(plVar2,L"Unchecked");
        uVar4 = 5;
      }
      else if ((byte)local_2c == 7) {
        plVar2 = (longlong *)FUN_00d77610(plVar2,L"Unchecked");
        uVar4 = 6;
      }
      else {
        uVar4 = uVar3;
        if ((byte)local_2c == 8) {
          plVar2 = (longlong *)FUN_00d77610(plVar2,L"Unchecked");
          uVar4 = 8;
        }
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d77cb0(plVar2,local_4c);
    FUN_00d57690(local_68,local_4c,&local_3c);
    (**(code **)(*plVar2 + 0x98))(plVar2,uVar4);
    FUN_00d77b90(plVar2,local_4c);
    (**(code **)(*plVar2 + 0xa8))(plVar2,param_3,&DAT_01ecf394);
  }
  return;
}

