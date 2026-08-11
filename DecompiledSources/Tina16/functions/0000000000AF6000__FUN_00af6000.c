/* Ghidra address: 00af6000 */
/* Ghidra symbol: FUN_00af6000 */


void FUN_00af6000(longlong param_1,uint param_2)

{
  longlong lVar1;
  ushort uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  uVar2 = (ushort)(param_2 >> 0x10);
  if (uVar2 == 0) {
    FUN_00af26c0(param_1,param_2 & 0xffff);
  }
  else {
    iVar4 = uVar2 - 1;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x8b0) + 0x2a0);
    if (iVar4 < *(int *)(lVar1 + 0x10)) {
      puVar3 = (undefined8 *)FUN_00ac3910(lVar1,iVar4);
      iVar4 = (**(code **)*puVar3)(puVar3);
      FUN_00af26c0(param_1,iVar4 + (param_2 & 0xffff));
    }
  }
  return;
}

