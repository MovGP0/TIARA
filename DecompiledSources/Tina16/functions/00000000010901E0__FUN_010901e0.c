/* Ghidra address: 010901e0 */
/* Ghidra symbol: FUN_010901e0 */


void FUN_010901e0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_38;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_50 = auStack_78;
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *param_3 = uVar1;
  FUN_01090160(param_1,param_2,local_20);
  iVar2 = *(int *)(local_20 + 0x10);
  local_24 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_30 = FUN_004aeac0(local_20,local_24);
      if (*(longlong *)(local_30 + 0x18) != 0) {
        local_38 = *(longlong *)(local_30 + 0x18);
        FUN_004aee30(*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x18),local_38);
        (**(code **)(*(longlong *)*param_3 + 0x78))
                  ((longlong *)*param_3,*(undefined8 *)(local_38 + 0x30));
      }
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_20);
  return;
}

