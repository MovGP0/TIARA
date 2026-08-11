/* Ghidra address: 015a00e0 */
/* Ghidra symbol: FUN_015a00e0 */


undefined8 FUN_015a00e0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_18;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    local_18 = (uint)(param_2 == 0);
    *(uint *)(lVar1 + 0x1bd4) = local_18;
    *(undefined4 *)(lVar1 + 0x1bd4) = 1;
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

