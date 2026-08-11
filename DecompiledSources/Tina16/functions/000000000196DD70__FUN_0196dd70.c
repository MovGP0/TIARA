/* Ghidra address: 0196dd70 */
/* Ghidra symbol: FUN_0196dd70 */


void FUN_0196dd70(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  FUN_004b1e70(param_1);
  local_20 = FUN_01810fa0(&DAT_018103d8,1,0);
  *(undefined1 *)(local_20 + 0x40) = param_3;
  FUN_01803cc0(param_2,&local_38,L"Name");
  FUN_00414ad0(param_1 + 0x28,local_38);
  iVar1 = FUN_01803a10();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_018039f0(param_2,local_24);
      iVar2 = FUN_0043e420(*(undefined8 *)(lVar3 + 0x20),L"item");
      if (iVar2 == 0) {
        lVar3 = FUN_018039f0(param_2,local_24);
        uVar4 = FUN_0196dc60(param_1);
        FUN_018113d0(local_20,*(undefined8 *)(lVar3 + 0x30),uVar4);
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_20);
  FUN_0196e2e0(param_1);
  FUN_00414480(&local_38);
  return;
}

