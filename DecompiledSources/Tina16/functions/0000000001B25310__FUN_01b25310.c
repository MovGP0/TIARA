/* Ghidra address: 01b25310 */
/* Ghidra symbol: FUN_01b25310 */


void FUN_01b25310(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int local_2c;
  
  cVar2 = *PTR_DAT_02004e38;
  uVar5 = 0;
  if (cVar2 != '\0') {
    uVar5 = *(undefined4 *)PTR_DAT_02003ad0;
    FUN_0064e030(param_1,uVar5);
  }
  plVar1 = *(longlong **)(param_1 + 0x538);
  iVar3 = (**(code **)(*plVar1 + 0x88))();
  local_2c = 0;
  if (-1 < iVar3 + -1) {
    do {
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*plVar1 + 0x90))(plVar1,local_2c);
        FUN_00bc0b80(uVar4,uVar5);
      }
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_01090708);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(plVar1,&PTR_FUN_01094fc0);
    if (cVar2 == '\0') {
      cVar2 = FUN_004113d0(plVar1,&PTR_FUN_01065c50);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(plVar1,&PTR_FUN_014af850);
        if (cVar2 == '\0') {
          cVar2 = FUN_004113d0(plVar1,&PTR_FUN_01117868);
          if (cVar2 == '\0') {
            cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0111ab88);
            if (cVar2 != '\0') {
              FUN_00bc0bd0(plVar1[0x34],0xf0caa6);
              FUN_00bc0bd0(plVar1[0x38],0xc8c8c8);
              FUN_00bc0bd0(plVar1[0x2e],0xff00);
              FUN_00bc0bd0(plVar1[0x30],0xffff00);
              FUN_00bc0bd0(plVar1[0x39],0xffffff);
              FUN_00bc0bd0(plVar1[0x2f],0xff00);
              FUN_00bc0bd0(plVar1[0x36],&DAT_00ff00ff);
              FUN_00bc0bd0(plVar1[0x3b],0xff);
              FUN_00bc0bd0(plVar1[0x31],0xffff00);
              FUN_00bc0bd0(plVar1[0x32],0xffff00);
              FUN_00bc0bd0(plVar1[0x33],0xffff00);
              FUN_00bc0bd0(plVar1[0x37],0xc0c0c0);
              FUN_00bc0bd0(plVar1[0x35],0xffffff);
              FUN_00bc0bd0(plVar1[0x3a],0xffffff);
            }
          }
          else {
            FUN_00bc0bd0(plVar1[0x12d],0xf0caa6);
            FUN_00bc0bd0(plVar1[299],0xc8c8c8);
            FUN_00bc0bd0(plVar1[0x130],0xff00);
            FUN_00bc0bd0(plVar1[0x12e],0xffff00);
            FUN_00bc0bd0(plVar1[300],0xffffff);
          }
        }
        else {
          FUN_00bc0bd0(plVar1[0x85],0xf0caa6);
          FUN_00bc0bd0(plVar1[0x88],&DAT_009393ff);
          FUN_00bc0bd0(plVar1[0x83],0xc8c8c8);
          FUN_00bc0bd0(plVar1[0x8a],0xff00);
          FUN_00bc0bd0(plVar1[0x86],0xffff00);
          FUN_00bc0bd0(plVar1[0x84],0xffffff);
        }
      }
      else {
        FUN_00bc0bd0(plVar1[0x2e0],0xf0caa6);
        FUN_00bc0bd0(plVar1[0x2dc],0xc8c8c8);
        FUN_00bc0bd0(plVar1[0x2e6],0xff00);
        FUN_00bc0bd0(plVar1[0x2e1],0xffff00);
        FUN_00bc0bd0(plVar1[0x2de],0xffffff);
        FUN_00bc0bd0(plVar1[0x2e8],&DAT_00ff00ff);
      }
    }
    else {
      FUN_00bc0bd0(plVar1[0x326],0xf0caa6);
      FUN_00bc0bd0(plVar1[0x324],0xc8c8c8);
      FUN_00bc0bd0(plVar1[0x329],0xff00);
      FUN_00bc0bd0(plVar1[0x327],0xffff00);
      FUN_00bc0bd0(plVar1[0x325],0xffffff);
    }
  }
  else {
    FUN_00bc0bd0(plVar1[0x32d],0xf0caa6);
    FUN_00bc0bd0(plVar1[0x32b],0xc8c8c8);
    FUN_00bc0bd0(plVar1[0x330],0xff00);
    FUN_00bc0bd0(plVar1[0x32e],0xffff00);
    FUN_00bc0bd0(plVar1[0x32c],0xffffff);
  }
  return;
}

