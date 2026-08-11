/* Ghidra address: 00b181d0 */
/* Ghidra symbol: FUN_00b181d0 */


longlong FUN_00b181d0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_68;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_0041b800(local_res8 + 0x18);
  lVar3 = FUN_00b17470(&DAT_00b16398,1);
  *(longlong *)(local_res8 + 0x10) = lVar3;
  FUN_00414bf0(lVar3 + 8,"Root Entry");
  uVar4 = FUN_0041b800(local_res8 + 0x18);
  iVar2 = thunk_FUN_03aeb217(0,0xffffffff,uVar4);
  if (iVar2 != 0) {
    uVar4 = FUN_00b17000(&PTR_FUN_00b16d88,1,0);
    FUN_004134c0(uVar4);
  }
  FUN_00b183f0(local_res8,param_3);
  local_40 = FUN_0041b800(local_20);
  local_48 = 0;
  iVar2 = thunk_FUN_041fece8(*(undefined8 *)(local_res8 + 0x18),0,0x10,0);
  if (iVar2 != 0) {
    uVar4 = FUN_00b17000(&PTR_FUN_00b16d88,1,0);
    FUN_004134c0(uVar4);
  }
  FUN_00b17890(*(undefined8 *)(local_res8 + 0x10),local_20[0]);
  FUN_0041b800(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

