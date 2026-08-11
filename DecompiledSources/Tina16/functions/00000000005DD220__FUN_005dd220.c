/* Ghidra address: 005dd220 */
/* Ghidra symbol: FUN_005dd220 */


void FUN_005dd220(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    puVar1 = auStack_58;
    if (*(longlong *)(param_1 + 8) != 0) {
      cVar2 = FUN_00440a20(*(undefined8 *)(param_1 + 8),1);
      puVar1 = local_30;
      if (cVar2 != '\0') {
        local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        (**(code **)(*local_20 + 0xe0))
                  (local_20,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
        if (*(longlong *)(param_1 + 0x20) == 0) {
          *(longlong *)(param_1 + 0x20) = local_20[1];
        }
        FUN_005dd980(param_1,local_20);
        FUN_00410f20(local_20);
        goto code_r0x005dd347;
      }
    }
    local_30 = puVar1;
    FUN_005dce70(param_1);
  }
  else {
    local_30 = auStack_58;
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0x10),0);
    (**(code **)(*local_20 + 0xf0))
              (local_20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
    if (*(longlong *)(param_1 + 0x20) == 0) {
      *(longlong *)(param_1 + 0x20) = local_20[1];
    }
    FUN_005dd980(param_1,local_20);
    FUN_00410f20(local_20);
  }
code_r0x005dd347:
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

