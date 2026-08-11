/* Ghidra address: 018b88e0 */
/* Ghidra symbol: FUN_018b88e0 */


void FUN_018b88e0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  uVar3 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"anchors");
  iVar5 = param_2 + 1;
  if (-1 < iVar5) {
    iVar1 = FUN_01803a10(uVar3);
    if (iVar5 < iVar1) {
      uVar4 = FUN_018039f0(uVar3,iVar5);
      FUN_01803cc0(uVar4,local_40,&DAT_018b8ab4);
      iVar5 = FUN_0043fc00(local_40[0]);
      iVar1 = FUN_01803a10(uVar3);
      param_2 = param_2 + 1;
      if (param_2 <= iVar1 + -1) {
        iVar1 = ((iVar1 + -1) - param_2) + 1;
        do {
          uVar4 = FUN_018039f0(uVar3,param_2);
          FUN_01803cc0(uVar4,&local_50,L"page");
          iVar2 = FUN_0043fc00(local_50);
          FUN_0043f750(&local_48,iVar2 + 1);
          FUN_01803ed0(uVar4,L"page",local_48);
          FUN_01803cc0(uVar4,&local_60,&DAT_018b8ab4);
          iVar2 = FUN_0043fc00(local_60);
          FUN_0043f750(&local_58,iVar2 + (param_3 - iVar5));
          FUN_01803ed0(uVar4,&DAT_018b8ab4,local_58);
          param_2 = param_2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  FUN_00414560(&local_60,5);
  return;
}

