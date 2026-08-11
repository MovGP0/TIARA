/* Ghidra address: 004c0e60 */
/* Ghidra symbol: FUN_004c0e60 */


void FUN_004c0e60(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_40 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40[0] = 0;
  local_20[0] = 0;
  cVar2 = FUN_004bea50(*(undefined8 *)(param_1 + 0x90));
  if (cVar2 == '\r') {
    FUN_004c23c0(*(undefined8 *)(param_1 + 0x90));
    FUN_0041b800(local_20);
    FUN_0058f480(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),local_20[0]);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x60);
    FUN_004c0450(*(undefined8 *)(param_1 + 0x90),local_40);
    local_28 = FUN_004bd480(&PTR_FUN_004bb3d0,1,*(undefined8 *)(param_1 + 0x98),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x30),
                            *(undefined8 *)(param_1 + 0xa0),0,local_40[0]);
    FUN_00597e50(lVar1 + 8,&local_28);
  }
  FUN_00414480(local_40);
  FUN_0041b800(local_20);
  return;
}

