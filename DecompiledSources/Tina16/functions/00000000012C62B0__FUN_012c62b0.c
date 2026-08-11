/* Ghidra address: 012c62b0 */
/* Ghidra symbol: FUN_012c62b0 */


void FUN_012c62b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x748));
  if (lVar2 != 0) {
    lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x748));
    if ((*(uint *)(*(longlong *)(lVar2 + 0x18) + 0x62c) & 0x20) == 0x20) {
      uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x748));
      lVar2 = FUN_006dd390(uVar3);
      iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x10),&DAT_012c6478);
      if (iVar1 == 0) {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),local_30);
        lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x748));
        FUN_00416cd0(local_20,4,local_30[0],&DAT_012c6478,*(undefined8 *)(lVar2 + 0x10),L".TSC");
      }
      else {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_38);
        uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x748));
        lVar2 = FUN_006dd390(uVar3);
        lVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x748));
        FUN_00416cd0(local_20,6,local_38,&DAT_012c6478,*(undefined8 *)(lVar2 + 0x10),&DAT_012c6478,
                     *(undefined8 *)(lVar4 + 0x10),L".TSC");
      }
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

