/* Ghidra address: 0184b540 */
/* Ghidra symbol: FUN_0184b540 */


longlong FUN_0184b540(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_48 = 0;
  FUN_01847460(local_res8,0,0,10);
  *(undefined8 *)(local_res8 + 0x98) = param_3;
  *(undefined8 *)(local_res8 + 0x90) = param_3;
  local_20 = *(longlong *)(local_res8 + 0x98);
  do {
    if (local_20 == 0) {
code_r0x0184b5f6:
      *(undefined1 *)(*(longlong *)(local_res8 + 0x98) + 0x150) =
           *(undefined1 *)(*(longlong *)(local_res8 + 0x90) + 0x150);
      if (param_2 != '\0') {
        local_res8 = FUN_00411a20(local_res8);
      }
      return local_res8;
    }
    if (*(char *)(local_20 + 200) != '\0') {
      *(longlong *)(local_res8 + 0x90) = local_20;
      goto code_r0x0184b5f6;
    }
    local_20 = *(longlong *)(local_20 + 0x110);
  } while( true );
}

