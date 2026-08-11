/* Ghidra address: 01cc3bb0 */
/* Ghidra symbol: FUN_01cc3bb0 */


longlong FUN_01cc3bb0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01cc3810(local_res8);
  uVar3 = 0;
  FUN_01d331a0(local_res8,0,param_3);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  lVar2 = FUN_01cc21c0(&PTR_FUN_01cb4ce0,uVar3,param_3);
  *(longlong *)(local_res8 + 8) = lVar2;
  if (*(byte *)(lVar2 + 0x434) < 0x10) {
    bVar4 = ((int)CONCAT62((int6)((ulonglong)uVar3 >> 0x10),1) << (*(byte *)(lVar2 + 0x434) & 0x1f)
            & 0x80ffU) != 0;
  }
  else {
    bVar4 = false;
  }
  if ((bVar4) && (*(char *)(local_res8 + 0x54) != '\0')) {
    uVar3 = FUN_01cc00e0(&PTR_FUN_01cb2978,1,param_3);
    *(undefined8 *)(local_res8 + 0x10) = uVar3;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

