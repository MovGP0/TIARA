/* Ghidra address: 00bb2de0 */
/* Ghidra symbol: FUN_00bb2de0 */


longlong FUN_00bb2de0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00bae230(local_res8,0,local_res8);
  uVar2 = FUN_00b9c830(&DAT_00b9c5e8,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  *(undefined1 *)(local_res8 + 0x20) = 9;
  lVar3 = FUN_00410e60(&DAT_00b9fe98,1);
  *(longlong *)(local_res8 + 0x68) = lVar3;
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0x10;
  }
  FUN_0041b890(local_res8 + 0x60,lVar3,&DAT_00bb2f70);
  *(undefined1 *)(local_res8 + 0x70) = 1;
  *(undefined ***)(local_res8 + 0x80) = &PTR_FUN_00ba3030;
  *(undefined ***)(local_res8 + 0x88) = &PTR_FUN_00ba47f0;
  *(undefined ***)(local_res8 + 0x90) = &PTR_FUN_00ba42f8;
  *(undefined ***)(local_res8 + 0x98) = &PTR_FUN_00ba4cf8;
  *(undefined ***)(local_res8 + 0xa0) = &PTR_FUN_00ba22a0;
  *(undefined ***)(local_res8 + 0xa8) = &PTR_FUN_00ba2a88;
  *(undefined1 **)(local_res8 + 0xb0) = &LAB_00ba3dc0;
  uVar2 = FUN_004afee0(&DAT_00474160,1);
  *(undefined8 *)(local_res8 + 0xb8) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

