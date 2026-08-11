/* Ghidra address: 016bcc50 */
/* Ghidra symbol: FUN_016bcc50 */


longlong FUN_016bcc50(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_016bc770(local_res8,0,param_3);
  (**(code **)(**(longlong **)(local_res8 + 0x58) + 0x10))
            (*(longlong **)(local_res8 + 0x58),*(undefined8 *)(param_3 + 0x58));
  (**(code **)(**(longlong **)(local_res8 + 0x60) + 0x10))
            (*(longlong **)(local_res8 + 0x60),*(undefined8 *)(param_3 + 0x60));
  iVar2 = (**(code **)(**(longlong **)(local_res8 + 0x60) + 0x28))();
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_3 + 0x60) + 0x30))
                        (*(longlong **)(param_3 + 0x60),local_1c);
      uVar3 = FUN_016a4670(&DAT_0169ffe0,1,uVar3);
      (**(code **)(**(longlong **)(local_res8 + 0x60) + 0x48))
                (*(longlong **)(local_res8 + 0x60),local_1c,uVar3);
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

