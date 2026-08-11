/* Ghidra address: 014a3b30 */
/* Ghidra symbol: FUN_014a3b30 */


void FUN_014a3b30(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  short local_42;
  undefined4 local_40;
  undefined1 local_3c [20];
  
  plVar1 = *(longlong **)(*param_1 + 0x48);
  local_42 = *(short *)(plVar1[0x8d] + 0x10);
  FUN_01d31180(*param_1,0xf289,0x12,local_42 * 0x18 + 2);
  local_42 = *(short *)(plVar1[0x8d] + 0x10);
  FUN_01d311c0(*param_1,&local_42,2);
  iVar5 = (int)local_42;
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      puVar2 = (undefined8 *)FUN_004aeac0(plVar1[0x8d],iVar4);
      local_40 = (**(code **)(*plVar1 + 0x18))(plVar1,*puVar2);
      lVar3 = FUN_004aeac0(plVar1[0x8d],iVar4);
      FUN_00409a70(lVar3 + 8,local_3c,0x14);
      FUN_01d311c0(*param_1,&local_40,0x18);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar4 = FUN_01d31a40(*param_1);
  if (iVar4 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  return;
}

