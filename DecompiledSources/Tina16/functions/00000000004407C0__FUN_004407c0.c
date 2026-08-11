/* Ghidra address: 004407c0 */
/* Ghidra symbol: FUN_004407c0 */


bool FUN_004407c0(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined1 *local_50;
  undefined8 local_48;
  uint local_3c [5];
  undefined1 local_28 [16];
  
  local_60[0] = 0;
  local_68 = 0;
  local_48 = 0;
  iVar3 = 0;
  uVar4 = FUN_00416740(param_1);
  iVar2 = thunk_FUN_041e708b(uVar4,0,local_3c);
  bVar5 = iVar2 != 0;
  if (((bVar5) && ((local_3c[0] & 0x400) != 0)) && (param_3 != '\0')) {
    cVar1 = FUN_0043da30(param_1,&local_48);
    if (cVar1 != '\0') {
      cVar1 = FUN_00442020(local_48);
      if (cVar1 != '\0') {
        FUN_00441640(&local_68,param_1);
        FUN_0044f850(local_60,local_68);
        FUN_00416ba0(&local_48,local_60[0],local_48);
      }
      uVar4 = FUN_00416740(local_48);
      iVar2 = thunk_FUN_041e708b(uVar4,0,local_3c);
      bVar5 = iVar2 != 0;
    }
  }
  if (!bVar5) {
    iVar3 = thunk_FUN_03ce33a6();
    if (iVar3 - 0x20U < 2) {
      uVar4 = FUN_00416740(param_1);
      iVar2 = FUN_00440770(uVar4,0,local_3c);
      if (iVar2 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0;
      }
    }
  }
  if (iVar3 == 0) {
    if ((local_3c[0] & 0x10) == 0) {
      local_50 = local_28;
      iVar2 = thunk_FUN_03b4a9a1(local_50,param_2);
      if (iVar2 == 0) {
        iVar3 = 0x20;
      }
    }
    else {
      iVar3 = 0x20;
    }
  }
  FUN_00414560(&local_68,2);
  FUN_00414480(&local_48);
  return iVar3 == 0;
}

