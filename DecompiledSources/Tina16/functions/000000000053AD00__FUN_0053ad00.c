/* Ghidra address: 0053ad00 */
/* Ghidra symbol: FUN_0053ad00 */


undefined8 FUN_0053ad00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  
  FUN_00417580(param_3,&DAT_00527bf8);
  uVar6 = *param_1;
  plVar3 = (longlong *)FUN_00589390(uVar6);
  lVar4 = FUN_00589390(uVar6);
  if (*(longlong *)(lVar4 + 8) < *plVar3) {
    uVar2 = param_1[2];
    pbVar5 = (byte *)FUN_00589390(param_2);
    bVar1 = *pbVar5;
    if (bVar1 < 4) {
      if (bVar1 == 3) {
        uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
        FUN_00538170(uVar2 & 0xffff,param_2,uVar6);
      }
      else if (bVar1 == 0) {
        uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
        FUN_00538170((longlong)(char)uVar2,param_2,uVar6);
      }
      else if (bVar1 == 1) {
        uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
        FUN_00538170(uVar2 & 0xff,param_2,uVar6);
      }
      else if (bVar1 == 2) {
        uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
        FUN_00538170((longlong)(short)uVar2,param_2,uVar6);
      }
    }
    else if (bVar1 == 4) {
      uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538170((longlong)(int)uVar2,param_2,uVar6);
    }
    else if (bVar1 == 5) {
      uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538170(uVar2 & 0xffffffff,param_2,uVar6);
    }
  }
  else {
    uVar2 = param_1[2];
    pbVar5 = (byte *)FUN_00589390(param_2);
    bVar1 = *pbVar5;
    if (bVar1 < 4) {
      if (bVar1 == 3) {
        uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
        FUN_00538170(uVar2 & 0xffff,param_2,uVar6);
      }
      else if (bVar1 == 0) {
        uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
        FUN_00538170((longlong)(char)uVar2,param_2,uVar6);
      }
      else if (bVar1 == 1) {
        uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
        FUN_00538170(uVar2 & 0xff,param_2,uVar6);
      }
      else if (bVar1 == 2) {
        uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
        FUN_00538170((longlong)(short)uVar2,param_2,uVar6);
      }
    }
    else if (bVar1 == 4) {
      uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538170((longlong)(int)uVar2,param_2,uVar6);
    }
    else if (bVar1 == 5) {
      uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538170(uVar2 & 0xffffffff,param_2,uVar6);
    }
  }
  return 1;
}

