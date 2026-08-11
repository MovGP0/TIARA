/* Ghidra address: 014993c0 */
/* Ghidra symbol: FUN_014993c0 */


void FUN_014993c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0149a5d0(param_1);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0xbc8) + 0xa8))(*(longlong **)(param_1 + 0xbc8));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0xbc8),&local_10);
    lVar1 = *(longlong *)(param_1 + 0x930);
    FUN_010cd780(local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x8b8) + 0x4e8),lVar1 + 0x628,
                 lVar1 + 0x630,lVar1 + 0x650,*(undefined4 *)(param_1 + 0xc08));
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x8b8),0);
  }
  FUN_00414480(&local_10);
  return;
}

