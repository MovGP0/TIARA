/* Ghidra address: 01898ca0 */
/* Ghidra symbol: FUN_01898ca0 */


void FUN_01898ca0(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_48;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    local_9 = *(undefined1 *)(param_1 + 0x72c);
    if (param_2 != '\0') {
      *(undefined1 *)(param_1 + 0x72c) = 0;
    }
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_03a2fc9d(uVar2,param_1 + 0x738,-(uint)((*(uint *)(param_1 + 0xa0) & 0x40) == 0));
    *(undefined1 *)(param_1 + 0x72c) = local_9;
  }
  return;
}

