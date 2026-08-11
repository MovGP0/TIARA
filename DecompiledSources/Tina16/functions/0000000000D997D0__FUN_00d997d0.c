/* Ghidra address: 00d997d0 */
/* Ghidra symbol: FUN_00d997d0 */


undefined4
FUN_00d997d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined **ppuVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  uVar2 = 0;
  plVar4 = (longlong *)0x0;
  cVar1 = FUN_00da0d10(DAT_0201a188,param_2);
  if (cVar1 == '\0') {
    for (ppuVar5 = (undefined **)*param_2; ppuVar5 != &PTR_FUN_0063d930;
        ppuVar5 = (undefined **)FUN_00410ca0(ppuVar5)) {
      cVar1 = FUN_0078e5d0(*(undefined8 *)PTR_DAT_02001200,ppuVar5);
      if (cVar1 != '\0') {
        uVar3 = FUN_0078d850(*(undefined8 *)PTR_DAT_02001200,ppuVar5);
        plVar4 = (longlong *)FUN_00d996f0(auStack_58,uVar3);
        break;
      }
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00da0920(DAT_0201a188,param_2,plVar4);
    }
  }
  else {
    plVar4 = (longlong *)FUN_00d9ff90(DAT_0201a188,param_2);
  }
  if (plVar4 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,param_3);
  }
  return uVar2;
}

