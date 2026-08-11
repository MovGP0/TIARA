/* Ghidra address: 01400c40 */
/* Ghidra symbol: FUN_01400c40 */


void FUN_01400c40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (param_2 == (longlong *)0x0) goto code_r0x01400e3e;
  cVar2 = FUN_0198a580(param_2);
  if (cVar2 != '\x04') goto code_r0x01400e3e;
  cVar2 = FUN_01400ba0(param_1,param_2);
  if (cVar2 == '\0') goto code_r0x01400e3e;
  (**(code **)(*param_2 + 0x288))(param_2,&local_30);
  FUN_0043e130(local_20,local_30);
  sVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (sVar3 == 6) {
LAB_01400ce6:
    FUN_00416ba0(local_20,&DAT_01400e88,local_20[0]);
  }
  else {
    sVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (sVar3 == 0x22) goto LAB_01400ce6;
  }
  iVar4 = FUN_004170c0(&DAT_01400e98,local_20[0],1);
  if (0 < iVar4) {
    FUN_00416dc0(local_20,local_20[0],1,iVar4 + -1);
  }
  if (local_20[0] != 0) {
    cVar2 = FUN_01400ae0(param_1,param_2);
    if (cVar2 == '\0') {
      FUN_00416cd0(&local_28,3,&LAB_01400ecc,local_20[0],&DAT_01400ebc);
    }
    else {
      FUN_00416cd0(&local_28,3,&DAT_01400ea8,local_20[0],&DAT_01400ebc);
    }
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x750) + 0x4f0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x780) + 0x4f0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
    cVar2 = FUN_01400be0(param_1,param_2);
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x6d8) + 0x4f0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_20[0]);
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x6f0) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_20[0]);
    }
  }
code_r0x01400e3e:
  FUN_00414560(&local_30,3);
  return;
}

