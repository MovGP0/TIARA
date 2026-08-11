/* Ghidra address: 00de0120 */
/* Ghidra symbol: FUN_00de0120 */


void FUN_00de0120(longlong param_1,int param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  longlong *local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_30 = 0;
  puVar1 = auStack_68;
  if (*(char *)(param_1 + 0x508) == '\0') {
    *(undefined1 *)(param_1 + 0x508) = 1;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x500) + 0x10);
    local_1c = 0;
    puVar1 = auStack_68;
    if (-1 < iVar2 + -1) {
      do {
        local_40 = puVar1;
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x490) + 0x58) + (longlong)local_1c * 4)
            == param_2) {
          local_28 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x500),local_1c);
          (**(code **)(*local_28 + 0x10))(local_28,param_3);
          FUN_00dd8930(local_28,&local_30);
          FUN_00ddfe30(param_1,param_2,local_30);
        }
        local_1c = local_1c + 1;
        iVar2 = iVar2 + -1;
        puVar1 = local_40;
      } while (iVar2 != 0);
    }
    *(undefined1 *)(param_1 + 0x508) = 0;
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_0041b800(&local_30);
  return;
}

