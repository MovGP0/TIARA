/* Ghidra address: 015daaa0 */
/* Ghidra symbol: FUN_015daaa0 */


void FUN_015daaa0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x238) + 0x84) == 0) {
    cVar1 = FUN_015c08c0(*(undefined8 *)(param_1 + 0x88));
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x103) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x103) = 1;
    }
    goto code_r0x015dacb3;
  }
  cVar1 = FUN_015c9b20(*(undefined8 *)(param_1 + 0x238));
  if ((cVar1 != '\0') && (*(short *)(*(longlong *)(param_1 + 0x238) + 0x88) == 0)) {
    *(undefined1 *)(param_1 + 0x103) = 0;
    goto code_r0x015dacb3;
  }
  *(undefined1 *)(param_1 + 0x103) = 2;
  FUN_00414b50(&local_10,*(undefined8 *)(param_1 + 0x88));
  FUN_015d9080(param_1,&local_10,*(ushort *)(*(longlong *)(param_1 + 0x238) + 0x88) - 1,0);
  cVar1 = FUN_015bf1b0(local_10);
  if (cVar1 != '\0') {
    if (*(short *)(*(longlong *)(param_1 + 0x238) + 0x88) == 0) {
      *(undefined1 *)(param_1 + 0x103) = 0;
    }
    goto code_r0x015dacb3;
  }
  *(bool *)(*(longlong *)(param_1 + 0x108) + 8) =
       *(char *)(*(longlong *)(param_1 + 0x108) + 8) == '\0';
  FUN_00414b50(&local_10,*(undefined8 *)(param_1 + 0x88));
  FUN_015d9080(param_1,&local_10,*(ushort *)(*(longlong *)(param_1 + 0x238) + 0x88) - 1,0);
  cVar1 = FUN_015bf1b0(local_10);
  if (cVar1 != '\0') goto code_r0x015dacb3;
  *(bool *)(*(longlong *)(param_1 + 0x108) + 8) =
       *(char *)(*(longlong *)(param_1 + 0x108) + 8) == '\0';
  FUN_015bf270(local_20,*(undefined8 *)(param_1 + 0x88));
  iVar2 = FUN_004170c0(L".exe",local_20[0],1);
  if (iVar2 == 0) {
    if (*(short *)(*(longlong *)(param_1 + 0x238) + 0x88) == 0) {
      cVar1 = FUN_015c08c0(*(undefined8 *)(param_1 + 0x88));
      if (cVar1 == '\0') goto LAB_015dac85;
    }
    *(undefined1 *)(param_1 + 0x103) = 1;
  }
  else {
LAB_015dac85:
    *(undefined1 *)(param_1 + 0x103) = 0;
  }
code_r0x015dacb3:
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

