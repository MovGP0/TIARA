/* Ghidra address: 01b71870 */
/* Ghidra symbol: FUN_01b71870 */


void FUN_01b71870(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  int local_58 [2];
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_30,0x5a6);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_30);
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_38,0x5a7);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_38);
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6c8),8);
  iVar4 = 1;
  do {
    puVar3 = (undefined8 *)
             FUN_01430100(&PTR_FUN_0142b460,1,param_1 + 0x6cf + (longlong)iVar4,iVar4 + -1);
    (**(code **)*puVar3)(puVar3,plVar1);
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_48,0x5aa);
    local_50 = 0;
    local_58[0] = iVar4;
    FUN_00442f70(&local_40,local_48,local_58,0);
    FUN_00b0ab70(*(undefined8 *)(param_1 + 0x6c8),local_40,puVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 9);
  FUN_00410f20(plVar1);
  FUN_00414560(&local_48,4);
  return;
}

