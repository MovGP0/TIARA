/* Ghidra address: 0153fc60 */
/* Ghidra symbol: FUN_0153fc60 */


longlong FUN_0153fc60(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  int local_24;
  longlong local_20;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined4 *)(local_res8 + 8) = *(undefined4 *)(param_3 + 8);
  uVar2 = FUN_01d34560(&PTR_FUN_01d33528,1,5,5);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  local_20 = *(longlong *)(param_3 + 0x10);
  iVar3 = *(int *)(local_20 + 0x10);
  local_24 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_30 = FUN_01d347d0(local_20,local_24);
      uVar2 = FUN_0153f8f0(&DAT_0153e548,1,local_30);
      (**(code **)(**(longlong **)(local_res8 + 0x10) + 0x50))
                (*(longlong **)(local_res8 + 0x10),uVar2);
      local_24 = local_24 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

