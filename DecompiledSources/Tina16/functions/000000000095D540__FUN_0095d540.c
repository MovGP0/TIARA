/* Ghidra address: 0095d540 */
/* Ghidra symbol: FUN_0095d540 */


longlong FUN_0095d540(longlong param_1,char param_2,longlong param_3,undefined8 param_4,char param_5
                     )

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  if (param_5 == '\x01') {
    FUN_0095d3c0(local_res8,0,*(undefined8 *)(param_3 + 0x18),param_4);
  }
  else {
    FUN_0095d3c0(local_res8,0,*(undefined8 *)(param_3 + 0x18),0);
  }
  if (param_5 != '\0') {
    if (param_5 == '\x01') {
      *(undefined1 *)(local_res8 + 0x28) = 0;
      goto LAB_0095d5ec;
    }
    if (param_5 != '\x02') goto LAB_0095d5ec;
  }
  *(undefined1 *)(local_res8 + 0x28) = 7;
LAB_0095d5ec:
  *(char *)(local_res8 + 0x29) = param_5;
  *(undefined1 *)(local_res8 + 0x2a) = 0;
  *(undefined1 *)(local_res8 + 0x2b) = 0;
  *(undefined1 *)(local_res8 + 0x10) = 3;
  *(longlong *)(local_res8 + 0x30) = param_3;
  uVar2 = FUN_00957190(&PTR_FUN_00910da8,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

