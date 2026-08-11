/* Ghidra address: 01c1aa00 */
/* Ghidra symbol: FUN_01c1aa00 */


void FUN_01c1aa00(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  
  *(undefined8 *)(param_1 + 0x3c0) = *param_2;
  *(undefined8 *)(param_1 + 0x3c8) = param_2[1];
  uVar1 = FUN_00781840();
  cVar3 = FUN_00779360(uVar1);
  if (cVar3 != '\0') {
    uVar1 = FUN_00781840();
    uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    plVar4 = (longlong *)FUN_00781840();
    (**(code **)(*plVar4 + 0x158))(plVar4,local_38,0x12);
    FUN_00778dc0(uVar1,uVar2,local_38,param_1 + 0x3c0,0,0);
  }
  uVar1 = FUN_00781840();
  uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
  plVar4 = (longlong *)FUN_00781840();
  (**(code **)(*plVar4 + 0x158))(plVar4,local_38,0x1b);
  FUN_00778dc0(uVar1,uVar2,local_38,param_1 + 0x3b0,0,0);
  return;
}

