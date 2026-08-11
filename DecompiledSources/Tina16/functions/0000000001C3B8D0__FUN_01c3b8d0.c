/* Ghidra address: 01c3b8d0 */
/* Ghidra symbol: FUN_01c3b8d0 */


void FUN_01c3b8d0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_78;
  longlong local_70;
  undefined1 local_68 [4];
  int local_64;
  undefined1 local_50 [4];
  int local_4c;
  int local_44;
  undefined8 local_40 [2];
  
  local_78 = 0;
  local_70 = 0;
  local_40[0] = 0;
  FUN_008482c0(*(undefined8 *)(param_1 + 0x8e0),local_68);
  if ((-1 < local_64) &&
     (FUN_0084e320(*(undefined8 *)(param_1 + 0x8e0),&local_70,1,local_64 + 1), local_70 != 0)) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x8e0) + 0x4a4);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        FUN_0084e320(*(undefined8 *)(param_1 + 0x8e0),local_40,iVar3,local_64 + 1);
        uVar2 = *(undefined8 *)(param_1 + 0x8e0);
        FUN_0084e320(uVar2,&local_78,iVar3,local_64);
        FUN_0084e3e0(uVar2,iVar3,local_64 + 1,local_78);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x8e0),iVar3,local_64,local_40[0]);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_008482c0(*(undefined8 *)(param_1 + 0x8e0),local_50);
    local_4c = local_4c + 1;
    local_44 = local_44 + 1;
    FUN_00848bf0(*(undefined8 *)(param_1 + 0x8e0),local_50);
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x988) + (longlong)local_64 * 4);
    iVar4 = local_64 + -1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x988) + (longlong)local_64 * 4) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x988) + (longlong)iVar4 * 4);
    *(undefined4 *)(*(longlong *)(param_1 + 0x988) + (longlong)iVar4 * 4) = uVar1;
    FUN_01c3bc80(param_1,CONCAT71((int7)(int3)((uint)iVar4 >> 8),1));
  }
  FUN_00414560(&local_78,2);
  FUN_00414480(local_40);
  return;
}

