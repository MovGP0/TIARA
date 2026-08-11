/* Ghidra address: 00f49100 */
/* Ghidra symbol: FUN_00f49100 */


longlong FUN_00f49100(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  int local_58;
  longlong local_48;
  int local_40;
  int local_3c;
  longlong local_30;
  
  local_30 = 0;
  lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
  iVar4 = *(int *)(lVar2 + 0x10);
  iVar3 = 0;
  local_48 = param_1;
  local_40 = param_3;
  local_3c = param_4;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_00b94e60(lVar2,iVar3);
      FUN_00f49000(auStack_78,uVar1);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  lVar2 = FUN_00f48930(*(undefined8 *)(local_48 + 8),param_2);
  if ((local_30 == 0) || (lVar2 == 0)) {
    FUN_00410f20(local_30);
    local_30 = 0;
  }
  else if (((local_40 == *(int *)(lVar2 + 0xc)) && (local_3c == *(int *)(lVar2 + 0x10))) ||
          ((local_40 == *(int *)(lVar2 + 0x2c) && (local_3c == *(int *)(lVar2 + 0x30))))) {
    local_58 = local_3c;
    FUN_00f48d70(local_30,local_30,0,local_40);
  }
  return local_30;
}

