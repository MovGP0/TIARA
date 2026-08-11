/* Ghidra address: 00cbf730 */
/* Ghidra symbol: FUN_00cbf730 */


undefined8 FUN_00cbf730(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_18 = FUN_004afa30(param_1);
  if (*(int *)(local_18 + 0x10) < 1) {
    local_10 = 0;
  }
  else {
    iVar1 = FUN_00cbfa30(param_1);
    local_10 = FUN_004aeac0(local_18,iVar1 + -1);
    iVar1 = FUN_00cbfa30(param_1);
    FUN_004ae870(local_18,iVar1 + -1);
  }
  FUN_00412130(*(undefined8 *)(param_1 + 0x10));
  return local_10;
}

