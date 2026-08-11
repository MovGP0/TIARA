/* Ghidra address: 00c0fcb0 */
/* Ghidra symbol: FUN_00c0fcb0 */


undefined1 FUN_00c0fcb0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40);
  if (lVar1 == 0) {
    local_10 = FUN_00bd73a0(&PTR_FUN_00bd5550,1,0);
    FUN_00bd77a0(local_10);
    cVar2 = FUN_00c0fc90(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x5d8),local_10);
    local_11 = cVar2 == '\0';
    FUN_00410f20(local_10);
  }
  else {
    local_20 = auStack_48;
    cVar2 = FUN_00c0fc90(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x5d8),
                         *(undefined8 *)(lVar1 + 0x5d8));
    local_11 = cVar2 == '\0';
  }
  return local_11;
}

