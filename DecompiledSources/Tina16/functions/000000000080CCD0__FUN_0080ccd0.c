/* Ghidra address: 0080ccd0 */
/* Ghidra symbol: FUN_0080ccd0 */


void FUN_0080ccd0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  if (*(char *)(param_1 + 0x158) == '\0') {
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      thunk_FUN_041b2403(*(longlong *)(param_1 + 0x2d0),0xb020,0,&local_38);
    }
  }
  else {
    FUN_004aea80(*(undefined8 *)(param_1 + 0x160));
    puVar1 = (undefined8 *)FUN_004095c0(0x10);
    *puVar1 = local_38;
    puVar1[1] = uStack_30;
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x160),puVar1);
  }
  return;
}

