/* Ghidra address: 0045b0a0 */
/* Ghidra symbol: FUN_0045b0a0 */


longlong FUN_0045b0a0(longlong param_1,char param_2,int param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_2c [7];
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  if (param_3 == 0) {
    uVar2 = thunk_FUN_041a78f9();
    *(undefined4 *)(local_res8 + 0x10) = uVar2;
  }
  else {
    *(int *)(local_res8 + 0x10) = param_3;
  }
  *(undefined4 *)(local_res8 + 0x14) = param_4;
  *(undefined4 *)(local_res8 + 0x18) = param_5;
  iVar3 = thunk_FUN_041c63c1(*(undefined4 *)(local_res8 + 0x10),local_2c);
  if (iVar3 == 0) {
    uVar4 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_020043b8);
    FUN_004134c0(uVar4);
  }
  *(int *)(local_res8 + 0xc) = local_2c[0];
  *(bool *)(local_res8 + 8) = local_2c[0] == 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

