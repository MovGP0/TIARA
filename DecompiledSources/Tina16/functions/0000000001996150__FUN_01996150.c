/* Ghidra address: 01996150 */
/* Ghidra symbol: FUN_01996150 */


undefined8 FUN_01996150(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  bVar1 = FUN_0198a580(param_2);
  bVar2 = FUN_0198a580(param_3);
  if (bVar1 < bVar2) {
    uVar7 = 0xffffffff;
  }
  else if (bVar1 == bVar2) {
    uVar7 = 0;
    if (bVar1 == 4) {
      sVar4 = (**(code **)(*param_2 + 0xf8))(param_2);
      if (sVar4 == 0x3a) {
        sVar4 = (**(code **)(*param_3 + 0xf8))(param_3);
        if (sVar4 == 0x3a) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0xffffffff;
        }
      }
      else {
        sVar4 = (**(code **)(*param_3 + 0xf8))(param_3);
        if (sVar4 == 0x3a) {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
        }
      }
    }
    if (bVar1 == 5) {
      cVar3 = FUN_017c3740(param_2);
      if (cVar3 == '\0') {
        cVar3 = FUN_017c3740(param_3);
        if (cVar3 == '\0') {
          uVar7 = 0;
        }
        else {
          uVar7 = 0xffffffff;
        }
      }
      else {
        cVar3 = FUN_017c3740(param_3);
        if (cVar3 == '\0') {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
        }
      }
    }
  }
  else {
    uVar7 = 1;
  }
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    iVar5 = (**(code **)(*param_2 + 0x198))(param_2);
    iVar6 = (**(code **)(*param_3 + 0x198))(param_3);
    if (iVar5 != iVar6) {
      if (iVar5 < iVar6) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}

