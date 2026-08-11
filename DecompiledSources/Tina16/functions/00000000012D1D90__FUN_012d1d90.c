/* Ghidra address: 012d1d90 */
/* Ghidra symbol: FUN_012d1d90 */


void FUN_012d1d90(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = *(longlong *)(param_1 + 8);
  if (param_3 == '\x06') {
    uVar2 = *(undefined4 *)(lVar1 + 0x1208);
    uVar3 = *(uint *)(lVar1 + 0x120c);
  }
  else if (param_3 == '\b') {
    uVar2 = *(undefined4 *)(lVar1 + 0x2f8);
    uVar3 = (uint)*(ushort *)(lVar1 + 0x963);
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x2f8);
    uVar3 = (uint)*(ushort *)(lVar1 + 0x838);
  }
  FUN_012d19f0(local_res10[0],*(undefined8 *)(lVar1 + 0xb0),*(undefined8 *)(lVar1 + 0xf20),uVar2,
               uVar3);
  FUN_00414480(local_res10);
  return;
}

