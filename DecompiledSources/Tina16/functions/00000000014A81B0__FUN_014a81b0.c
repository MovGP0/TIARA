/* Ghidra address: 014a81b0 */
/* Ghidra symbol: FUN_014a81b0 */


void FUN_014a81b0(longlong *param_1,undefined4 param_2,ushort param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((*(char *)(*param_1 + 0x79) == '\0') && (0x101 < param_3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(*param_1 + 0x79) = uVar2;
  puVar4 = (undefined8 *)FUN_01cf0560(0,&PTR_FUN_0149cf30,param_1,param_2,param_3,param_4);
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = *(longlong **)(*(longlong *)(puVar4[5] + 0x90) + 0xa0);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (iVar3 < 1) {
      uVar5 = (**(code **)*puVar4)(puVar4);
      FUN_004095f0(uVar5);
    }
    else {
      plVar1 = *(longlong **)(*param_1 + 0x48);
      if (plVar1 == (longlong *)0x0) {
        (**(code **)(*DAT_0210eae0 + 0x20))(DAT_0210eae0,puVar4);
      }
      else {
        (**(code **)(*plVar1 + 0x20))(plVar1,puVar4);
      }
    }
  }
  return;
}

