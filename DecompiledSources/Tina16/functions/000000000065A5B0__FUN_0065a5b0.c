/* Ghidra address: 0065a5b0 */
/* Ghidra symbol: FUN_0065a5b0 */


void FUN_0065a5b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (*(byte *)(param_2 + 8) < 4) {
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      FUN_0064f2a0(*(undefined8 *)(lVar1 + 0x10),param_2);
    }
  }
  else if (*(byte *)(param_2 + 8) == 5) {
    local_20 = FUN_0064d3a0(param_1,lVar1);
    uVar2 = FUN_00656230(param_1,&local_20,0,0,0);
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    if (*(longlong *)(param_2 + 0x18) == 0) {
      *(undefined8 *)(param_2 + 0x18) = param_1;
    }
  }
  return;
}

